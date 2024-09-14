// use std::any::Any;
//
// use keyflux_common::errors::FluxError;
// use keyflux_common::traits::flux::{FluxBase, FluxContext, FluxDelete, FluxInsert, FluxSelect, FluxUpdate, FluxUpsert, HasFluxDelete, HasFluxInsert, HasFluxSelect, HasFluxUpdate, HasFluxUpsert};
//
// // Test code
// struct TestFlux;
//
// impl FluxBase for TestFlux {
//     fn as_any(&self) -> &dyn Any {
//         self
//     }
// }
//
// impl FluxUpdate for TestFlux {
//     fn update(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//         println!("Update called");
//         Ok(())
//     }
// }
//
// impl FluxDelete for TestFlux {
//     fn delete(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//         println!("Delete called");
//         Ok(())
//     }
// }
//
// impl FluxInsert for TestFlux {
//     fn insert(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//         println!("Insert called");
//         Ok(())
//     }
// }
//
// impl FluxSelect for TestFlux {
//     fn select(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//         println!("Select called");
//         Ok(())
//     }
// }
//
// impl FluxUpsert for TestFlux {
//     fn upsert(&self, _context: &dyn FluxContext) -> Result<(), FluxError> {
//         println!("Upsert called");
//         Ok(())
//     }
// }
//
// #[cfg(test)]
// mod tests {
//     use std::any::Any;
//     use std::collections::HashMap;
//
//     use super::*;
//
//     struct SimpleFluxContext {
//         data: HashMap<String, Box<dyn Any>>,
//     }
//
//     impl SimpleFluxContext {
//         pub fn new() -> Self {
//             Self { data: HashMap::new() }
//         }
//     }
//
//     impl FluxContext for SimpleFluxContext {
//         fn get(&self, key: &str) -> Option<&dyn Any> {
//             self.data.get(key).map(|boxed| &**boxed)
//         }
//
//         fn set(&mut self, key: &str, value: Box<dyn Any>) {
//             self.data.insert(key.to_string(), value);
//         }
//     }
//
//     #[test]
//     fn test_has_update() {
//         let flux = TestFlux;
//         assert!(flux.has_update());
//     }
//
//     #[test]
//     fn test_has_delete() {
//         let flux = TestFlux;
//         assert!(flux.has_delete());
//     }
//
//     #[test]
//     fn test_has_insert() {
//         let flux = TestFlux;
//         assert!(flux.has_insert());
//     }
//
//     #[test]
//     fn test_has_select() {
//         let flux = TestFlux;
//         assert!(flux.has_select());
//     }
//
//     #[test]
//     fn test_has_upsert() {
//         let flux = TestFlux;
//         assert!(flux.has_upsert());
//     }
//
//     #[test]
//     fn test_call_update() {
//         let flux = TestFlux;
//         let context = SimpleFluxContext::new();
//         let result = flux.update(&context);
//         assert!(result.is_ok());
//     }
//
//     #[test]
//     fn test_call_delete() {
//         let flux = TestFlux;
//         let context = SimpleFluxContext::new();
//         let result = flux.delete(&context);
//         assert!(result.is_ok());
//     }
//
//     #[test]
//     fn test_call_insert() {
//         let flux = TestFlux;
//         let context = SimpleFluxContext::new();
//         let result = flux.insert(&context);
//         assert!(result.is_ok());
//     }
//
//     #[test]
//     fn test_call_select() {
//         let flux = TestFlux;
//         let context = SimpleFluxContext::new();
//         let result = flux.select(&context);
//         assert!(result.is_ok());
//     }
//
//     #[test]
//     fn test_call_upsert() {
//         let flux = TestFlux;
//         let context = SimpleFluxContext::new();
//         let result = flux.upsert(&context);
//         assert!(result.is_ok());
//     }
//
//     #[test]
//     fn test_context_get_set() {
//         let mut context = SimpleFluxContext::new();
//         context.set("key1", Box::new(42));
//
//         let value = context.get("key1").unwrap().downcast_ref::<i32>().unwrap();
//         assert_eq!(*value, 42);
//     }
//
//     #[test]
//     fn test_context_override_value() {
//         let mut context = SimpleFluxContext::new();
//         context.set("key1", Box::new(42));
//         context.set("key1", Box::new(100));
//
//         let value = context.get("key1").unwrap().downcast_ref::<i32>().unwrap();
//         assert_eq!(*value, 100);
//     }
//
//     #[test]
//     fn test_context_non_existent_key() {
//         let context = SimpleFluxContext::new();
//         assert!(context.get("non_existent").is_none());
//     }
// }
