use log::trace;
use serde::{de::Error as DeError, Deserialize, Deserializer, Serialize, Serializer};
// use crate::config::utils::replace_env_vars;
// use crate::flux_registry::FLUX_REGISTRY;
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

// use erased_serde::{
//     Serializer as ErasedSerializer
//     , Deserializer as ErasedDeserializer};
use serde::ser::SerializeStruct;
use serde_json::Value;

// impl<'de> Deserialize<'de> for Box<dyn Flux> {
//     fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
//     where
//         D: Deserializer<'de>,
//     {
//         trace!("Deserializing Box<dyn Flux>");
//         let value: serde_json::Value = serde::Deserialize::deserialize(deserializer)?;
//
//         //////////////////////////
//         // TYPE
//         //////////////////////////
//         let type_name = value.get(TYPE)
//             .and_then(serde_json::Value::as_str)
//             .ok_or_else(|| DeError::missing_field(TYPE))?
//             .to_string();
//         trace!("Deserializing Flux type: {}", type_name);
//
//         //////////////////////////
//         // ARGS
//         //////////////////////////
//         let args = value.get(ARGS)
//             .ok_or_else(|| DeError::missing_field(ARGS))?;
//
//         trace!("Deserializing Flux {:?}: {:?}", type_name, args);
//
//         //////////////////////////
//         let registry = FLUX_REGISTRY.lock().unwrap();
//         trace!("Getting Flux constructor");
//         let constructor = registry.creators.get(&type_name)
//             .ok_or_else(|| DeError::custom("Unknown Flux type"))?;
//
//         trace!("Creating Flux instance");
//         constructor(&args).map_err(|e| DeError::custom(e.to_string()))
//     }
// }

// / This is the trait that informs Serde how to deserialize MyMap.
// impl<'de, F> De#[typetag::serde]

// impl<'de> Deserialize<'de> for Box<dyn Flux> {
//     fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
//     where
//         D: Deserializer<'de>,
//     {
//
//         // trace!("Deserializing Box<dyn Flux>");
//         // let mut value: Value = serde::Deserialize::deserialize(deserializer)?;
//         //
//         // let type_name = value.get(TYPE)
//         //     .and_then(Value::as_str)
//         //     .ok_or_else(|| serde::de::Error::missing_field(TYPE))?
//         //     .to_string();
//         // trace!("Deserializing Flux type: {}", type_name);
//         //
//         // // Remove the type field from the JSON object to get the args
//         // value.as_object_mut()
//         //     .ok_or_else(|| serde::de::Error::custom("Expected a JSON object"))?
//         //     .remove(TYPE);
//         //
//         // trace!("Deserializing Flux {:?} with args: {:?}", type_name, value);
//         //
//         // let registry = FLUX_REGISTRY.lock().unwrap();
//         // trace!("Getting Flux constructor");
//         // let constructor = registry.creators.get(&type_name)
//         //     .ok_or_else(|| serde::de::Error::custom("Unknown Flux type"))?;
//         //
//         // trace!("Creating Flux instance");
//         // constructor(&value).map_err(|e| serde::de::Error::custom(e.to_string()))
//     }
// }
//

// impl Serialize for Box<dyn Flux> {
//     fn serialize<S>(&self, serializer: S) -> Result<S::Ok, S::Error>
//     where
//         S: Serializer,
//     {
//         let value = serde_json::to_value(self).map_err(serde::ser::Error::custom)?;
//
//         if let Value::Object(map) = value {
//             let mut state = serializer.serialize_struct("Flux", map.len())?;
//             for (key, value) in map {
//                 state.serialize_field("cow", &value)?;
//             }
//             state.end()
//         } else {
//             Err(serde::ser::Error::custom("Expected a JSON object"))
//         }
//     }
// }
