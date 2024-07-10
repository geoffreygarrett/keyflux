use std::fmt::Display;
use std::str::FromStr;

use handlebars::{Context, Handlebars, Helper, HelperDef, HelperResult, JsonRender, Output, RenderContext, RenderError};
use handlebars::RenderErrorReason;
use serde_json::Value;

#[derive(Clone, Copy)]
pub(crate) struct ArgHelper;


#[derive(Debug, PartialEq)]
pub enum TypeInfo {
    String,
    Number,
    Boolean,
    Array,
    Object,
    Null,
    Unknown, // Add more types as needed
}

impl TypeInfo {
    pub fn from_json(json: &serde_json::Value) -> TypeInfo {
        match json {
            serde_json::Value::String(_) => TypeInfo::String,
            serde_json::Value::Number(_) => TypeInfo::Number,
            serde_json::Value::Bool(_) => TypeInfo::Boolean,
            serde_json::Value::Array(_) => TypeInfo::Array,
            serde_json::Value::Object(_) => TypeInfo::Object,
            serde_json::Value::Null => TypeInfo::Null,
            _ => TypeInfo::Unknown,
        }
    }
}

impl FromStr for TypeInfo {
    type Err = ();

    fn from_str(s: &str) -> Result<Self, Self::Err> {
        match s {
            "string" => Ok(TypeInfo::String),
            "number" => Ok(TypeInfo::Number),
            "boolean" => Ok(TypeInfo::Boolean),
            "array" => Ok(TypeInfo::Array),
            "object" => Ok(TypeInfo::Object),
            "null" => Ok(TypeInfo::Null),
            _ => Err(()),
        }
    }
}

impl Display for TypeInfo {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        let str = match self {
            TypeInfo::String => "string".to_string(),
            TypeInfo::Number => "number".to_string(),
            TypeInfo::Boolean => "boolean".to_string(),
            TypeInfo::Array => "array".to_string(),
            TypeInfo::Object => "object".to_string(),
            TypeInfo::Null => "null".to_string(),
            TypeInfo::Unknown => "unknown".to_string(),
        };
        write!(f, "{}", str)
    }
}


impl HelperDef for ArgHelper {
    fn call<'reg: 'rc, 'rc>(
        &self,
        h: &Helper<'rc>,
        _: &'reg Handlebars,
        _: &'rc Context,
        _: &mut RenderContext<'reg, 'rc>,
        out: &mut dyn Output,
    ) -> HelperResult {
        // Attempt to get the parameter, returning an error if missing
        let param = h.param(0).ok_or_else(|| {
            RenderErrorReason::Other(format!("Required parameter '{}' missing", h.name()))
        })?;

        // Extract the actual JSON value from the PathAndJson structure
        let param_value = param.value();

        // Get the default value if specified
        let default_value = h.hash_get("default")
            .and_then(|v| v.value().as_str())
            .unwrap_or_default();

        // Check if the "required" attribute is set to true
        let required = h.hash_get("required")
            .and_then(|v| v.value().as_bool())
            .unwrap_or(false);

        let type_declared = h.hash_get("type")
            .and_then(|v| v.value().as_str())
            .unwrap_or("string");

        // Determine the type_info based on the JSON value type
        let type_found = match param_value {
            Value::String(_) => TypeInfo::String,
            Value::Number(_) => TypeInfo::Number,
            Value::Bool(_) => TypeInfo::Boolean,
            Value::Array(_) => TypeInfo::Array,
            Value::Object(_) => TypeInfo::Object,
            Value::Null => TypeInfo::Null,
        };

        if type_declared != type_found.to_string() {
            return HelperResult::Err(RenderError::from(RenderErrorReason::Other(format!("Type mismatch: expected '{}', found '{}'", type_declared, type_found))));
        }
        param_value.render();
        // If the parameter value is null, handle based on required flag
        if param_value.is_null() {
            return if required {
                let default = "unknown".to_string();
                HelperResult::Err(RenderError::from(RenderErrorReason::Other(format!("Required parameter '{}' missing", param.relative_path().unwrap_or_else(|| &default)))))
            } else {
                out.write(default_value)?;
                Ok(())
            };
        }

        // Otherwise, write the actual parameter value to the output
        println!("arg_helper: param_name = {}, param = {}", h.name(), param_value.render());

        // Handle array parameters separately to ensure correct JSON format
        if param_value.is_array() {
            println!("arg_helper: param is array");
            let array = param_value.as_array().unwrap();
            let array_str: Vec<String> = array.iter().map(|v| format!("\"{}\"", v.render())).collect();
            println!("arg_helper: array_str = {:?}", array_str);
            out.write(&format!("[{}]", array_str.join(",")))?;
        } else if param_value.is_object() {
            println!("arg_helper: param is object");
            let formatted = format!("{:?}", param_value.as_object().unwrap());
            out.write(&formatted)?;
        } else {
            out.write(param_value.render().as_str())?;
        }

        Ok(())
    }
}


#[cfg(test)]
mod handlebars_tests {
    use serde_json::json;

    use super::use_handlebars;

