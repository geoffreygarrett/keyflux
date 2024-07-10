use handlebars::{Handlebars, JsonRender, RenderError, TemplateError};
use serde_json::Value;

mod helper;
use helper::arg::ArgHelper;
use helper::urlencode::UrlEncodeHelper;

mod parser;
mod schema_parser;
mod schema_extractor;

pub use schema_extractor::TemplateSchemaExtractor;
pub struct TemplateRenderer {
    handlebars: Handlebars<'static>,
}

impl TemplateRenderer {
    /// Creates a new template renderer and registers all necessary helpers and templates.
    pub fn new() -> Self {
        let mut handlebars = Handlebars::new();
        handlebars.register_helper("arg", Box::new(ArgHelper));
        handlebars.register_helper("urlencode", Box::new(UrlEncodeHelper));
        handlebars.register_helper("encrypt", Box::new(helper::encrypt::EncryptHelper));
        TemplateRenderer { handlebars }
    }

    pub fn registry(&self) -> &Handlebars<'static> {
        &self.handlebars
    }

    /// Registers a template from a string.
    pub fn register_template(&mut self, name: &str, template: &str) -> Result<(), TemplateError> {
        self.handlebars.register_template_string(name, template)
    }

    /// Renders a template with the given data.
    pub fn render(&self, template_name: &str, data: &Value) -> Result<String, RenderError> {
        self.handlebars.render(template_name, data)
    }
}

pub fn use_handlebars(template: &str, data: &Value) -> Result<String, RenderError> {
    // Instantiate the template renderer
    let mut renderer = TemplateRenderer::new();

    // Register the template
    renderer.register_template("template", template)?;

    // Render the template with the provided data
    let rendered = renderer.render("template", data)?;
    println!("Rendered template:\n{}", rendered); // Debug print
    Ok(rendered)
}

#[cfg(test)]
mod handlebars_tests {
    use handlebars::{Context, Handlebars, Helper, HelperDef, HelperResult, JsonRender, Output, PathAndJson, RenderContext, RenderError};
    use serde_json::json;

    use super::ArgHelper;

    fn use_handlebars(template: &str, data: &serde_json::Value) -> Result<String, handlebars::RenderError> {
        let mut handlebars = Handlebars::new();

        // Register the template from a string
        handlebars.register_template_string("template", template)?;

        // Register the arg helper
        handlebars.register_helper("arg", Box::new(ArgHelper));
        // let t = handlebars.get_template("template").unwrap().elements.clone();
        // println!("Registered template:\n{:#?}", t); // Debug print

        // Render the template with the data
        let rendered = handlebars.render("template", data)?;
        println!("Rendered template:\n{}", rendered); // Debug print
        Ok(rendered)
    }
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
