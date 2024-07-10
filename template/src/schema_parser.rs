use std::collections::{BTreeMap, HashMap};

use handlebars::{Path, Template};
use handlebars::template::{DecoratorTemplate, HelperTemplate, Parameter, TemplateElement};
use schemafy_lib::{Schema, SimpleTypes};
use serde_json::Value as Json;

/// Helper function to create a new schema with optional parameters
fn new_schema() -> Schema {
    Schema {
        ref_: None,
        schema: None,
        additional_items: None,
        additional_properties: None,
        all_of: None,
        any_of: None,
        default: None,
        definitions: Default::default(),
        dependencies: None,
        description: None,
        enum_: None,
        enum_names: None,
        exclusive_maximum: None,
        exclusive_minimum: None,
        format: None,
        properties: BTreeMap::new(),
        required: None,
        items: vec![],
        max_items: None,
        max_length: None,
        max_properties: None,
        maximum: None,
        min_items: None,
        min_length: None,
        min_properties: None,
        minimum: None,
        multiple_of: None,
        not: None,
        one_of: None,
        pattern: None,
        type_: vec![],
        id: None,
        pattern_properties: Default::default(),
        title: None,
        unique_items: None,
    }
}

fn sort_schema(schema: &mut Schema) {
    schema.properties = schema.properties.iter().map(|(k, v)| (k.clone(), v.clone())).collect();
    schema.definitions = schema.definitions.iter().map(|(k, v)| (k.clone(), v.clone())).collect();
    schema.pattern_properties = schema.pattern_properties.iter().map(|(k, v)| (k.clone(), v.clone())).collect();
    for item in schema.items.iter_mut() {
        sort_schema(item);
    }
    if let Some(all_of) = &mut schema.all_of {
        for item in all_of.iter_mut() {
            sort_schema(item);
        }
    }
    if let Some(any_of) = &mut schema.any_of {
        for item in any_of.iter_mut() {
            sort_schema(item);
        }
    }
    if let Some(one_of) = &mut schema.one_of {
        for item in one_of.iter_mut() {
            sort_schema(item);
        }
    }
    if let Some(not) = &mut schema.not {
        sort_schema(not);
    }
}


fn is_required(hash: &HashMap<String, Parameter>) -> bool {
    println!("{:?}", hash);
    if let Some(Parameter::Literal(Json::Bool(true))) = hash.get("required") {
        true
    } else {
        false
    }
}

fn get_default(hash: &HashMap<String, Parameter>) -> Option<Json> {
    if let Some(Parameter::Literal(default)) = hash.get("default") {
        Some(default.clone())
    } else {
        None
    }
}



fn get_type(hash: &HashMap<String, Parameter>) -> Option<SimpleTypes> {
    if let Some(param) = hash.get("type") {
        match param {
            Parameter::Literal(Json::String(type_str)) => match type_str.as_str() {
                "string" => Some(SimpleTypes::String),
                "number" => Some(SimpleTypes::Number),
                "boolean" | "bool" => Some(SimpleTypes::Boolean),
                "array" => Some(SimpleTypes::Array),
                "object" => Some(SimpleTypes::Object),
                _ => None,
            },
            Parameter::Name(type_str) => match type_str.as_str() {
                "string" => Some(SimpleTypes::String),
                "number" => Some(SimpleTypes::Number),
                "boolean" | "bool" => Some(SimpleTypes::Boolean),
                "array" => Some(SimpleTypes::Array),
                "object" => Some(SimpleTypes::Object),
                _ => None,
            },
            Parameter::Path(path) => match path_to_string(path).as_str() {
                "string" => Some(SimpleTypes::String),
                "number" => Some(SimpleTypes::Number),
                "boolean" | "bool" => Some(SimpleTypes::Boolean),
                "array" => Some(SimpleTypes::Array),
                "object" => Some(SimpleTypes::Object),
                _ => None,
            },
            _ => None,
        }
    } else {
        None
    }
}

/// Function to extract parameters from a DecoratorTemplate
fn extract_decorator_parameters(decorator: &DecoratorTemplate, properties: &mut BTreeMap<String, Schema>, required: &mut Vec<String>) {
    if let Parameter::Name(ref name) = decorator.name {
        extract_parameters(&decorator.params, properties, required, name, &decorator.hash);
    }
}

/// Function to extract parameters from a HelperTemplate
fn extract_helper_parameters(helper: &HelperTemplate, properties: &mut BTreeMap<String, Schema>, required: &mut Vec<String>) {
    if let Parameter::Name(ref name) = helper.name {
        extract_parameters(&helper.params, properties, required, name, &helper.hash);
    }
}

