use std::any::Any;
use serde::{Deserialize, Serialize};
use keyflux_common::errors::FluxError;
use keyflux_common::prelude::*;

#[derive(Default, Serialize, Deserialize, Flux, FluxFinalize, FluxInitialize, Debug)]
#[flux(name = "test")]
struct TestFlux {
    field: Option<String>
}

impl FluxUpsert for TestFlux {
    fn upsert(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
        println!("Insert called");
        Ok(())
    }
    fn has_upsert(&self) -> bool { true }
}

impl FluxSelect for TestFlux {}
impl FluxInsert for TestFlux {}
impl FluxDelete for TestFlux {}
impl FluxUpdate for TestFlux {}

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

// SUPPORTED FEATURES
// serialization of &dyn Trait
// serialization + deserialization of Box<dyn Trait> trait objects

struct TestContext;

impl FluxContext for crate::TestContext {
    fn get(&self, _key: &str) -> Option<&dyn Any> {
        unimplemented!()
    }

    fn set(&mut self, _key: &str, _value: Box<dyn Any>) {
        unimplemented!()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_upsert() {
        let context = TestContext;
        let flux = TestFlux::default();
        assert!(flux.has_upsert(), "Upsert should be implemented");
        assert_eq!(flux.upsert(&context).unwrap(), (), "Upsert operation should succeed without error");
    }

    #[test]
    fn test_has_operations() {
        let flux = TestFlux::default();
        assert!(flux.has_upsert(), "Upsert should be implemented");
        assert!(!flux.has_update(), "Update should not be implemented");
        assert!(!flux.has_delete(), "Delete should not be implemented");
        assert!(!flux.has_insert(), "Insert should not be implemented");
        assert!(!flux.has_select(), "Select should not be implemented");
    }

    #[test]
    fn test_serialization() {
        let flux = TestFlux::default();
        let test: Box<dyn Flux> = Box::new(flux);
        let serialized = serde_json::to_string(&test).unwrap();
        println!("{}", serialized);
        assert!(serialized.contains("\"type\":\"test\""), "Serialized output should contain the correct type identifier.");
    }

    #[test]
    fn test_deserialization() {
        let data = r#"{"type":"test", "input":{}}"#;
        let deserialized:  TestFlux = serde_json::from_str(data).unwrap();
        println!("{:?}", deserialized);
        assert!(deserialized.has_upsert(), "Deserialized object should have upsert implemented.");
    }
}
