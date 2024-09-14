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
pub struct RepositoryRulesetConditionsRepositoryIdTargetRepositoryId {
    /// The repository IDs that the ruleset applies to. One of these IDs must match for the condition to pass.
    #[serde(rename = "repository_ids", skip_serializing_if = "Option::is_none")]
    pub repository_ids: Option<Vec<i32>>,
}

impl RepositoryRulesetConditionsRepositoryIdTargetRepositoryId {
    pub fn new() -> RepositoryRulesetConditionsRepositoryIdTargetRepositoryId {
        RepositoryRulesetConditionsRepositoryIdTargetRepositoryId {
            repository_ids: None,
        }
    }
}

