use std::collections::HashMap;
// // // // use serde::{Deserialize, Serialize};
// // // // use async_trait::async_trait;
// // // // use log::{debug, trace};
// // // // use reqwest::{Client};
// // // //
// // // // use crate::api::traits::Fetch;
// // // // use crate::api::vercel::VercelEnvironmentUpsert;
// // // // use crate::error::FluxError;
// // // // use crate::traits::{Flux};
// // // // use crate::key::{AttributeValue, Key};
// // // //
// // // //
// // // // #[derive(Clone, Debug, Serialize, Deserialize)]
// // // // pub struct VercelAttributes {
// // // //     #[serde(rename = "type")]
// // // //     pub var_type: String,
// // // //     /// The deployment targets for the environment variable.
// // // //     pub target: Vec<String>,
// // // //     /// The git branch associated with the environment variable.
// // // //     pub git_branch: Option<String>,
// // // //     /// A comment describing the purpose of the environment variable.
// // // //     pub comment: Option<String>,
// // // //     /// The slug of the environment variable.
// // // //     pub slug: Option<String>,
// // // //     /// The team ID associated with the environment variable.
// // // //     pub team_id: Option<String>,
// // // //     /// Indicates whether to upsert the environment variable.
// // // //     pub upsert: bool,
// // // // }
// // // //
// // // // /// Represents the configuration necessary to manage environment variables in Vercel for a specific project.
// // // // /// It holds the project ID and authentication token required for Vercel API requests.
// // // // #[derive(Serialize, Deserialize, Clone, Debug)]
// // // // pub struct VercelEnvironmentFlux {
// // // //     /// The unique identifier or name of the Vercel project.
// // // //     pub id_or_name: String,
// // // //     /// The authentication token for accessing Vercel API.
// // // //     pub token: String,
// // // //     /// default args for vercel env vars
// // // //     pub args: Option<VercelAttributes>,
// // // // }
// // // //
// // // // // #[macro_use]
// // // // macro_rules! extract_single_attribute {
// // // //     ($attributes:expr, $key:expr, $default:expr) => {
// // // //         match $attributes.get($key) {
// // // //             Some(AttributeValue::Single(value)) => value.clone(),
// // // //             _ => $default.to_string(),
// // // //         }
// // // //     };
// // // //
// // // //     ($attributes:expr, $key:expr) => {
// // // //         $attributes.get($key).and_then(|attr| {
// // // //             if let AttributeValue::Single(value) = attr {
// // // //                 Some(value.clone())
// // // //             } else {
// // // //                 None
// // // //             }
// // // //         })
// // // //     };
// // // // }
// // // //
// // // // // #[macro_use]
// // // // macro_rules! extract_multiple_attribute {
// // // //     ($attributes:expr, $key:expr, $default:expr) => {
// // // //         match $attributes.get($key) {
// // // //             Some(AttributeValue::Multiple(values)) => values.clone(),
// // // //             _ => $default.to_vec(),
// // // //         }
// // // //     };
// // // //
// // // //     ($attributes:expr, $key:expr) => {
// // // //         $attributes.get($key).and_then(|attr| {
// // // //             if let AttributeValue::Multiple(values) = attr {
// // // //                 Some(values.clone())
// // // //             } else {
// // // //                 None
// // // //             }
// // // //         })
// // // //     };
// // // // }
// // // //
// // // //
// // // // #[async_trait]
// // // // impl Flux for VercelEnvironmentFlux {
// // // //     async fn initialize(&self) -> Result<(), FluxError> {
// // // //         Ok(())
// // // //     }
// // // //
// // // //     async fn finalize(&self) -> Result<(), FluxError> {
// // // //         Ok(())
// // // //     }
// // // //
// // // //     async fn single(&self, key: &Key) -> Result<(), FluxError> {
// // // //         trace!("Upserting environment variable {} for Vercel project {}", key.name, self.id_or_name);
// // // //         let client = Client::new();
// // // //
// // // //         let upsert_request = VercelEnvironmentUpsert {
// // // //             id_or_name: self.id_or_name.clone(),
// // // //             token: Some(self.token.clone()),  // Assuming token must be present
// // // //             key: key.name.clone(),
// // // //             value: key.value.clone(),
// // // //             var_type: extract_single_attribute!(key.attributes, "var_type", "sensitive"),
// // // //             target: extract_multiple_attribute!(key.attributes, "target", vec!["production".to_string()]),
// // // //             git_branch: extract_single_attribute!(key.attributes, "git_branch"),
// // // //             comment: extract_single_attribute!(key.attributes, "comment"),
// // // //             slug: extract_single_attribute!(key.attributes, "slug"),
// // // //             team_id: extract_single_attribute!(key.attributes, "team_id"),
// // // //             upsert: key.attributes.get("upsert").and_then(|attr| {
// // // //                 if let AttributeValue::Single(value) = attr {
// // // //                     value.parse().ok()
// // // //                 } else {
// // // //                     None
// // // //                 }
// // // //             }).unwrap_or(true),
// // // //         };
// // // //
// // // //         let response = upsert_request.fetch(&client).await.map_err(FluxError::from)?;
// // // //
// // // //         match response.status() {
// // // //             reqwest::StatusCode::CREATED => {
// // // //                 debug!("Environment variable {:?} upserted successfully", key.name);
// // // //                 Ok(())
// // // //             }
// // // //             reqwest::StatusCode::BAD_REQUEST => Err(FluxError::BadRequest("Invalid request parameters".into())),
// // // //             reqwest::StatusCode::UNAUTHORIZED => Err(FluxError::Unauthorized("Unauthorized access".into())),
// // // //             reqwest::StatusCode::PAYMENT_REQUIRED => Err(FluxError::PaymentRequired("Payment required".into())),
// // // //             reqwest::StatusCode::FORBIDDEN => Err(FluxError::Forbidden("Access forbidden".into())),
// // // //             reqwest::StatusCode::CONFLICT => Err(FluxError::Conflict("Conflict: Project is being transferred".into())),
// // // //             _ => Err(FluxError::ReqwestError(response.error_for_status().unwrap_err())),
// // // //         }
// // // //     }
// // // //
// // // //
// // // //     async fn check(&self, _key: &Key) -> Result<Option<String>, FluxError> {
// // // //         Ok(None)
// // // //     }
// // // //
// // // //     async fn revert(&self, _key: &Key) -> Result<(), FluxError> {
// // // //         Ok(())
// // // //     }
// // // // }
// // //
// // // use async_trait::async_trait;
// // // use log::{debug, trace};
// // // use reqwest::{Client};
// // // use serde::{Deserialize, Serialize};
// // // use crate::api::traits::Fetch;
// // // use crate::api::vercel::VercelEnvironmentUpsert;
// // // use crate::error::FluxError;
// // // use crate::traits::Flux;
// // // use crate::key::{AttributeValue, Key};
// // //
// // // #[derive(Clone, Debug, Serialize, Deserialize)]
// // // pub struct VercelAttributes {
// // //     #[serde(rename = "type")]
// // //     pub var_type: String,
// // //     /// The deployment targets for the environment variable.
// // //     pub target: Vec<String>,
// // //     /// The git branch associated with the environment variable.
// // //     pub git_branch: Option<String>,
// // //     /// A comment describing the purpose of the environment variable.
// // //     pub comment: Option<String>,
// // //     /// The slug of the environment variable.
// // //     pub slug: Option<String>,
// // //     /// The team ID associated with the environment variable.
// // //     pub team_id: Option<String>,
// // //     /// Indicates whether to upsert the environment variable.
// // //     pub upsert: bool,
// // // }
// // //
// // // /// Represents the configuration necessary to manage environment variables in Vercel for a specific project.
// // // /// It holds the project ID and authentication token required for Vercel API requests.
// // // #[derive(Serialize, Deserialize, Clone, Debug)]
// // // pub struct VercelEnvironmentFlux {
// // //     /// The unique identifier or name of the Vercel project.
// // //     pub id_or_name: String,
// // //     /// The authentication token for accessing Vercel API.
// // //     pub token: String,
// // //     /// Default args for Vercel env vars.
// // //     pub args: Option<VercelAttributes>,
// // // }
// // //
// // // macro_rules! extract_single_attribute {
// // //     ($key_attributes:expr, $flux_attributes:expr, $key:expr, $default:expr) => {
// // //         $key_attributes.get($key).and_then(|attr| {
// // //             if let AttributeValue::Single(value) = attr {
// // //                 Some(value.clone())
// // //             } else {
// // //                 None
// // //             }
// // //         }).or_else(|| $flux_attributes.and_then(|attrs| Some(attrs.$key.clone()))).unwrap_or_else(|| $default.to_string())
// // //     };
// // //
// // //     ($key_attributes:expr, $flux_attributes:expr, $key:expr) => {
// // //         $key_attributes.get($key).and_then(|attr| {
// // //             if let AttributeValue::Single(value) = attr {
// // //                 Some(value.clone())
// // //             } else {
// // //                 None
// // //             }
// // //         }).or_else(|| $flux_attributes.and_then(|attrs| attrs.$key.clone()))
// // //     };
// // // }
// // //
// // // macro_rules! extract_multiple_attribute {
// // //     ($key_attributes:expr, $flux_attributes:expr, $key:expr, $default:expr) => {
// // //         $key_attributes.get($key).and_then(|attr| {
// // //             if let AttributeValue::Multiple(values) = attr {
// // //                 Some(values.clone())
// // //             } else {
// // //                 None
// // //             }
// // //         }).or_else(|| $flux_attributes.and_then(|attrs| Some(attrs.$key.clone()))).unwrap_or_else(|| $default.to_vec())
// // //     };
// // //
// // //     ($key_attributes:expr, $flux_attributes:expr, $key:expr) => {
// // //         $key_attributes.get($key).and_then(|attr| {
// // //             if let AttributeValue::Multiple(values) = attr {
// // //                 Some(values.clone())
// // //             } else {
// // //                 None
// // //             }
// // //         }).or_else(|| $flux_attributes.and_then(|attrs| Some(attrs.$key.clone())))
// // //     };
// // // }
// // //
// // // #[async_trait]
// // // impl Flux for VercelEnvironmentFlux {
// // //     async fn initialize(&self) -> Result<(), FluxError> {
// // //         Ok(())
// // //     }
// // //
// // //     async fn finalize(&self) -> Result<(), FluxError> {
// // //         Ok(())
// // //     }
// // //
// // //     async fn single(&self, key: &Key) -> Result<(), FluxError> {
// // //         trace!("Upserting environment variable {} for Vercel project {}", key.name, self.id_or_name);
// // //         let client = Client::new();
// // //
// // //         let global_attrs = self.args.clone();
// // //
// // //         let upsert_request = VercelEnvironmentUpsert {
// // //             id_or_name: self.id_or_name.clone(),
// // //             token: Some(self.token.clone()),  // Assuming token must be present
// // //             key: key.name.clone(),
// // //             value: key.value.clone(),
// // //             var_type: extract_single_attribute!(key.attributes, global_attrs, var_type, "sensitive"),
// // //             target: extract_multiple_attribute!(key.attributes, global_attrs, target, vec!["production".to_string()]),
// // //             git_branch: extract_single_attribute!(key.attributes, global_attrs, git_branch),
// // //             comment: extract_single_attribute!(key.attributes, global_attrs, comment),
// // //             slug: extract_single_attribute!(key.attributes, global_attrs, slug),
// // //             team_id: extract_single_attribute!(key.attributes, global_attrs, team_id),
// // //             upsert: key.attributes.get("upsert").and_then(|attr| {
// // //                 if let AttributeValue::Single(value) = attr {
// // //                     value.parse().ok()
// // //                 } else {
// // //                     None
// // //                 }
// // //             }).or_else(|| global_attrs.map(|attrs| attrs.upsert)).unwrap_or(true),
// // //         };
// // //
// // //         let response = upsert_request.fetch(&client).await.map_err(FluxError::from)?;
// // //
// // //         match response.status() {
// // //             reqwest::StatusCode::CREATED => {
// // //                 debug!("Environment variable {:?} upserted successfully", key.name);
// // //                 Ok(())
// // //             }
// // //             reqwest::StatusCode::BAD_REQUEST => Err(FluxError::BadRequest("Invalid request parameters".into())),
// // //             reqwest::StatusCode::UNAUTHORIZED => Err(FluxError::Unauthorized("Unauthorized access".into())),
// // //             reqwest::StatusCode::PAYMENT_REQUIRED => Err(FluxError::PaymentRequired("Payment required".into())),
// // //             reqwest::StatusCode::FORBIDDEN => Err(FluxError::Forbidden("Access forbidden".into())),
// // //             reqwest::StatusCode::CONFLICT => Err(FluxError::Conflict("Conflict: Project is being transferred".into())),
// // //             _ => Err(FluxError::ReqwestError(response.error_for_status().unwrap_err())),
// // //         }
// // //     }
// // //
// // //     async fn check(&self, _key: &Key) -> Result<Option<String>, FluxError> {
// // //         Ok(None)
// // //     }
// // //
// // //     async fn revert(&self, _key: &Key) -> Result<(), FluxError> {
// // //         Ok(())
// // //     }
// // // }
// // //
// //
// // use async_trait::async_trait;
// // use log::{debug, trace};
// // use reqwest::Client;
// // use serde::{Deserialize, Serialize};
// // use crate::api::traits::Fetch;
// // use crate::api::vercel::VercelEnvironmentUpsert;
// // use crate::error::FluxError;
// // use crate::key::{AttributeValue, Key};
// // use crate::traits::Flux;
// //
// // #[derive(Clone, Debug, Serialize, Deserialize)]
// // pub struct VercelAttributes {
// //     #[serde(rename = "type")]
// //     pub var_type: String,
// //     /// The deployment targets for the environment variable.
// //     pub target: Vec<String>,
// //     /// The git branch associated with the environment variable.
// //     pub git_branch: Option<String>,
// //     /// A comment describing the purpose of the environment variable.
// //     pub comment: Option<String>,
// //     /// The slug of the environment variable.
// //     pub slug: Option<String>,
// //     /// The team ID associated with the environment variable.
// //     pub team_id: Option<String>,
// //     /// Indicates whether to upsert the environment variable.
// //     pub upsert: bool,
// // }
// //
// // /// Represents the configuration necessary to manage environment variables in Vercel for a specific project.
// // /// It holds the project ID and authentication token required for Vercel API requests.
// // #[derive(Serialize, Deserialize, Clone, Debug)]
// // pub struct VercelEnvironmentFlux {
// //     /// The unique identifier or name of the Vercel project.
// //     pub id_or_name: String,
// //     /// The authentication token for accessing Vercel API.
// //     pub token: String,
// //     /// Default args for Vercel env vars.
// //     pub args: Option<VercelAttributes>,
// // }
// //
// // macro_rules! extract_single_attribute {
// //     ($key_attributes:expr, $flux_attributes:expr, $key:literal, $default:expr) => {
// //         $key_attributes.get($key).and_then(|attr| {
// //             if let AttributeValue::Single(value) = attr {
// //                 Some(value.clone())
// //             } else {
// //                 None
// //             }
// //         }).or_else(|| $flux_attributes.and_then(|attrs| Some(attrs.$key.clone()))).unwrap_or_else(|| $default.to_string())
// //     };
// //
// //     ($key_attributes:expr, $flux_attributes:expr, $key:literal) => {
// //         $key_attributes.get($key).and_then(|attr| {
// //             if let AttributeValue::Single(value) = attr {
// //                 Some(value.clone())
// //             } else {
// //                 None
// //             }
// //         }).or_else(|| $flux_attributes.and_then(|attrs| attrs.$key.clone()))
// //     };
// // }
// //
// // macro_rules! extract_multiple_attribute {
// //     ($key_attributes:expr, $flux_attributes:expr, $key:literal, $default:expr) => {
// //         $key_attributes.get($key).and_then(|attr| {
// //             if let AttributeValue::Multiple(values) = attr {
// //                 Some(values.clone())
// //             } else {
// //                 None
// //             }
// //         }).or_else(|| $flux_attributes.and_then(|attrs| Some(attrs.$key.clone()))).unwrap_or_else(|| $default.to_vec())
// //     };
// //
// //     ($key_attributes:expr, $flux_attributes:expr, $key:literal) => {
// //         $key_attributes.get($key).and_then(|attr| {
// //             if let AttributeValue::Multiple(values) = attr {
// //                 Some(values.clone())
// //             } else {
// //                 None
// //             }
// //         }).or_else(|| $flux_attributes.and_then(|attrs| Some(attrs.$key.clone())))
// //     };
// // }
// //
// // #[async_trait]
// // impl Flux for VercelEnvironmentFlux {
// //     async fn initialize(&self) -> Result<(), FluxError> {
// //         Ok(())
// //     }
// //
// //     async fn finalize(&self) -> Result<(), FluxError> {
// //         Ok(())
// //     }
// //
// //     async fn single(&self, key: &Key) -> Result<(), FluxError> {
// //         trace!("Upserting environment variable {} for Vercel project {}", key.name, self.id_or_name);
// //         let client = Client::new();
// //
// //         let global_attrs = self.args.clone();
// //
// //         let upsert_request = VercelEnvironmentUpsert {
// //             id_or_name: self.id_or_name.clone(),
// //             token: Some(self.token.clone()),  // Assuming token must be present
// //             key: key.name.clone(),
// //             value: key.value.clone(),
// //             var_type: extract_single_attribute!(key.attributes, global_attrs, "var_type", "sensitive"),
// //             target: extract_multiple_attribute!(key.attributes, global_attrs, "target", vec!["production".to_string()]),
// //             git_branch: extract_single_attribute!(key.attributes, global_attrs, "git_branch"),
// //             comment: extract_single_attribute!(key.attributes, global_attrs, "comment"),
// //             slug: extract_single_attribute!(key.attributes, global_attrs, "slug"),
// //             team_id: extract_single_attribute!(key.attributes, global_attrs, "team_id"),
// //             upsert: key.attributes.get("upsert").and_then(|attr| {
// //                 if let AttributeValue::Single(value) = attr {
// //                     value.parse().ok()
// //                 } else {
// //                     None
// //                 }
// //             }).or_else(|| global_attrs.map(|attrs| attrs.upsert)).unwrap_or(true),
// //         };
// //
// //         let response = upsert_request.fetch(&client).await.map_err(FluxError::from)?;
// //
// //         match response.status() {
// //             reqwest::StatusCode::CREATED => {
// //                 debug!("Environment variable {:?} upserted successfully", key.name);
// //                 Ok(())
// //             }
// //             reqwest::StatusCode::BAD_REQUEST => Err(FluxError::BadRequest("Invalid request parameters".into())),
// //             reqwest::StatusCode::UNAUTHORIZED => Err(FluxError::Unauthorized("Unauthorized access".into())),
// //             reqwest::StatusCode::PAYMENT_REQUIRED => Err(FluxError::PaymentRequired("Payment required".into())),
// //             reqwest::StatusCode::FORBIDDEN => Err(FluxError::Forbidden("Access forbidden".into())),
// //             reqwest::StatusCode::CONFLICT => Err(FluxError::Conflict("Conflict: Project is being transferred".into())),
// //             _ => Err(FluxError::ReqwestError(response.error_for_status().unwrap_err())),
// //         }
// //     }
// //
// //     async fn check(&self, _key: &Key) -> Result<Option<String>, FluxError> {
// //         Ok(None)
// //     }
// //
// //     async fn revert(&self, _key: &Key) -> Result<(), FluxError> {
// //         Ok(())
// //     }
// // }
// //
// use async_trait::async_trait;
// use log::{debug, trace};
// use reqwest::Client;
// use serde::{Deserialize, Serialize};
// use crate::api::traits::Fetch;
// use crate::api::vercel::VercelEnvironmentUpsert;
// use crate::error::FluxError;
// use crate::key::{AttributeValue, Key};
// use crate::traits::Flux;
//
// #[derive(Clone, Debug, Serialize, Deserialize)]
// pub struct VercelAttributes {
//     #[serde(rename = "type")]
//     pub var_type: String,
//     /// The deployment targets for the environment variable.
//     pub target: Vec<String>,
//     /// The git branch associated with the environment variable.
//     pub git_branch: Option<String>,
//     /// A comment describing the purpose of the environment variable.
//     pub comment: Option<String>,
//     /// The slug of the environment variable.
//     pub slug: Option<String>,
//     /// The team ID associated with the environment variable.
//     pub team_id: Option<String>,
//     /// Indicates whether to upsert the environment variable.
//     pub upsert: bool,
// }
//
// /// Represents the configuration necessary to manage environment variables in Vercel for a specific project.
// /// It holds the project ID and authentication token required for Vercel API requests.
// #[derive(Serialize, Deserialize, Clone, Debug)]
// pub struct VercelEnvironmentFlux {
//     /// The unique identifier or name of the Vercel project.
//     pub id_or_name: String,
//     /// The authentication token for accessing Vercel API.
//     pub token: String,
//     /// Default args for Vercel env vars.
//     pub args: Option<VercelAttributes>,
// }
//
// macro_rules! extract_single_attribute {
//     ($key_attributes:expr, $flux_attributes:expr, $key:literal, $default:expr) => {
//         $key_attributes.get($key).and_then(|attr| {
//             if let AttributeValue::Single(value) = attr {
//                 Some(value.clone())
//             } else {
//                 None
//             }
//         }).or_else(|| $flux_attributes.as_ref().and_then(|attrs| Some(attrs.$key.clone()))).unwrap_or_else(|| $default.to_string())
//     };
//
//     ($key_attributes:expr, $flux_attributes:expr, $key:literal) => {
//         $key_attributes.get($key).and_then(|attr| {
//             if let AttributeValue::Single(value) = attr {
//                 Some(value.clone())
//             } else {
//                 None
//             }
//         }).or_else(|| $flux_attributes.as_ref().and_then(|attrs| attrs.$key.clone()))
//     };
// }
//
// macro_rules! extract_multiple_attribute {
//     ($key_attributes:expr, $flux_attributes:expr, $key:literal, $default:expr) => {
//         $key_attributes.get($key).and_then(|attr| {
//             if let AttributeValue::Multiple(values) = attr {
//                 Some(values.clone())
//             } else {
//                 None
//             }
//         }).or_else(|| $flux_attributes.as_ref().and_then(|attrs| Some(attrs.$key.clone()))).unwrap_or_else(|| $default.to_vec())
//     };
//
//     ($key_attributes:expr, $flux_attributes:expr, $key:literal) => {
//         $key_attributes.get($key).and_then(|attr| {
//             if let AttributeValue::Multiple(values) = attr {
//                 Some(values.clone())
//             } else {
//                 None
//             }
//         }).or_else(|| $flux_attributes.as_ref().and_then(|attrs| Some(attrs.$key.clone())))
//     };
// }
//
// #[async_trait]
// impl Flux for VercelEnvironmentFlux {
//     async fn initialize(&self) -> Result<(), FluxError> {
//         Ok(())
//     }
//
//     async fn finalize(&self) -> Result<(), FluxError> {
//         Ok(())
//     }
//
//     async fn single(&self, key: &Key) -> Result<(), FluxError> {
//         trace!("Upserting environment variable {} for Vercel project {}", key.name, self.id_or_name);
//         let client = Client::new();
//
//         let global_attrs = self.args.clone();
//
//         let upsert_request = VercelEnvironmentUpsert {
//             id_or_name: self.id_or_name.clone(),
//             token: Some(self.token.clone()),  // Assuming token must be present
//             key: key.name.clone(),
//             value: key.value.clone(),
//             var_type: extract_single_attribute!(key.attributes, global_attrs, "var_type", "sensitive"),
//             target: extract_multiple_attribute!(key.attributes, global_attrs, "target", vec!["production".to_string()]),
//             git_branch: extract_single_attribute!(key.attributes, global_attrs, "git_branch"),
//             comment: extract_single_attribute!(key.attributes, global_attrs, "comment"),
//             slug: extract_single_attribute!(key.attributes, global_attrs, "slug"),
//             team_id: extract_single_attribute!(key.attributes, global_attrs, "team_id"),
//             upsert: key.attributes.get("upsert").and_then(|attr| {
//                 if let AttributeValue::Single(value) = attr {
//                     value.parse().ok()
//                 } else {
//                     None
//                 }
//             }).or_else(|| global_attrs.as_ref().map(|attrs| attrs.upsert)).unwrap_or(true),
//         };
//
//         let response = upsert_request.fetch(&client).await.map_err(FluxError::from)?;
//
//         match response.status() {
//             reqwest::StatusCode::CREATED => {
//                 debug!("Environment variable {:?} upserted successfully", key.name);
//                 Ok(())
//             }
//             reqwest::StatusCode::BAD_REQUEST => Err(FluxError::BadRequest("Invalid request parameters".into())),
//             reqwest::StatusCode::UNAUTHORIZED => Err(FluxError::Unauthorized("Unauthorized access".into())),
//             reqwest::StatusCode::PAYMENT_REQUIRED => Err(FluxError::PaymentRequired("Payment required".into())),
//             reqwest::StatusCode::FORBIDDEN => Err(FluxError::Forbidden("Access forbidden".into())),
//             reqwest::StatusCode::CONFLICT => Err(FluxError::Conflict("Conflict: Project is being transferred".into())),
//             _ => Err(FluxError::ReqwestError(response.error_for_status().unwrap_err())),
//         }
//     }
//
//     async fn check(&self, _key: &Key) -> Result<Option<String>, FluxError> {
//         Ok(None)
//     }
//
//     async fn revert(&self, _key: &Key) -> Result<(), FluxError> {
//         Ok(())
//     }
// }
use async_trait::async_trait;
use log::{debug, info, trace};
use reqwest::Client;
use serde::{Deserialize, Serialize};
use serde_json::{Value};
use crate::api::traits::Fetch;
use crate::api::vercel::VercelEnvironmentUpsert;
use crate::error::FluxError;
use crate::file::key_collection::KeyCollection;
use crate::flux::replace_vars_in_json;
use crate::key::{Key};
use crate::traits::Flux;
use crate::flux::merge;

