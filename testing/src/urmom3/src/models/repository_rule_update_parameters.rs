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
pub struct RepositoryRuleUpdateParameters {
    /// Branch can pull changes from its upstream repository
    #[serde(rename = "update_allows_fetch_and_merge")]
    pub update_allows_fetch_and_merge: bool,
}

impl RepositoryRuleUpdateParameters {
    pub fn new(update_allows_fetch_and_merge: bool) -> RepositoryRuleUpdateParameters {
        RepositoryRuleUpdateParameters {
            update_allows_fetch_and_merge,
        }
    }
}

