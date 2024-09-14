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
pub struct CodespacesSetSelectedReposForOrgSecretRequest {
    /// An array of repository ids that can access the organization secret. You can only provide a list of repository ids when the `visibility` is set to `selected`. You can add and remove individual repositories using the [Set selected repositories for an organization secret](https://docs.github.com/rest/codespaces/organization-secrets#set-selected-repositories-for-an-organization-secret) and [Remove selected repository from an organization secret](https://docs.github.com/rest/codespaces/organization-secrets#remove-selected-repository-from-an-organization-secret) endpoints.
    #[serde(rename = "selected_repository_ids")]
    pub selected_repository_ids: Vec<i32>,
}

impl CodespacesSetSelectedReposForOrgSecretRequest {
    pub fn new(selected_repository_ids: Vec<i32>) -> CodespacesSetSelectedReposForOrgSecretRequest {
        CodespacesSetSelectedReposForOrgSecretRequest {
            selected_repository_ids,
        }
    }
}

