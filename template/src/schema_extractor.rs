use handlebars::{Handlebars, RenderError};
use schemafy_lib::{Expander, Schema};
use serde_json::Value;
use syn::{parse_file, File};
use proc_macro2::TokenStream;
use prettyplease;
use crate::schema_parser::parse_template_schema;
use crate::use_handlebars;

/// Encapsulates functionality for extracting schemas from Handlebars templates and generating Rust code.
pub struct TemplateSchemaExtractor {
    handlebars: Handlebars<'static>,
}

impl TemplateSchemaExtractor {
    /// Initializes a new instance of the template schema extractor.
    pub fn new() -> Self {
        let mut handlebars = Handlebars::new();
        handlebars.register_escape_fn(handlebars::no_escape);
        Self { handlebars }
    }

    /// Parses a Handlebars template string and returns a parsed template.
    pub fn parse_handlebars_template(&mut self, template_str: &str) -> Result<handlebars::Template, String> {
        self.handlebars.register_template_string("schema_template", template_str)
            .map_err(|e| e.to_string())?;
        self.handlebars.get_template("schema_template").cloned().ok_or("Template parsing failed".to_string())
    }

    /// Extracts a schema from a Handlebars template.
    pub fn extract_schema(&self, template: &handlebars::Template) -> Schema {
        parse_template_schema(template)
    }

    pub fn render_template(&self, template: &str, data: &Value) -> Result<String, RenderError> {
        use_handlebars(template, data)
    }

    /// Expands the schema into a Rust TokenStream.
    pub fn expand_schema_to_rust(&self, schema: &Schema, struct_name: &str) -> TokenStream {
        let mut expander = Expander::new(Some(struct_name), "::schemafy_core::", schema);
        expander.expand(schema)
    }

    /// Generates formatted Rust code from a TokenStream.
    pub fn generate_rust_code(&self, tokens: TokenStream) -> Result<String, String> {
        let syntax_tree: File = parse_file(&tokens.to_string()).expect("Failed to parse Rust code");
        Ok(prettyplease::unparse(&syntax_tree))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_full_workflow() {
        let mut extractor = TemplateSchemaExtractor::new();
        let template_str = r#"{{#if condition}}{{field}}{{/if}}"#; // Simplified example
        let template = extractor.parse_handlebars_template(template_str).unwrap();
        let schema = extractor.extract_schema(&template);
        let tokens = extractor.expand_schema_to_rust(&schema, "DynamicStruct");
        let rust_code = extractor.generate_rust_code(tokens).unwrap();
        println!("Generated Rust code:\n{}", rust_code);
    }
}
