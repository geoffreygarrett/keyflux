use Default;
use std::any::Any;
// use serde::{Deserialize, Serialize};
use keyflux_common::errors::FluxError;
use keyflux_common::prelude::*;
// extern crate serde;
// extern crate schemafy_core;
// extern crate serde_json;
use schemafy_lib::{Expander, Schema};


#[derive(Flux, Default, Serialize, Deserialize, FluxFinalize, FluxInitialize)]
#[flux(name = "test")]
struct TestFlux;


impl FluxUpsert for TestFlux {
    fn upsert(&self, context: &dyn FluxContext) -> Result<(), FluxError> {
        println!("Insert called");
        Ok(())
    }
    fn has_upsert(&self) -> bool { true }
}

impl FluxSelect for TestFlux {}
impl FluxInsert for TestFlux {}
impl FluxDelete for TestFlux {}
impl FluxUpdate for TestFlux {}

struct TestContext;

impl FluxContext for crate::TestContext {
    fn get(&self, _key: &str) -> Option<&dyn Any> {
        unimplemented!()
    }

    fn set(&mut self, _key: &str, _value: Box<dyn Any>) {
        unimplemented!()
    }
}
// #[flux_impl]
// impl TestFlux {
//     // #[curl(template = "curl -X POST -d '{\"name\":\"{{name}}\"}' http://localhost:8080")]
//     #[flux(upsert)]
//     fn upsert(&self, context: &dyn FluxContext) -> Result<(), FluxError> {
//         println!("Insert called");
//         Ok(())
//     }
// }


// #[flux_method(TestFlux, update)]
// fn upsert(context: &dyn FluxContext) -> Result<(), FluxError> {
//     println!("Upsert called");
//     Ok(())
// }


use serde::{Deserialize, Serialize};
use serde_json::Value;
// #[derive(Debug, Deserialize, Serialize)]
// struct Person {
//     name: String,
//     age: u8,
// }

fn main() {

    let json = r#"{"name":"John Doe","age":30}"#;
    let person: Value = serde_json::from_str(json).unwrap();
    println!("{:#?}", person);
    let schema_string = r#"
    {
      "title": "ActionsPublicKey",
      "description": "The public key used for setting Actions Secrets.",
      "type": "object",
      "properties": {
        "key_id": {
          "description": "The identifier for the key.",
          "type": "string",
          "examples": [
            "1234567"
          ]
        },
        "key": {
          "description": "The Base64 encoded public key.",
          "type": "string",
          "examples": [
            "hBT5WZEj8ZoOv6TYJsfWq7MxTEQopZO5/IT3ZCVQPzs="
          ]
        },
        "id": {
          "type": "integer",
          "examples": [
            2
          ]
        },
        "url": {
          "type": "string",
          "examples": [
            "https://api.github.com/user/keys/2"
          ]
        },
        "title": {
          "type": "string",
          "examples": [
            "ssh-rsa AAAAB3NzaC1yc2EAAA"
          ]
        },
        "created_at": {
          "type": "string",
          "examples": [
            "2011-01-26T19:01:12Z"
          ]
        }
      },
      "required": [
        "key_id",
        "key"
      ]
    }
    "#;

    // save schema_string to a temp file

    // let schema = schemafy!(
    //     root: Schema
    //     "schema/test.json"
    // );
    // println!("{:#?}", schema);
    // let json = std::fs::read_to_string("schema/schema.json").expect("Read schema JSON file");

    let schema = serde_json::from_str(&schema_string).unwrap();
    let mut expander = Expander::new(
        Some("Test"),
        "::schemafy_core::",
        &schema,
    );

    let code = expander.expand(&schema);
    println!("{}", code);

}

// fn main() {
//     let flux = TestFlux::default();
//     let context = TestContext;
//     assert_eq!(flux.has_update(), false);
//     assert_eq!(flux.has_delete(), false);
//     assert_eq!(flux.has_insert(), false);
//     assert_eq!(flux.has_select(), false);
//     assert_eq!(flux.has_upsert(), true);
//     flux.upsert(&context).expect("TODO: panic message");
//     // flux.delete(&context).expect("TODO: panic message");
//     // flux.insert(&context).expect("TODO: panic message");
//     // flux.select(&context).expect("TODO: panic message");
// }