    #[test]
    fn test_render_with_required_fields() {
        let template = r#"
        curl -L \
        -X POST \
        -H "Accept: application/vnd.github+json" \
        -H "Authorization: Bearer {{arg token required=true}}" \
        -H "X-GitHub-Api-Version: 2022-11-28" \
        https://api.github.com/orgs/ORG/actions/variables \
        -d '{
        "name":"{{arg name required=true}}",
        "value":"{{arg value required=true}}",
        "visibility":"{{arg visibility required=true}}"{{#if (eq visibility "selected")}},
        "selected_repository_ids":{{arg selected_repository_ids required=true}}
        {{/if}}
        }'
        "#;

        let data = json!({
            "token": "your_token_here",
            "name": "your_name_here",
            "value": "your_value_here",
            "visibility": "selected",
            "selected_repository_ids": ["repo_id_1", "repo_id_2"]
        });

        let rendered = use_handlebars(template, &data).expect("Failed to render template");
        assert!(rendered.contains("Bearer your_token_here"));
        assert!(rendered.contains("\"name\":\"your_name_here\""));
        assert!(rendered.contains("\"value\":\"your_value_here\""));
        assert!(rendered.contains("\"visibility\":\"selected\""));
        assert!(rendered.contains("\"selected_repository_ids\":[\"repo_id_1\",\"repo_id_2\"]"));
    }

    #[test]
    fn test_render_with_optional_fields() {
        let template = r#"
        curl -L \
        -X POST \
        -H "Accept: application/vnd.github+json" \
        -H "Authorization: Bearer {{arg token required=true}}" \
        -H "X-GitHub-Api-Version: 2022-11-28" \
        https://api.github.com/orgs/ORG/actions/variables \
        -d '{
        "name":"{{arg name required=true}}",
        "value":"{{arg value}}",
        "visibility":"{{arg visibility required=true}}"{{#if (eq visibility "selected")}},
        "selected_repository_ids":{{arg selected_repository_ids default=[]}}
        {{/if}}
        }'
        "#;

        let data = json!({
            "token": "your_token_here",
            "name": "your_name_here",
            "value": "your_value_here",
            "visibility": "public"
        });

        let rendered = use_handlebars(template, &data).expect("Failed to render template");
        assert!(rendered.contains("Bearer your_token_here"));
        assert!(rendered.contains("\"name\":\"your_name_here\""));
        assert!(rendered.contains("\"value\":\"your_value_here\""));
        assert!(rendered.contains("\"visibility\":\"public\""));
        assert!(!rendered.contains("\"selected_repository_ids\""));
    }

    #[test]
    #[should_panic(expected = "Required parameter 'token' missing")]
    fn test_missing_required_field() {
        let template = r#"
        curl -L \
        -X POST \
        -H "Accept: application/vnd.github+json" \
        -H "Authorization: Bearer {{arg token required=true}}" \
        -H "X-GitHub-Api-Version: 2022-11-28" \
        https://api.github.com/orgs/ORG/actions/variables \
        -d '{
        "name":"{{arg name required=true}}",
        "value":"{{arg value}}",
        "visibility":"{{arg visibility required=true}}"{{#if (eq visibility "selected")}},
        "selected_repository_ids":{{arg selected_repository_ids default=[]}}
        {{/if}}
        }'
        "#;

        let data = json!({
            "name": "your_name_here",
            "value": "your_value_here",
            "visibility": "public"
        });

        // This should panic due to the missing "token" field
        use_handlebars(template, &data).expect("Failed to render template");
    }

    #[test]
    fn test_default_helper() {
        let template = r#"
        curl -L \
        -X POST \
        -H "Accept: application/vnd.github+json" \
        -H "Authorization: Bearer {{arg token required=true}}" \
        -H "X-GitHub-Api-Version: 2022-11-28" \
        https://api.github.com/orgs/ORG/actions/variables \
        -d '{
        "name":"{{arg name required=true}}",
        "value":"{{arg value default="default_value"}}",
        "visibility":"{{arg visibility required=true}}"{{#if (eq visibility "selected")}},
        "selected_repository_ids":{{arg selected_repository_ids default=[]}}
        {{/if}}
        }'
        "#;

        let data = json!({
            "token": "your_token_here",
            "name": "your_name_here",
            "visibility": "public"
        });

        let rendered = use_handlebars(template, &data).expect("Failed to render template");
        assert!(rendered.contains("Bearer your_token_here"));
        assert!(rendered.contains("\"name\":\"your_name_here\""));
        assert!(rendered.contains("\"value\":\"default_value\""));
        assert!(rendered.contains("\"visibility\":\"public\""));
    }

    #[test]
    fn test_eq_helper() {
        let template = r#"
        {{#if (eq visibility "selected")}}
        Visibility is selected
        {{else}}
        Visibility is not selected
        {{/if}}
        "#;

        let data_selected = json!({
            "visibility": "selected"
        });

        let rendered_selected = use_handlebars(template, &data_selected).expect("Failed to render template");
        assert!(rendered_selected.contains("Visibility is selected"));

        let data_not_selected = json!({
            "visibility": "public"
        });

        let rendered_not_selected = use_handlebars(template, &data_not_selected).expect("Failed to render template");
        assert!(rendered_not_selected.contains("Visibility is not selected"));
    }
}
