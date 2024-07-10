use std::{env, fs};
use std::path::Path;

use convert_case::{Case, Casing};
use proc_macro2::{Ident, Span, TokenStream};
use quote::quote;
use serde_json;
use syn::ItemFn;

use keyflux_template::TemplateSchemaExtractor;

// use crate::flux_common::{Flux, generate_impl, ImplementedOperations};

#[derive(Default, deluxe::ParseMetaItem, deluxe::ExtractAttributes)]
#[deluxe(attributes(curl))]
pub struct Curl {
    pub file: Option<String>,
    pub inline: Option<String>,
    pub schema_file: Option<String>,
    pub schema_inline: Option<String>,
}

enum Source {
    File(String),
    Inline(String),
}

use http::Method;
use snafu::Snafu;

pub(crate) type Result<T, E = Error> = std::result::Result<T, E>;

#[derive(Debug, Snafu)]
#[snafu(visibility(pub (crate)))]
pub enum Error {
    #[snafu(display("Failed to parse HTTP method"))]
    ParseMethod { source: reqwest::Error },
}

/// Processes the file or inline source to obtain the content.
/// Processes the file or inline source to obtain the content.
fn resolve_source(file: &String) -> String {
    let manifest_dir = env::var("CARGO_MANIFEST_DIR").unwrap_or_else(|_| ".".into());
    let full_path = Path::new(&manifest_dir).join(file);
      fs::read_to_string(full_path).unwrap()
}

pub(crate) fn generate_curl_implementation(item_fn: &ItemFn, source: String, schema: Option<String>, errors: deluxe::Errors) -> TokenStream {

    // Resolve the source content and parse it as a curl request
    println!("Source content: {}", source);


    // Input struct
    let mut extractor = TemplateSchemaExtractor::new();
    let template = extractor.parse_handlebars_template(&source).unwrap();
    let input_schema = extractor.extract_schema(&template);
    let struct_name = item_fn.sig.ident.to_string().to_case(Case::Pascal);
    let input_struct_name = format!("{}Input", struct_name);
    let input_struct_ident = Ident::new(input_struct_name.as_str(), Span::call_site());
    let input_struct = extractor.expand_schema_to_rust(&input_schema, input_struct_name.as_str());

    // Output struct
    let output_schema = match schema {
        Some(schema) => serde_json::from_str(&schema).unwrap(),
        None => None,
    };
    let output_struct = match output_schema {
        Some(schema) => extractor.expand_schema_to_rust(&schema, format!("{}Output", struct_name).as_str()),
        None => quote! {},
    };

    // Capture the original function body
    let original_body = &item_fn.block;

    // Original function name and a new inner function name for handling the response
    let fn_name = &item_fn.sig.ident;
    let inner_fn_name = Ident::new(&format!("{}_inner", fn_name), Span::call_site());

    // Define the inner function to process the response
    let inner_function = quote! {
        fn #inner_fn_name(response: Response) -> Result<(), reqwest::Error> {
            #original_body
        }
    };

    // Wrap the original function to use the new processing function
    // Wrap the original function to use the new processing function
    let wrapped_function = quote! {
        #input_struct
        #output_struct

        #inner_function

        #[allow(unused)]
        pub async fn #fn_name(input: &#input_struct_ident) -> Result<(), reqwest::Error> {
            let source = #source;
            let value = serde_json::to_value(input).unwrap();
            let rendered = use_handlebars(&source, &value).unwrap();
            println!("Rendered template:\n{}", rendered); // Debug print
            let parsed: keyflux_curl::HttpRequest = rendered.parse().unwrap();
            let builder: reqwest::RequestBuilder = parsed.into();
            println!("{:?}", builder);
            let response = builder.send().await?;
            #inner_fn_name(response)
        }

        #errors
    };

    wrapped_function
}

pub fn process_curl_fn(
    attr: proc_macro::TokenStream,
    item: proc_macro::TokenStream,
) -> proc_macro::TokenStream {
    let mut item_fn = match syn::parse::<ItemFn>(item.into()) {
        Ok(impl_item) => impl_item,
        Err(e) => return e.into_compile_error().into(),
    };
    let errors = deluxe::Errors::new();
    let Curl { file, inline, schema_file, schema_inline } = deluxe::parse_optional(attr, &errors);
    let source = match (file, inline) {
        (Some(file), None) => resolve_source(&file),
        (None, Some(inline)) => inline,
        (Some(_), Some(_)) => {
            errors.push(Span::call_site(), "Only one of `file` or `inline` can be provided");
            return errors.into_compile_error().unwrap().into();
        }
        (None, None) => {
            errors.push(Span::call_site(), "Either `file` or `inline` must be provided");
            return errors.into_compile_error().unwrap().into();
        }
    };
    let schema = match (schema_file, schema_inline) {
        (Some(file), None) => Some(resolve_source(&file)),
        (None, Some(inline)) => Some(inline),
        (Some(_), Some(_)) => {
            errors.push(Span::call_site(), "Only one of `schema_file` or `schema_inline` can be provided");
            return errors.into_compile_error().unwrap().into();
        }
        (None, None) => None
    };
    let tokens = generate_curl_implementation(&item_fn, source, schema, errors);
    tokens.into()
}


// let mut extractor = TemplateSchemaExtractor::new();
// let template_str = r#"{{#if condition}}{{field}}{{/if}}"#; // Simplified example
// let template = extractor.parse_handlebars_template(template_str).unwrap();
// let schema = extractor.extract_schema(&template);
// let tokens = extractor.expand_schema_to_rust(&schema, "DynamicStruct");
// let rust_code = extractor.generate_rust_code(tokens).unwrap();
// println!("Generated Rust code:\n{}", rust_code);

// pub fn process_curl_fn(
//     attr: proc_macro::TokenStream,
//     item: proc_macro::TokenStream,
// ) -> TokenStream {
//     let mut item_fn = match syn::parse::<ItemFn>(item.into()) {
//         Ok(impl_item) => impl_item,
//         Err(e) => return e.into_compile_error().into(),
//     };
//     let errors = deluxe::Errors::new();
//     let Curl { src, schema } = deluxe::parse_optional(attr, &errors);
//     let curl_string = match src {
//         Source::File(file) => {
//
//         }
//         Source::Inline(string) => string,
//     };
//
//     let tokens = quote! {
//         #errors
//     };
//     tokens.into()
// }