/// Generalized function to extract parameters from a template and update the properties map.
fn extract_parameters(params: &[Parameter], properties: &mut BTreeMap<String, Schema>, required: &mut Vec<String>, context_name: &str, hash: &HashMap<String, Parameter>) {
    for param in params {
        let (name, schema) = match param {
            Parameter::Name(name) => {
                let mut schema = infer_schema_from_parameter(param);
                if is_required(hash) {
                    required.push(name.clone());
                }
                schema.default = get_default(hash);
                if let Some(param_type) = get_type(hash) {
                    schema.type_ = vec![param_type];
                }
                (name.clone(), schema)
            }
            Parameter::Path(path) => {
                let name = path_to_string(path);
                let mut schema = infer_schema_from_parameter(param);
                if is_required(hash) {
                    required.push(name.clone());
                }
                schema.default = get_default(hash);
                if let Some(param_type) = get_type(hash) {
                    schema.type_ = vec![param_type];
                }
                (name, schema)
            }
            Parameter::Literal(literal) => (literal_to_string(literal), infer_schema_from_literal(literal)),
            Parameter::Subexpression(subexpr) => {
                let mut inner_properties = BTreeMap::new();
                let mut inner_required = Vec::new();
                parse_template_element(&subexpr.element, &mut inner_properties, &mut inner_required);
                let inner_schema = Schema {
                    properties: inner_properties,
                    required: if inner_required.is_empty() { None } else { Some(inner_required) },
                    ..new_schema()
                };
                (format!("_subexpression_{}", context_name), inner_schema)
            }
        };
        if !name.contains("_subexpression_") {
            properties.insert(name, schema);
        }
    }
}


/// Infers a Schema from a Parameter
fn infer_schema_from_parameter(param: &Parameter) -> Schema {
    let base_schema = new_schema();
    match param {
        Parameter::Name(name) => Schema {
            title: Some(name.clone()),
            ..base_schema
        },
        Parameter::Path(path) => Schema {
            description: Some(path_to_string(path)), // Convert Path to String here
            ..base_schema
        },
        _ => base_schema,
    }
}

/// Converts a JSON Literal to a String and infers a Schema
fn literal_to_string(literal: &Json) -> String {
    match literal {
        Json::String(s) => s.clone(),
        Json::Number(n) => n.to_string(),
        Json::Bool(b) => b.to_string(),
        Json::Null => "null".to_string(),
        _ => format!("{:?}", literal),
    }
}

fn infer_schema_from_literal(literal: &Json) -> Schema {
    let type_ = match literal {
        Json::String(_) => vec![SimpleTypes::String],
        Json::Number(_) => vec![SimpleTypes::Number],
        Json::Bool(_) => vec![SimpleTypes::Boolean],
        Json::Null => vec![SimpleTypes::Null],
        Json::Array(_) => vec![SimpleTypes::Array],
        Json::Object(_) => vec![SimpleTypes::Object],
        _ => vec![],
    };
    Schema { type_, default: Some(literal.clone()), ..new_schema() }
}

/// Parses a single Handlebars template element into schema properties
fn parse_template_element(element: &TemplateElement, properties: &mut BTreeMap<String, Schema>, required: &mut Vec<String>) {
    match element {
        TemplateElement::HtmlExpression(ht)
        | TemplateElement::Expression(ht)
        | TemplateElement::HelperBlock(ht) => {
            if let Some(template) = &ht.template {
                for element in &template.elements {
                    parse_template_element(element, properties, required);
                }
            }
            extract_helper_parameters(ht, properties, required);
        }
        TemplateElement::DecoratorExpression(dt)
        | TemplateElement::DecoratorBlock(dt) => {
            if let Some(template) = &dt.template {
                for element in &template.elements {
                    parse_template_element(element, properties, required);
                }
            }
            extract_decorator_parameters(dt, properties, required);
        }
        _ => {} // Ignore other elements such as comments, raw strings, etc.
    }
}

