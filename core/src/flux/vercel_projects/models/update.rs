use serde::{Deserialize, Serialize};
use crate::flux::vercel_projects::models::{ContentHint, InternalContentHint, Target};

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct EditEnvironmentVariableRequest {
    key: Option<String>,
    target: Option<Vec<String>>,
    git_branch: Option<String>,
    #[serde(rename = "type")]
    var_type: Option<String>,
    value: Option<String>,
    custom_environment_ids: Option<Vec<String>>,
    comment: Option<String>,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
struct EditEnvironmentVariableResponse {
    target: Option<Target>,
    #[serde(rename = "type")]
    var_type: String,
    sunset_secret_id: Option<String>,
    id: String,
    key: String,
    value: String,
    configuration_id: Option<String>,
    created_at: i64,
    updated_at: i64,
    created_by: Option<String>,
    updated_by: Option<String>,
    git_branch: Option<String>,
    edge_config_id: Option<String>,
    edge_config_token_id: Option<String>,
    content_hint: Option<ContentHint>,
    internal_content_hint: Option<InternalContentHint>,
    decrypted: Option<bool>,
    comment: Option<String>,
    custom_environment_ids: Option<Vec<String>>,
    vsm_value: Option<String>,
    system: Option<bool>,
}
