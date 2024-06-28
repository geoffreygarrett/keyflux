// // use std::collections::HashMap;
// // // src/vercel_env_request.rs
// // use crate::http::{ApiRequest, SendRequest, ApiRequestBuilder, vercel};
// // use reqwest::{Method, header::{HeaderMap, HeaderValue, CONTENT_TYPE, AUTHORIZATION}};
// // use serde::{Deserialize, Serialize};
// // use serde_json::json;
// //
// //
// // #[derive(Serialize, Deserialize)]
// // pub struct VercelEnvRequest {
// //     project_id: String,
// //     key: String,
// //     value: String,
// //     #[serde(rename = "type")]
// //     var_type: String,
// //     token: String,
// //     #[serde(skip_serializing)]
// //     pub slug: Option<String>,
// //     #[serde(skip_serializing)]
// //     pub team_id: Option<String>,
// //     #[serde(skip_serializing)]
// //     pub upsert: Option<bool>,  // Serialized as a query parameter, not in the body
// // }
// //
// // impl VercelEnvRequest {
// //     pub fn new(project_id: String, key: String, value: String, var_type: String, token: String,
// //                slug: Option<String>, team_id: Option<String>, upsert: Option<bool>) -> Self {
// //         VercelEnvRequest {
// //             project_id,
// //             key,
// //             value,
// //             var_type,
// //             token,
// //             slug,
// //             team_id,
// //             upsert,
// //         }
// //     }
// // }
// //
// // impl ApiRequest for VercelEnvRequest {
// //     fn endpoint(&self) -> String {
// //         format!("{}/v10/projects/{}/env", vercel::VERCEL_BASE_URL, self.project_id)
// //     }
// //
// //     fn query(&self) -> HashMap<String, String> {
// //         let mut params = HashMap::new();
// //         if let Some(ref slug) = self.slug {
// //             params.insert("slug".to_string(), slug.clone());
// //         }
// //         if let Some(ref team_id) = self.team_id {
// //             params.insert("teamId".to_string(), team_id.clone());
// //         }
// //         if let Some(upsert) = self.upsert {
// //             params.insert("upsert".to_string(), upsert.to_string());
// //         }
// //         params
// //     }
// //
// //     fn method(&self) -> Method {
// //         Method::POST
// //     }
// //
// //     fn headers(&self) -> HeaderMap {
// //         let mut headers = HeaderMap::new();
// //         headers.insert(AUTHORIZATION, HeaderValue::from_str(&format!("Bearer {}", self.token)).unwrap());
// //         headers.insert(CONTENT_TYPE, HeaderValue::from_static("application/json"));
// //         headers
// //     }
// //
// //     fn body(&self) -> Option<String> {
// //         Some(json!({
// //             "key": self.key,
// //             "value": self.value,
// //             "type": self.var_type
// //         }).to_string())
// //     }
// // }
//
// // QUERY PARAM MACRO FOR THIS:
// // "upsert" => upsert.map_or_else(|| "false".to_string(), |b| b.to_string())
// // macro_rules! query_param {
// //     ($key:expr => $val:expr) => {
// //         if let Some(val) = $val {
// //             params.insert($key.to_string(), val.to_string());
// //         }
// //     };
// //
// // }
//
// // This macro will expand optional fields into a query hashmap entry with defaults
// // Correct the macro for handling optional string fields with a more appropriate default
// macro_rules! optional_to_string {
//     ($map:expr, $key:expr, $option:expr, $default:expr) => {
//         $map.insert(
//             $key.to_string(),
//             $option.map_or_else(
//                 || $default.to_string(),
//                 |val| val.to_string()
//             )
//         );
//     };
// }
//
// // This macro constructs a query map by iterating over provided fields
// // This macro constructs a query map by iterating over provided fields
// macro_rules! construct_query {
//     () => { ::std::collections::HashMap::new() };
//     ($($key:expr => $val:expr, $default:expr),* $(,)?) => {{
//         let mut params = ::std::collections::HashMap::new();
//         $(
//             optional_to_string!(params, $key, $val, $default);
//         )*
//         params
//     }};
// }
//
//
//
// crate::define_api_request!(
//     VercelEnvRequest {
//         project_id: String,
//         key: String,
//         value: String,
//         var_type: String = "plain",
//         token: String,
//         slug: Option<String>,
//         team_id: Option<String>,
//         upsert: Option<bool>
//     },
//     endpoint: format!("https://api.vercel.com/v10/projects/{}/env", self.project_id),
//     method: reqwest::Method::POST,
//     token_field: token,
//     body: {
//         "key" => key,
//         "value" => value,
//         "type" => var_type
//     },
//     query {}
// );
//
// // fn query(&self) -> std::collections::HashMap<String, String> {
// //     $query // Use the passed expression
// // }