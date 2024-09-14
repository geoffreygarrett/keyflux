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
pub struct AppsListReposAccessibleToInstallation200Response {
    #[serde(rename = "total_count")]
    pub total_count: i32,
    #[serde(rename = "repositories")]
    pub repositories: Vec<crate::models::Repository>,
    #[serde(rename = "repository_selection", skip_serializing_if = "Option::is_none")]
    pub repository_selection: Option<String>,
}

impl AppsListReposAccessibleToInstallation200Response {
    pub fn new(total_count: i32, repositories: Vec<crate::models::Repository>) -> AppsListReposAccessibleToInstallation200Response {
        AppsListReposAccessibleToInstallation200Response {
            total_count,
            repositories,
            repository_selection: None,
        }
    }
}

