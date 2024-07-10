use handlebars::RenderErrorReason;
use handlebars::{Handlebars, Helper, HelperDef, HelperResult, Output, RenderContext, RenderError};
use handlebars::{Context, JsonRender};
use urlencoding::encode;

#[derive(Clone, Copy)]
pub(crate) struct UrlEncodeHelper;

impl HelperDef for UrlEncodeHelper {
    fn call<'reg: 'rc, 'rc>(
        &self,
        h: &Helper<'rc>,
        _r: &'reg Handlebars,
        _ctx: &'rc Context,
        _rc: &mut RenderContext<'reg, 'rc>,
        out: &mut dyn Output,
    ) -> HelperResult {
        if let Some(param) = h.param(0) {
            let raw_str = param.value().render();
            // Explicitly check if the rendered string is "null"
            if raw_str == "null" || raw_str.is_empty() {
                return Err(RenderError::from(RenderErrorReason::Other("URL Encode Helper: Parameter missing".parse().unwrap())));
            }
            let encoded_str = encode(&raw_str);
            out.write(&encoded_str)?;
            Ok(())
        } else {
            Err(RenderError::from(RenderErrorReason::Other("URL Encode Helper: Parameter missing".parse().unwrap())))
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use handlebars::{Handlebars};
    use serde_json::json;

    // Initialize Handlebars and register the helper
    fn setup_handlebars() -> Handlebars<'static> {
        let mut handlebars = Handlebars::new();
        handlebars.register_helper("url_encode", Box::new(UrlEncodeHelper));
        handlebars
    }

    #[test]
    fn test_url_encode_helper_successful_encoding() {
        let mut handlebars = setup_handlebars();
        let template = "{{url_encode input}}";
        let data = json!({"input": "Hello World!"});
        let rendered = handlebars.render_template(template, &data).unwrap();
        assert_eq!(rendered, "Hello%20World%21");
    }

    #[test]
    fn test_url_encode_helper_with_special_characters() {
        let mut handlebars = setup_handlebars();
        let template = "{{url_encode input}}";
        let data = json!({"input": "foo@bar.com/path?query=param&another=true"});
        let rendered = handlebars.render_template(template, &data).unwrap();
        assert_eq!(rendered, "foo%40bar.com%2Fpath%3Fquery%3Dparam%26another%3Dtrue");
    }


    #[test]
    fn test_url_encode_helper_with_missing_param() {
        let mut handlebars = setup_handlebars();
        let template = "{{url_encode}}";
        let data = json!({});

        let result = handlebars.render_template(template, &data);
        assert!(result.is_err());
        let error = result.err().unwrap();
        assert!(error.to_string().contains("URL Encode Helper: Parameter missing"));
    }

    #[test]
    fn test_url_encode_helper_with_null_input() {
        let mut handlebars = setup_handlebars();
        let template = "{{url_encode input}}";
        let data = json!({"input": null});

        let result = handlebars.render_template(template, &data);
        assert!(result.is_err());
        let error = result.err().unwrap();
        assert!(error.to_string().contains("URL Encode Helper: Parameter missing"));
    }
}