// fn merge(a: &mut Option<Value>, b: Option<Value>) -> Option<Value> {
//     match (a.take(), b) {
//         (Some(Value::Object(mut a_obj)), Some(Value::Object(b_obj))) => {
//             for (k, v) in b_obj {
//                 let mut a_obj_map = match a_obj.as_object_mut() {
//                     Some(map) => map,
//                     None => return Some(a_obj.clone()), // Return a_obj if it's not an object
//                 };
//                 merge(a_obj_map.entry(k).or_insert(Value::Null), Some(v));
//             }
//             Some(a_obj)
//         }
//         (Some(a), Some(b)) => {
//             efficient_merge(&mut a.clone(), b);
//             Some(a)
//         }
//         (None, Some(b)) => Some(b), // Return b if a is None
//         (Some(a), None) => Some(a), // Return a if b is None
//         (None, None) => None,       // Both are None, return None
//     }
// }

// fn safe_merge(a: &mut Option<Value>, mut b: Option<Value>) {
//     match (a.take(), b.take()) {
//         (Some(mut a_value), Some(b_value)) => {
//             merge(&mut a_value, b_value);
//             *a = Some(a_value);
//         }
//         (Some(a_value), None) => {
//             *a = Some(a_value);
//         }
//         (None, Some(b_value)) => {
//             *a = Some(b_value);
//         }
//         (None, None) => {}
//     }
// }


