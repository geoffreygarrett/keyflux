use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize, Debug)]
#[serde(untagged)]
pub(crate) enum Target {
    Single(String),
    Multiple(Vec<String>),
}


#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct ContentHint {
    #[serde(rename = "type")]
    hint_type: String,
    store_id: String,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct InternalContentHint {
    #[serde(rename = "type")]
    hint_type: String,
    encrypted_value: String,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct EnvironmentVariable {
    pub(crate) target: Option<Target>,
    #[serde(rename = "type")]
    pub(crate) var_type: String,
    pub(crate) sunset_secret_id: Option<String>,
    pub(crate) id: String,
    pub(crate) key: String,
    pub(crate) value: String,
    pub(crate) configuration_id: Option<String>,
    pub(crate) created_at: i64,
    pub(crate) updated_at: i64,
    pub(crate) created_by: Option<String>,
    pub(crate) updated_by: Option<String>,
    pub(crate) git_branch: Option<String>,
    pub(crate) edge_config_id: Option<String>,
    pub(crate) edge_config_token_id: Option<String>,
    pub(crate) content_hint: Option<ContentHint>,
    pub(crate) internal_content_hint: Option<InternalContentHint>,
    pub(crate) decrypted: Option<bool>,
    pub(crate) comment: Option<String>,
    pub(crate) custom_environment_ids: Option<Vec<String>>,
    pub(crate) vsm_value: Option<String>,
    pub(crate) system: Option<bool>,
}