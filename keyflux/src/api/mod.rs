use reqwest::header::HeaderMap;
use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::time::Duration;

mod github;
pub mod supabase;
pub mod traits;
pub mod vercel;

//
// #[derive(Debug, Serialize, Deserialize)]
// pub struct Request {
//     method: Method,
//     url: Url,
//     headers: HeaderMap,
//     body: Option<Body>,
//     timeout: Option<Duration>,
//     version: Version,
// }
//
// query_params.insert("upsert", self.upsert.to_string());
// let response = client.post(&format!("https://api.vercel.com/v10/projects/{}/env", self.id_or_name))
// .bearer_auth(env::var(VERCEL_ACCESS_TOKEN).unwrap_or_else(|_| self.token.clone().unwrap_or_default()))
// .query(&query_params)
// .json(&self)
// .send()
// .await
// .map_err(FluxError::from_reqwest_error)?; // Note the use of '?' for error handling

#[derive(Debug, Serialize, Deserialize)]
pub enum Method {
    GET,
    POST,
    PUT,
    DELETE,
    PATCH,
    HEAD,
    OPTIONS,
    CONNECT,
    TRACE,
}

#[derive(Debug, Serialize, Deserialize)]
pub struct Request {
    bearer_auth: Option<String>,
    url: String,
    body: Option<String>,
    json: Option<serde_json::Value>,
    method: Method,
    query: Option<serde_json::Value>,
    headers: Option<HashMap<String, String>>,
    cookies: Option<HashMap<String, String>>,
    timeout: Option<Duration>,
    // version: Version,
}
