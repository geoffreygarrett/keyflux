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
pub struct MigrationsStartForAuthenticatedUserRequest {
    /// Lock the repositories being migrated at the start of the migration
    #[serde(rename = "lock_repositories", skip_serializing_if = "Option::is_none")]
    pub lock_repositories: Option<bool>,
    /// Indicates whether metadata should be excluded and only git source should be included for the migration.
    #[serde(rename = "exclude_metadata", skip_serializing_if = "Option::is_none")]
    pub exclude_metadata: Option<bool>,
    /// Indicates whether the repository git data should be excluded from the migration.
    #[serde(rename = "exclude_git_data", skip_serializing_if = "Option::is_none")]
    pub exclude_git_data: Option<bool>,
    /// Do not include attachments in the migration
    #[serde(rename = "exclude_attachments", skip_serializing_if = "Option::is_none")]
    pub exclude_attachments: Option<bool>,
    /// Do not include releases in the migration
    #[serde(rename = "exclude_releases", skip_serializing_if = "Option::is_none")]
    pub exclude_releases: Option<bool>,
    /// Indicates whether projects owned by the organization or users should be excluded.
    #[serde(rename = "exclude_owner_projects", skip_serializing_if = "Option::is_none")]
    pub exclude_owner_projects: Option<bool>,
    /// Indicates whether this should only include organization metadata (repositories array should be empty and will ignore other flags).
    #[serde(rename = "org_metadata_only", skip_serializing_if = "Option::is_none")]
    pub org_metadata_only: Option<bool>,
    /// Exclude attributes from the API response to improve performance
    #[serde(rename = "exclude", skip_serializing_if = "Option::is_none")]
    pub exclude: Option<Vec<Exclude>>,
    #[serde(rename = "repositories")]
    pub repositories: Vec<String>,
}

impl MigrationsStartForAuthenticatedUserRequest {
    pub fn new(repositories: Vec<String>) -> MigrationsStartForAuthenticatedUserRequest {
        MigrationsStartForAuthenticatedUserRequest {
            lock_repositories: None,
            exclude_metadata: None,
            exclude_git_data: None,
            exclude_attachments: None,
            exclude_releases: None,
            exclude_owner_projects: None,
            org_metadata_only: None,
            exclude: None,
            repositories,
        }
    }
}

/// Exclude attributes from the API response to improve performance
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Exclude {
    #[serde(rename = "repositories")]
    Repositories,
}

impl Default for Exclude {
    fn default() -> Exclude {
        Self::Repositories
    }
}
