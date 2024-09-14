/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// RepositoryRuleParamsRestrictedCommits : Restricted commit



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct RepositoryRuleParamsRestrictedCommits {
    /// Full or abbreviated commit hash to reject
    #[serde(rename = "oid")]
    pub oid: String,
    /// Reason for restriction
    #[serde(rename = "reason", skip_serializing_if = "Option::is_none")]
    pub reason: Option<String>,
}

impl RepositoryRuleParamsRestrictedCommits {
    /// Restricted commit
    pub fn new(oid: String) -> RepositoryRuleParamsRestrictedCommits {
        RepositoryRuleParamsRestrictedCommits {
            oid,
            reason: None,
        }
    }
}

