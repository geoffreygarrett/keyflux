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
pub struct ActionsListSelectedReposForOrgSecret200Response {
    #[serde(rename = "total_count")]
    pub total_count: i32,
    #[serde(rename = "repositories")]
    pub repositories: Vec<crate::models::MinimalRepository>,
}

impl ActionsListSelectedReposForOrgSecret200Response {
    pub fn new(total_count: i32, repositories: Vec<crate::models::MinimalRepository>) -> ActionsListSelectedReposForOrgSecret200Response {
        ActionsListSelectedReposForOrgSecret200Response {
            total_count,
            repositories,
        }
    }
}

