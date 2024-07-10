use serde::{Deserialize, Serialize};

use crate::flux::vercel_projects::models::{EnvironmentVariable, Target};

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct CreateEnvironmentVariable {
    key: String,
    value: String,
    #[serde(rename = "type")]
    var_type: String,
    target: Option<Vec<String>>,
    git_branch: Option<String>,
    comment: Option<String>,
    custom_environment_ids: Option<Vec<String>>,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct EnvironmentVariableResponse {
    pub(crate) created: Vec<EnvironmentVariable>,
    pub(crate) failed: Vec<FailedEnvironmentVariable>,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct FailedEnvironmentVariable {
    pub(crate) error: ErrorDetails,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct ErrorDetails {
    pub(crate) code: String,
    message: String,
    key: Option<String>,
    env_var_id: Option<String>,
    env_var_key: Option<String>,
    action: Option<String>,
    link: Option<String>,
    value: Option<Value>,
    git_branch: Option<String>,
    target: Option<Target>,
    project: Option<String>,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(untagged)]
enum Value {
    Single(String),
    Multiple(Vec<String>),
}
