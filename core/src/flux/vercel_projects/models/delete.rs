use serde::{Deserialize, Serialize};
use crate::flux::vercel_projects::models::{ContentHint, InternalContentHint, Target};

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct DeleteEnvironmentVariableErrorResponse {
    code: String,
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
pub(crate) enum Value {
    Single(String),
    Multiple(Vec<String>),
}
