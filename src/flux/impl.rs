use log::trace;
use serde::{Deserialize, Deserializer, de::Error as DeError};
// use crate::config::utils::replace_env_vars;
use crate::flux_registry::FLUX_REGISTRY;
use crate::traits::Flux;


static ARGS: &str = "args";
static TYPE: &str = "type";

/// Implements serialization for `Box<dyn Flux>`.
///
/// This implementation ensures that the `Flux` type is correctly identified and serialized
/// along with its data. It uses the global `FLUX_REGISTRY` to map the concrete `Flux` type
/// to its string representation.
///
/// # Errors
///
/// Returns a serialization error if the `Flux` type is unknown.
// impl Serialize for Box<dyn Flux> {
//     fn serialize<S>(&self, serializer: S) -> Result<S::Ok, S::Error>
//     where
//         S: Serializer,
//     {
//         let type_name = {
//             let registry = FLUX_REGISTRY.lock().unwrap();
//             registry.creators.iter()
//                 .find_map(|(name, creator)| {
//                     let flux = self.as_ref();
//                     let temp_flux = creator(&serde_json::Value::Null).unwrap();
//                     if temp_flux.as_ref().type_id() == flux.type_id() {
//                         Some(name.clone())
//                     } else {
//                         None
//                     }
//                 })
//                 .ok_or_else(|| Error::custom("Unknown Flux type"))?
//         };
//
//         let mut state = serializer.serialize_struct("Flux", 2)?;
//         state.serialize_field("type", &type_name)?;
//         state.serialize_field("data", self)?;
//         state.end()
//     }
// }

/// Implements deserialization for `Box<dyn Flux>`.
///
/// This implementation reconstructs the `Flux` type from its string representation and
/// deserializes its data. It uses the global `FLUX_REGISTRY` to find the appropriate
/// constructor for the given `Flux` type.
///
/// # Errors
///
/// Returns a deserialization error if the `Flux` type is unknown or if there is an error
/// during the creation of the `Flux` instance.
impl<'de> Deserialize<'de> for Box<dyn Flux> {
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        trace!("Deserializing Box<dyn Flux>");
        let value: serde_json::Value = serde::Deserialize::deserialize(deserializer)?;

        //////////////////////////
        // TYPE
        //////////////////////////
        let type_name = value.get(TYPE)
            .and_then(serde_json::Value::as_str)
            .ok_or_else(|| DeError::missing_field(TYPE))?
            .to_string();
        trace!("Deserializing Flux type: {}", type_name);

        //////////////////////////
        // ARGS
        //////////////////////////
        let args = value.get(ARGS)
            .ok_or_else(|| DeError::missing_field(ARGS))?;

        // // Replace environment variables for args
        // let args = args.as_object()
        //     .ok_or_else(|| DeError::custom(format!("Expected an object for field {}", ARGS)))?
        //     .iter()
        //     .map(|(k, v)| {
        //         let updated_value = match v.as_str() {
        //             Some(s) => serde_json::Value::String(replace_env_vars(s)),
        //             None => v.clone(), // If the value is not a string, leave it as is
        //         };
        //         (k.clone(), updated_value)
        //     })
        //     .collect::<serde_json::Map<String, serde_json::Value>>();
        //
        // let args_value = serde_json::Value::Object(args.clone());  // Clone args to use it later

        trace!("Deserializing Flux {:?}: {:?}", type_name, args);

        //////////////////////////
        let registry = FLUX_REGISTRY.lock().unwrap();
        trace!("Getting Flux constructor");
        let constructor = registry.creators.get(&type_name)
            .ok_or_else(|| DeError::custom("Unknown Flux type"))?;

        trace!("Creating Flux instance");
        constructor(&args).map_err(|e| DeError::custom( e.to_string()))
    }
}
