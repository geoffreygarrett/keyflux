use std::collections::HashMap;
use handlebars::{Path, Template};
use handlebars::template::{HelperTemplate, Parameter, TemplateElement};
use regex::Regex;
use serde_json::Value as Json;
use crate::helper::arg::TypeInfo;

#[derive(Debug, PartialEq)]
pub struct TemplateSchema {
    pub helper_parameters: HashMap<String, Vec<ParameterInfo>>,
}

#[derive(Debug, PartialEq)]
pub struct ParameterInfo {
    pub name: String,
    pub required: bool,
    pub default: Option<String>,
    pub type_info: TypeInfo, // New field for type information
}

/// Parses a Handlebars template to extract input parameters and constructs a schema.
fn parse_template_schema(template: &Template) -> TemplateSchema {
    let mut helper_parameters = HashMap::new();

    for element in &template.elements {
        match element {
            TemplateElement::HtmlExpression(ht)
            | TemplateElement::Expression(ht)
            | TemplateElement::HelperBlock(ht) => {
                extract_helper_parameters(ht, &mut helper_parameters);
            }
            _ => {} // Ignore other elements
        }
    }

    TemplateSchema { helper_parameters }
}

/// Extracts parameters from a HelperTemplate and updates the schema map.
/// Extracts parameters from a HelperTemplate and updates the schema map.
fn extract_helper_parameters(helper: &HelperTemplate, schema: &mut HashMap<String, Vec<ParameterInfo>>) {
    let helper_name = if let Parameter::Name(ref name) = helper.name {
        name.clone()
    } else {
        return; // If it's not a named parameter, we don't process it
    };

    let mut parameters = vec![];

    // Recursively process nested templates
    if let Some(template) = &helper.template {
        for element in template.elements.iter() {
            match element {
                TemplateElement::Expression(ht)
                | TemplateElement::HelperBlock(ht)
                | TemplateElement::HtmlExpression(ht) => {
                    extract_helper_parameters(ht, schema);
                }
                _ => {} // Ignore other elements
            }
        }
    }

    // Process each parameter in the helper
    for param in &helper.params {
        match param {
            Parameter::Name(name) => {
                let parameter_info = ParameterInfo {
                    name: name.clone(),
                    required: is_required(helper, name),
                    default: get_default(helper, name),
                    type_info: get_declared_type(helper, name),
                };
                parameters.push(parameter_info);
            }
            Parameter::Path(path) => {
                let parameter_info = ParameterInfo {
                    name: path_to_string(path),
                    required: is_required(helper, &path_to_string(path)),
                    default: get_default(helper, &path_to_string(path)),
                    type_info: get_declared_type(helper, &path_to_string(path)),
                };
                parameters.push(parameter_info);
            }
            Parameter::Literal(literal) => {
                let (literal_value, type_info) = literal_to_string(literal);
                let declared_type = get_declared_type(helper, &literal_value);
                if declared_type != type_info {
                    panic!("Declared type does not match actual type for parameter: {}", literal_value);
                }
                let parameter_info = ParameterInfo {
                    name: literal_value.clone(),
                    required: is_required(helper, &literal_value),
                    default: get_default(helper, &literal_value),
                    type_info: get_declared_type(helper, &literal_value),
                };
                parameters.push(parameter_info);
            }
            Parameter::Subexpression(subexpr) => {
                // Recursively process subexpression elements
                match &*subexpr.element {
                    TemplateElement::Expression(ht)
                    | TemplateElement::HelperBlock(ht)
                    | TemplateElement::HtmlExpression(ht) => {
                        extract_helper_parameters(ht, schema);
                    }
                    _ => {} // Ignore other elements
                }

                // Extract parameters from subexpression params
                let sub_params = subexpr
                    .params()
                    .map(|params| params.iter().collect::<Vec<&Parameter>>())
                    .unwrap_or_else(Vec::new);

                for sub_param in sub_params {
                    let sub_param_info = extract_subexpression_param(subexpr.name(), sub_param);
                    parameters.push(sub_param_info);
                }
            }
        }
    }

    schema.entry(helper_name).or_insert(vec![]).extend(parameters);
}

/// Determines the type of a Literal parameter.
fn get_literal_type(literal: &Json) -> TypeInfo {
    match literal {
        Json::String(_) => TypeInfo::String,
        Json::Number(_) => TypeInfo::Number,
        Json::Bool(_) => TypeInfo::Boolean,
        Json::Null => TypeInfo::String, // Assuming null is treated as String type
        Json::Array(_) => TypeInfo::Array,
        Json::Object(_) => TypeInfo::Object,
    }
}

/// Extracts parameters from a subexpression parameter.
fn extract_subexpression_param(subexpr_name: &str, param: &Parameter) -> ParameterInfo {
    match param {
        Parameter::Name(name) => ParameterInfo {
            name: format!("subexpression: {}({})", subexpr_name, name),
            required: false,
            default: None,
            type_info: TypeInfo::String,
        },
        Parameter::Path(path) => ParameterInfo {
            name: format!("subexpression: {}({})", subexpr_name, path_to_string(path)),
            required: false,
            default: None,
            type_info: TypeInfo::String,
        },
        Parameter::Literal(literal) => ParameterInfo {
            name: format!("subexpression: {}({:?})", subexpr_name, literal_to_string(literal)),
            required: false,
            default: None,
            type_info: get_literal_type(literal),
        },
        _ => {
            // Handle other types if needed
            ParameterInfo {
                name: format!("subexpression: {}", subexpr_name),
                required: false,
                default: None,
                type_info: TypeInfo::String,
            }
        }
    }
}

