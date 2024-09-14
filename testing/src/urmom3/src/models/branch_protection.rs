/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// BranchProtection : Branch Protection



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct BranchProtection {
    #[serde(rename = "url", skip_serializing_if = "Option::is_none")]
    pub url: Option<String>,
    #[serde(rename = "enabled", skip_serializing_if = "Option::is_none")]
    pub enabled: Option<bool>,
    #[serde(rename = "required_status_checks", skip_serializing_if = "Option::is_none")]
    pub required_status_checks: Option<Box<crate::models::ProtectedBranchRequiredStatusCheck>>,
    #[serde(rename = "enforce_admins", skip_serializing_if = "Option::is_none")]
    pub enforce_admins: Option<Box<crate::models::ProtectedBranchAdminEnforced>>,
    #[serde(rename = "required_pull_request_reviews", skip_serializing_if = "Option::is_none")]
    pub required_pull_request_reviews: Option<Box<crate::models::ProtectedBranchPullRequestReview>>,
    #[serde(rename = "restrictions", skip_serializing_if = "Option::is_none")]
    pub restrictions: Option<Box<crate::models::BranchRestrictionPolicy>>,
    #[serde(rename = "required_linear_history", skip_serializing_if = "Option::is_none")]
    pub required_linear_history: Option<Box<crate::models::BranchProtectionRequiredLinearHistory>>,
    #[serde(rename = "allow_force_pushes", skip_serializing_if = "Option::is_none")]
    pub allow_force_pushes: Option<Box<crate::models::BranchProtectionRequiredLinearHistory>>,
    #[serde(rename = "allow_deletions", skip_serializing_if = "Option::is_none")]
    pub allow_deletions: Option<Box<crate::models::BranchProtectionRequiredLinearHistory>>,
    #[serde(rename = "block_creations", skip_serializing_if = "Option::is_none")]
    pub block_creations: Option<Box<crate::models::BranchProtectionRequiredLinearHistory>>,
    #[serde(rename = "required_conversation_resolution", skip_serializing_if = "Option::is_none")]
    pub required_conversation_resolution: Option<Box<crate::models::BranchProtectionRequiredLinearHistory>>,
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "protection_url", skip_serializing_if = "Option::is_none")]
    pub protection_url: Option<String>,
    #[serde(rename = "required_signatures", skip_serializing_if = "Option::is_none")]
    pub required_signatures: Option<Box<crate::models::BranchProtectionRequiredSignatures>>,
    #[serde(rename = "lock_branch", skip_serializing_if = "Option::is_none")]
    pub lock_branch: Option<Box<crate::models::BranchProtectionLockBranch>>,
    #[serde(rename = "allow_fork_syncing", skip_serializing_if = "Option::is_none")]
    pub allow_fork_syncing: Option<Box<crate::models::BranchProtectionAllowForkSyncing>>,
}

impl BranchProtection {
    /// Branch Protection
    pub fn new() -> BranchProtection {
        BranchProtection {
            url: None,
            enabled: None,
            required_status_checks: None,
            enforce_admins: None,
            required_pull_request_reviews: None,
            restrictions: None,
            required_linear_history: None,
            allow_force_pushes: None,
            allow_deletions: None,
            block_creations: None,
            required_conversation_resolution: None,
            name: None,
            protection_url: None,
            required_signatures: None,
            lock_branch: None,
            allow_fork_syncing: None,
        }
    }
}

