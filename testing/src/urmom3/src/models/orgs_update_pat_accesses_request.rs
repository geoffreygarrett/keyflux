/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct OrgsUpdatePatAccessesRequest {
    /// Action to apply to the fine-grained personal access token.
    #[serde(rename = "action")]
    pub action: Action,
    /// The IDs of the fine-grained personal access tokens.
    #[serde(rename = "pat_ids")]
    pub pat_ids: Vec<i32>,
}

impl OrgsUpdatePatAccessesRequest {
    pub fn new(action: Action, pat_ids: Vec<i32>) -> OrgsUpdatePatAccessesRequest {
        OrgsUpdatePatAccessesRequest {
            action,
            pat_ids,
        }
    }
}

/// Action to apply to the fine-grained personal access token.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "revoke")]
    Revoke,
}

impl Default for Action {
    fn default() -> Action {
        Self::Revoke
    }
}