/// Checks if a parameter is required by looking at the hash of the helper.
fn is_required(helper: &HelperTemplate, param_name: &str) -> bool {
    if let Some(param) = helper.hash.get("required") {
        if let Parameter::Literal(Json::Bool(required)) = param {
            return *required;
        }
    }
    false
}

/// Gets the default value of a parameter if specified in the helper hash.
fn get_default(helper: &HelperTemplate, param_name: &str) -> Option<String> {
    if let Some(param) = helper.hash.get("default") {
        if let Parameter::Literal(literal) = param {
            return Some(literal_to_string(literal).0);
        }
    }
    None
}

fn get_declared_type(helper: &HelperTemplate, param_name: &str) -> TypeInfo {
    if let Some(param) = helper.hash.get("type") {
        if let Parameter::Literal(literal) = param {
            return get_literal_type(literal);
        }
    }
    TypeInfo::String
}

/// Converts a Path parameter to a string.
fn path_to_string(path: &Path) -> String {
    let raw_path = format!("{:?}", path);
    let regex = regex::Regex::new(r#"(?:"|\\")([^\\"]+)(?:"|\\")"#).unwrap();
    if let Some(captures) = regex.captures(&raw_path) {
        captures.get(1).unwrap().as_str().to_string()
    } else {
        raw_path
    }
}

/// Converts a Literal parameter to a string.
/// Converts a Literal parameter to a string.
/// Converts a Literal parameter to a string.
///


fn literal_to_string(literal: &Json) -> (String, TypeInfo) {
    match literal {
        Json::String(s) => (s.clone(), TypeInfo::String),
        Json::Number(n) => (n.to_string(), TypeInfo::Number),
        Json::Bool(b) => (b.to_string(), TypeInfo::Boolean),
        Json::Null => ("null".to_string(), TypeInfo::Null),
        Json::Array(arr) => {
            let items: Vec<String> = arr.iter().map(|item| literal_to_string(item).0).collect();
            (format!("[{}]", items.join(", ")), TypeInfo::Array)
        }
        Json::Object(obj) => {
            let mut pairs = Vec::new();
            for (key, value) in obj {
                let (value_str, _) = literal_to_string(value);
                pairs.push(format!("{}: {}", key, value_str));
            }
            (format!("{{{}}}", pairs.join(", ")), TypeInfo::Object)
        }
        _ => {
            let parsed = format!("{:?}", literal);
            let captured = Regex::new(r#""([^"]+)""#)
                .unwrap()
                .captures(&parsed)
                .and_then(|c| c.get(1).map(|m| m.as_str().to_string()))
                .unwrap_or_else(|| parsed);
            (captured.clone(), TypeInfo::Unknown)
        }
    }
}

#[cfg(test)]
mod tests {
    use handlebars::Handlebars;

    use super::*;

    fn setup_handlebars(template_str: &str) -> Handlebars<'static> {
        let mut handlebars = Handlebars::new();
        handlebars.register_template_string("template", template_str).unwrap();
        handlebars
    }

    #[test]
    fn test_parse_simple_template() {
        let template_str = r#"
        curl -L \
        -X POST \
        -H "Accept: application/vnd.github+json" \
        -H "Authorization: Bearer {{arg "token" required=true}}" \
        -H "X-GitHub-Api-Version: 2022-11-28" \
        https://api.github.com/orgs/{{arg "org" required=true}}/actions/variables \
        -d '{
        "name":"{{arg "name" required=true}}",
        "value":"{{arg "value" required=true}}",
        "visibility":"{{arg "visibility" required=true}}"{{#if (eq visibility "selected")}},
        "selected_repository_ids":{{arg "selected_repository_ids" required=true default=[] type="array"}}
        {{/if}}
        }'
    "#;

        let handlebars = setup_handlebars(template_str);
        let template = handlebars.get_template("template").unwrap().clone();
        let schema = parse_template_schema(&template);

        assert!(schema.helper_parameters.contains_key("arg"));
        assert_eq!(
            schema.helper_parameters["arg"],
            vec![
                ParameterInfo {
                    name: "token".to_string(),
                    required: true,
                    default: None,
                    type_info: TypeInfo::String,
                },
                ParameterInfo {
                    name: "org".to_string(),
                    required: true,
                    default: None,
                    type_info: TypeInfo::String,
                },
                ParameterInfo {
                    name: "name".to_string(),
                    required: true,
                    default: None,
                    type_info: TypeInfo::String,
                },
                ParameterInfo {
                    name: "value".to_string(),
                    required: true,
                    default: None,
                    type_info: TypeInfo::String,
                },
                ParameterInfo {
                    name: "visibility".to_string(),
                    required: true,
                    default: None,
                    type_info: TypeInfo::String,
                },
                ParameterInfo {
                    name: "selected_repository_ids".to_string(),
                    required: true,
                    default: Some("[]".to_string()),
                    type_info: TypeInfo::String,
                },
            ]
        );
    }
    #[test]
    fn test_parse_template_with_literals_and_subexpressions() {
        let template_str = r#"
        {{#if (eq visibility "selected")}}
        Visibility is selected
        {{else}}
        Visibility is not selected
        {{/if}}
    "#;

        let handlebars = setup_handlebars(template_str);
        let template = handlebars.get_template("template").unwrap().clone();

        let schema = parse_template_schema(&template);

        assert!(schema.helper_parameters.contains_key("eq"));
        assert_eq!(
            schema.helper_parameters["eq"],
            vec![
                ParameterInfo {
                    name: "visibility".to_string(),
                    required: false,
                    default: None,
                    type_info: TypeInfo::String,
                },
                ParameterInfo {
                    name: "selected".to_string(),
                    required: false,
                    default: None,
                    type_info: TypeInfo::String,
                },
            ]
        );
    }
}

fn main() {
    // Test function calls for main if needed
}
