use serde::{Deserialize, Serialize};
use crate::flux::vercel_projects::models::EnvironmentVariable;

#[derive(Serialize, Deserialize, Debug)]
#[serde(untagged)]
enum Target {
    Single(String),
    Multiple(Vec<String>),
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
struct ContentHint {
    #[serde(rename = "type")]
    hint_type: String,
    store_id: String,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
struct InternalContentHint {
    #[serde(rename = "type")]
    hint_type: String,
    encrypted_value: String,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct Pagination {
    count: i64,
    offset: i64,
    limit: i64,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct GetEnvironmentVariablesResponse {
    pub(crate) envs: Vec<EnvironmentVariable>,
    pagination: Option<Pagination>,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct ErrorResponse {
    code: String,
    message: String,
}
