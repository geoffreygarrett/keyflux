// use crate::error::ConfigError;
// use crate::traits::Flux;
// use lazy_static::lazy_static;
// use log::{error, trace};
// use serde_json::Value;
// use std::collections::HashMap;
// use std::sync::{Arc, Mutex};
//
// pub type FluxConstructor = Box<dyn Fn(&Value) -> Result<Box<dyn Flux>, ConfigError> + Send + Sync>;
//
// /// Registry for managing flux types and their constructors.
// pub struct FluxRegistry {
//     pub(crate) creators: HashMap<String, FluxConstructor>,
// }
//
// impl FluxRegistry {
//     pub fn new() -> Self {
//         FluxRegistry {
//             creators: HashMap::new(),
//         }
//     }
//
//     pub fn register(&mut self, flux_type: &str, constructor: FluxConstructor) {
//         self.creators.insert(flux_type.to_string(), constructor);
//     }
//
//     pub fn create(&self, flux_type: &str, config: &Value) -> Result<Box<dyn Flux>, ConfigError> {
//         trace!("Attempting to create flux of type '{}'", flux_type);
//         self.creators.get(flux_type).ok_or_else(|| {
//             let err_msg = format!("Unknown flux type: {}", flux_type);
//             error!("{}", err_msg);
//             ConfigError::UnknownFluxType(err_msg)
//         })?(config)
//         .map_err(|e| {
//             let err_msg = format!("Error creating flux '{}': {:?}", flux_type, e);
//             error!("{}", err_msg);
//             ConfigError::InvalidConfig(err_msg)
//         })
//     }
// }
//
// lazy_static! {
//     pub static ref FLUX_REGISTRY: Arc<Mutex<FluxRegistry>> =
//         Arc::new(Mutex::new(FluxRegistry::new()));
// }
