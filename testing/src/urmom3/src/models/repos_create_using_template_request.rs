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
pub struct ReposCreateUsingTemplateRequest {
    /// The organization or person who will own the new repository. To create a new repository in an organization, the authenticated user must be a member of the specified organization.
    #[serde(rename = "owner", skip_serializing_if = "Option::is_none")]
    pub owner: Option<String>,
    /// The name of the new repository.
    #[serde(rename = "name")]
    pub name: String,
    /// A short description of the new repository.
    #[serde(rename = "description", skip_serializing_if = "Option::is_none")]
    pub description: Option<String>,
    /// Set to `true` to include the directory structure and files from all branches in the template repository, and not just the default branch. Default: `false`.
    #[serde(rename = "include_all_branches", skip_serializing_if = "Option::is_none")]
    pub include_all_branches: Option<bool>,
    /// Either `true` to create a new private repository or `false` to create a new public one.
    #[serde(rename = "private", skip_serializing_if = "Option::is_none")]
    pub private: Option<bool>,
}

impl ReposCreateUsingTemplateRequest {
    pub fn new(name: String) -> ReposCreateUsingTemplateRequest {
        ReposCreateUsingTemplateRequest {
            owner: None,
            name,
            description: None,
            include_all_branches: None,
            private: None,
        }
    }
}