// #[derive(Clone, Debug, Serialize, Deserialize)]
// pub struct VercelUpsertInput {
//     #[serde(rename = "type")]
//     pub var_type: String,
//     /// The deployment targets for the environment variable.
//     pub target: Vec<String>,
//     /// The git branch associated with the environment variable.
//     pub git_branch: Option<String>,
//     /// A comment describing the purpose of the environment variable.
//     pub comment: Option<String>,
//     /// The slug of the environment variable.
//     pub slug: Option<String>,
//     /// The team ID associated with the environment variable.
//     pub team_id: Option<String>,
//     /// Indicates whether to upsert the environment variable.
//     pub upsert: bool,
//     /// ----
//     /// The unique identifier or name of the Vercel project.
//     pub id_or_name: String,
//     /// The authentication token for accessing Vercel API.
//     pub token: String,
// }

/// Represents the configuration necessary to manage environment variables in Vercel for a specific project.
/// It holds the project ID and authentication token required for Vercel API requests.
#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct VercelEnvironmentFlux {
    // #[serde(flatten)]
    pub input: Option<Value>,
}

// fn extract_single_attribute(attributes: &HashMap<String, Value>, flux_attributes: &Option<VercelAttributes>, key: &str, default: &str) -> String {
//     attributes.get(key).and_then(|attr| {
//         if let Value::String(value) = attr {
//             Some(value.clone())
//         } else {
//             None
//         }
//     }).or_else(|| flux_attributes.as_ref().and_then(|attrs| {
//         match key {
//             "var_type" => Some(attrs.var_type.clone()),
//             "git_branch" => attrs.git_branch.clone(),
//             "comment" => attrs.comment.clone(),
//             "slug" => attrs.slug.clone(),
//             "team_id" => attrs.team_id.clone(),
//             _ => None,
//         }
//     })).unwrap_or_else(|| default.to_string())
// }

