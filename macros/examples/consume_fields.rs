extern crate serde;

use darling::ast::NestedMeta;
use proc_macro2::TokenStream;
use serde_json::Value;

use keyflux_macros::flux_derive::FluxInputReceiver;

#[keyflux_macros::flux(proxy_prefix = "")]
#[derive(Debug)]
pub struct Foo {
    // #[flux(proxy_name = "get_bar")]
    bar: bool,

    baz: i64,
}

fn main() {

    // let foo = Foo {
    //     bar: true,
    //     baz: 42,
    // };

    // println!("Foo: {:?}", foo);

    let input = r#"
#[keyflux_macros::define(proxy_prefix = "")]
#[derive(Debug)]
pub struct Foo {
    // #[flux(proxy_name = "get_bar")]
    bar: bool,

    baz: i64,
}"#;
    let parsed = syn::parse_str(input).unwrap();
    let args = TokenStream::new();
    let attr_args = match NestedMeta::parse_meta_list(args.into()) {
        Ok(v) => v,
        Err(e) => {
            println!("Error: {:?}", e);
            return;
        }
        // Err(e) => { return TokenStream::from(Error::from(e).write_errors()); }
    };
    // let _input = syn::parse_macro_input!(input as ItemFn);

    let _args = match FluxInputReceiver::from_derive_input(&parsed) {
        Ok(v) => v,
        Err(e) => {
            println!("Error: {:?}", e);
            return;
        }
    };


    let gen = _args.generate_tokens();

    println!(
        r#"
INPUT:

    {}

PARSED AS:

    {}

    "#,
        input, gen
    )


    //
    //
    //     println!(
    //         r#"
    // INPUT:
    //
    // {}
    //
    // PARSED AS:
    //
    // {:#?}
    //
    // EMITS:
    //
    // {}
    //     "#,
    //         input, receiver, tokens
    //     );
}
