// The use of fields in debug print commands does not count as "used",
// which causes the fields to trigger an unwanted dead code warning.
#![allow(dead_code)]

use darling::{ast, FromDeriveInput, FromField, util};
use syn::{Ident, Type};

#[derive(Debug, FromField)]
#[darling(attributes(flux))]
pub struct FluxField {
    ident: Option<Ident>,
    ty: Type,
    proxy_name: Option<String>,
}

#[derive(Debug, FromDeriveInput)]
#[darling(attributes(flux), supports(struct_named))]
pub struct Flux {
    ident: Ident,
    data: ast::Data<util::Ignored, FluxField>,
}

fn main() {
    let good_input = r#"#[derive(Flux)]
pub struct GitHubFlux {
    #[flux(proxy_name = "get_bar")]
    bar: bool,

    baz: i64,
}"#;

    let bad_input = r#"#[derive(Lorem)]
    pub struct BadFoo(String, u32);"#;

    let parsed = syn::parse_str(good_input).unwrap();
    let receiver = Flux::from_derive_input(&parsed).unwrap();
    // let wrong_shape_parsed = syn::parse_str(bad_input).unwrap();
    // let wrong_shape = Lorem::from_derive_input(&wrong_shape_parsed).expect_err("Shape was wrong");

    println!(
        r#"
INPUT:

{}

PARSED AS:

{:#?}

    "#,
        good_input, receiver
    );
}