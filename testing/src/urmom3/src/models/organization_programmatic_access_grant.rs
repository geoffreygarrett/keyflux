/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// OrganizationProgrammaticAccessGrant : Minimal representation of an organization programmatic access grant for enumerations



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct OrganizationProgrammaticAccessGrant {
    /// Unique identifier of the fine-grained personal access token. The `pat_id` used to get details about an approved fine-grained personal access token.
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "owner")]
    pub owner: Box<crate::models::SimpleUser>,
    /// Type of repository selection requested.
    #[serde(rename = "repository_selection")]
    pub repository_selection: RepositorySelection,
    /// URL to the list of repositories the fine-grained personal access token can access. Only follow when `repository_selection` is `subset`.
    #[serde(rename = "repositories_url")]
    pub repositories_url: String,
    #[serde(rename = "permissions")]
    pub permissions: Box<crate::models::OrganizationProgrammaticAccessGrantRequestPermissions>,
    /// Date and time when the fine-grained personal access token was approved to access the organization.
    #[serde(rename = "access_granted_at")]
    pub access_granted_at: String,
    /// Whether the associated fine-grained personal access token has expired.
    #[serde(rename = "token_expired")]
    pub token_expired: bool,
    /// Date and time when the associated fine-grained personal access token expires.
    #[serde(rename = "token_expires_at")]
    pub token_expires_at: Option<String>,
    /// Date and time when the associated fine-grained personal access token was last used for authentication.
    #[serde(rename = "token_last_used_at")]
    pub token_last_used_at: Option<String>,
}

impl OrganizationProgrammaticAccessGrant {
    /// Minimal representation of an organization programmatic access grant for enumerations
    pub fn new(id: i32, owner: crate::models::SimpleUser, repository_selection: RepositorySelection, repositories_url: String, permissions: crate::models::OrganizationProgrammaticAccessGrantRequestPermissions, access_granted_at: String, token_expired: bool, token_expires_at: Option<String>, token_last_used_at: Option<String>) -> OrganizationProgrammaticAccessGrant {
        OrganizationProgrammaticAccessGrant {
            id,
            owner: Box::new(owner),
            repository_selection,
            repositories_url,
            permissions: Box::new(permissions),
            access_granted_at,
            token_expired,
            token_expires_at,
            token_last_used_at,
        }
    }
}

/// Type of repository selection requested.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RepositorySelection {
    #[serde(rename = "none")]
    None,
    #[serde(rename = "all")]
    All,
    #[serde(rename = "subset")]
    Subset,
}

impl Default for RepositorySelection {
    fn default() -> RepositorySelection {
        Self::None
    }
}