/// Parses the Handlebars template into a Schema
pub fn parse_template_schema(template: &Template) -> Schema {
    let mut properties = BTreeMap::new();
    let mut required = Vec::new();

    for element in &template.elements {
        parse_template_element(element, &mut properties, &mut required);
    }

    Schema {
        properties,
        required: if required.is_empty() { None } else { Some(required) },
        ..new_schema()
    }
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

#[cfg(test)]
mod tests {
    use handlebars::Handlebars;
    use schemafy_lib::Expander;
    use syn::{File, parse_file};
    use syn::parse::Parser;

    use super::*;

    /// Helper function to setup Handlebars and parse a template string
    fn parse_handlebars_template(template_str: &str) -> Template {
        let mut handlebars = Handlebars::new();
        handlebars.register_template_string("test_template", template_str).unwrap();
        handlebars.get_template("test_template").unwrap().clone()
    }
    #[test]
    fn test_basic_api_call() {
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
            "visibility":"{{arg "visibility" required=true}}"
            }'
        "#;
        let template = parse_handlebars_template(template_str);
        let schema = parse_template_schema(&template);
        println!("{:#?}", schema);

        assert!(schema.properties.contains_key("token"));
        assert!(schema.properties.contains_key("org"));
        assert!(schema.properties.contains_key("name"));
        assert!(schema.properties.contains_key("value"));
        assert!(schema.properties.contains_key("visibility"));
    }
    #[test]
    fn test_conditional_logic() {
        let template_str = r#"
            {{#if (eq visibility "selected")}}
            Visibility is selected
            {{else}}
            Visibility is not selected
            {{/if}}
        "#;
        let template = parse_handlebars_template(template_str);
        let schema = parse_template_schema(&template);
        println!("{:#?}", schema);
        println!("{:#?}", template);
        // Assuming some conditional handling translates into schema properties
        // assert!(schema.properties.contains_key("visibility"));
        // assert_eq!(schema.properties["visibility"].type_, vec![SimpleTypes::Boolean]);
    }
    #[test]
    fn test_defaults_and_types() {
        let template_str = r#"
            {{arg selected_repository_ids required=true default=[] type=array}}
        "#;
        let template = parse_handlebars_template(template_str);
        let schema = parse_template_schema(&template);

        assert!(schema.properties.contains_key("selected_repository_ids"));
        println!("{:#?}", schema);
        let prop = &schema.properties["selected_repository_ids"];
        assert_eq!(prop.default, Some(serde_json::json!([])));
        assert_eq!(prop.type_, vec![SimpleTypes::Array]);
    }
    #[test]
    fn test_complex_template() {
        let template_str = r#"
            curl -L \
            -X POST \
            -H "Accept: application/vnd.github+json" \
            -H "Authorization: Bearer {{arg token required=true type=string}}" \
            -H "X-GitHub-Api-Version: 2022-11-28" \
            https://api.github.com/orgs/{{arg org required=true type=string}}/actions/variables \
            -d '{
            "name":"{{arg name required=true type=string}}",
            "value":"{{arg value required=true type=string}}",
            "visibility":"{{arg visibility required=true type=bool}}",
            {{#if (eq visibility "selected")}}
            "selected_repository_ids":{{arg selected_repository_ids required=true default=[] type=array}}
            {{/if}}
            }'
        "#;
        let template = parse_handlebars_template(template_str);
        let schema = parse_template_schema(&template);
        let mut expander = Expander::new(
            Some("Test"),
            "::schemafy_core::",
            &schema,
        );
        println!("{:#?}", template);

        let code = expander.expand(&schema);

        // Convert TokenStream to String
        let code_str = code.to_string();

        // Parse the String into a syn::File
        let syntax_tree: File = parse_file(&code_str).expect("Failed to parse Rust code");

        let formatted_code = prettyplease::unparse(&syntax_tree);

        println!("{}", formatted_code);
        assert!(schema.properties.contains_key("token"));
        assert!(schema.properties.contains_key("org"));
        assert!(schema.properties.contains_key("name"));
        assert!(schema.properties.contains_key("value"));
        assert!(schema.properties.contains_key("visibility"));
        assert!(schema.properties.contains_key("selected_repository_ids"));

        assert!(schema.required.as_ref().unwrap().contains(&"token".to_string()));
        assert!(schema.required.as_ref().unwrap().contains(&"org".to_string()));
        assert!(schema.required.as_ref().unwrap().contains(&"name".to_string()));
        assert!(schema.required.as_ref().unwrap().contains(&"value".to_string()));
        assert!(schema.required.as_ref().unwrap().contains(&"visibility".to_string()));
        assert!(schema.required.as_ref().unwrap().contains(&"selected_repository_ids".to_string()));
    }

    #[test]
    fn test_rust_struct_generation() {
        let template_str = r#"
            curl -L \
            -X POST \
            -H "Accept: application/vnd.github+json" \
            -H "Authorization: Bearer {{arg token required=true type=string}}" \
            -H "X-GitHub-Api-Version: 2022-11-28" \
            https://api.github.com/orgs/{{arg org required=true type=string}}/actions/variables \
            -d '{
            "name":"{{arg name required=true type=string}}",
            "value":"{{arg value required=true type=string}}",
            "visibility":"{{arg visibility required=true type=bool}}"
            }'
        "#;
        let template = parse_handlebars_template(template_str);
        let mut schema = parse_template_schema(&template);
        sort_schema(&mut schema);
        let mut expander = Expander::new(
            Some("Test"),
            "::schemafy_core::",
            &schema,
        );

        // Convert TokenStream to String
        let code = expander.expand(&schema);
        let code_str = code.to_string();
        let syntax_tree: File = parse_file(&code_str).expect("Failed to parse Rust code");
        let formatted_code = prettyplease::unparse(&syntax_tree);
        let should_contain = r#"
        #[derive(Clone, PartialEq, Debug, Deserialize, Serialize)]
        pub struct Test {
            /// name
            pub name: String,
            /// org
            pub org: String,
            /// token
            pub token: String,
            /// value
            pub value: String,
            /// visibility
            pub visibility: bool,
        }
        "#;
        let should_syntax_tree: File = parse_file(should_contain).expect("Failed to parse Rust code");
        let should_formatted_code = prettyplease::unparse(&should_syntax_tree);
        assert_eq!(formatted_code, should_formatted_code);
    }

    #[test]
    fn test_complex_generation() {
        let template_str = r#"
            curl -L \
            -X POST \
            -H "Accept: application/vnd.github+json" \
            -H "Authorization: Bearer {{arg token required=true type=string}}" \
            -H "X-GitHub-Api-Version: 2022-11-28" \
            https://api.github.com/orgs/{{arg org required=true type=string}}/actions/variables \
            -d '{
            "name":"{{arg name required=true type=string}}",
            "value":"{{arg value required=true type=string}}",
            "visibility":"{{arg visibility required=true type=bool}}",
            {{#if (eq visibility "selected")}}
            "selected_repository_ids":{{arg selected_repository_ids default=[] type=array}}
            {{/if}}
            }'
        "#;
        let template = parse_handlebars_template(template_str);
        let mut schema = parse_template_schema(&template);
        sort_schema(&mut schema);
        let mut expander = Expander::new(
            Some("Test"),
            "::schemafy_core::",
            &schema,
        );

        // Convert TokenStream to String
        let code = expander.expand(&schema);
        let code_str = code.to_string();
        let syntax_tree: File = parse_file(&code_str).expect("Failed to parse Rust code");
        let formatted_code = prettyplease::unparse(&syntax_tree);
        let should_contain = r#"
        #[derive(Clone, PartialEq, Debug, Deserialize, Serialize)]
        pub struct Test {
            /// name
            pub name: String,
            /// org
            pub org: String,
            /// selected_repository_ids
            #[serde(skip_serializing_if = "Option::is_none")]
            pub selected_repository_ids: Option<Vec<serde_json::Value>>,
            /// token
            pub token: String,
            /// value
            pub value: String,
            /// visibility
            pub visibility: bool,
        }
        "#;
        let should_syntax_tree: File = parse_file(should_contain).expect("Failed to parse Rust code");
        let should_formatted_code = prettyplease::unparse(&should_syntax_tree);
        assert_eq!(formatted_code, should_formatted_code);
    }


    #[test]
    fn test_curl_command_generation() {
        let curl_template = r#"
            curl -L \
            -H "Accept: application/vnd.github+json" \
            -H "Authorization: Bearer {{arg input.token required=true type=string}}" \
            -H "X-GitHub-Api-Version: 2022-11-28" \
            https://api.github.com/repos/{{arg input.owner required=true type=string}}/{{arg input.repo required=true type=string}}/environments/{{arg input.environment_name required=true type=string}}/secrets{{#if input.key.name}}/{{arg input.key.name type=string}}{{/if}}
        "#;

        // Assuming `parse_curl_template` extracts parameters and creates a schema
        let template = parse_handlebars_template(curl_template);
        println!("{:#?}", template);
        let mut schema = parse_template_schema(&template);
        // Assuming `schema_to_rust_struct` converts the schema to a TokenStream for a Rust struct
        let rust_struct_tokens = Expander::new(Some("GithubSecret"), "::schemafy_core::", &schema).expand(&schema);

        // Convert the TokenStream to Rust source code as a string
        let rust_code = rust_struct_tokens.to_string();
        let syntax_tree: File = syn::parse_str(&rust_code).expect("Failed to parse generated Rust code");
        let formatted_code = prettyplease::unparse(&syntax_tree);
        println!("{}", formatted_code);

        let expected_code = r#"
            #[derive(Debug, Serialize, Deserialize)]
            pub struct GithubSecret {
                token: String,
                owner: String,
                repo: String,
                environment_name: String,
                key_name: Option<String>,
            }
        "#;

        let expected_syntax_tree: File = syn::parse_str(expected_code).expect("Failed to parse expected Rust code");
        let expected_formatted_code = prettyplease::unparse(&expected_syntax_tree);

        // assert_eq!(formatted_code, expected_formatted_code);
    }

}