// fn extract_multiple_attribute(attributes: &Attributes, flux_attributes: &Option<VercelAttributes>, key: &str, default: Vec<String>) -> Vec<String> {
//     attributes.get(key).and_then(|attr| {
//         if let AttributeValue::Multiple(values) = attr {
//             Some(values.clone())
//         } else {
//             None
//         }
//     }).or_else(|| flux_attributes.as_ref().and_then(|attrs| {
//         match key {
//             "target" => Some(attrs.target.clone()),
//             _ => None,
//         }
//     })).unwrap_or(default)
// }

#[async_trait]
impl Flux for VercelEnvironmentFlux {
    async fn initialize(&self) -> Result<(), FluxError> {
        Ok(())
    }

    async fn finalize(&self) -> Result<(), FluxError> {
        Ok(())
    }

    async fn single(&self, key: &Key) -> Result<(), FluxError> {
        let client = Client::new();
        // check if there are two amognst input and key input
        let mut merged: Value;
        match (&self.input, key.input()) {
            (Some(a), Some(b)) => {
                merged = a.clone();
                merge(&mut merged, b.clone());
            }
            (Some(a), None) => {
                merged = a.clone();
            }
            (None, Some(b)) => {
                merged = b.clone();
            }
            (None, None) => {
                return Err(FluxError::BadRequest("Vercel upsert requires input to be present".into()));
            }
        }
        replace_vars_in_json(&mut merged);
        let input_struct: VercelEnvironmentUpsert;
        merged["key"] = key.name().into();
        merged["value"] = key.value().into();
        match serde_json::from_value(merged) {
            Ok(value) => {
                input_struct = value;
            }
            Err(e) => {
                return Err(FluxError::BadRequest(format!("Error parsing input [VercelEnvironmentUpsert]: {}", e).into()));
            }
        }
        let response = input_struct.fetch(&client).await.map_err(FluxError::from)?;
        match response.status() {
            reqwest::StatusCode::CREATED => {
                info!("Environment variable {:?} upserted successfully", key.name());
                Ok(())
            }
            reqwest::StatusCode::BAD_REQUEST => Err(FluxError::BadRequest("Invalid request parameters".into())),
            reqwest::StatusCode::UNAUTHORIZED => Err(FluxError::Unauthorized("Unauthorized access".into())),
            reqwest::StatusCode::PAYMENT_REQUIRED => Err(FluxError::PaymentRequired("Payment required".into())),
            reqwest::StatusCode::FORBIDDEN => Err(FluxError::Forbidden("Access forbidden".into())),
            reqwest::StatusCode::CONFLICT => Err(FluxError::Conflict("Conflict: Project is being transferred".into())),
            _ => Err(FluxError::ReqwestError(response.error_for_status().unwrap_err())),
        }
    }

    async fn check(&self, _key: &Key) -> Result<Option<String>, FluxError> {
        Ok(None)
    }

    async fn revert(&self, _key: &Key) -> Result<(), FluxError> {
        Ok(())
    }
}
