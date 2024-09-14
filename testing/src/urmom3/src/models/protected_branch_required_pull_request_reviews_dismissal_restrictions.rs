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
pub struct ProtectedBranchRequiredPullRequestReviewsDismissalRestrictions {
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "users_url")]
    pub users_url: String,
    #[serde(rename = "teams_url")]
    pub teams_url: String,
    #[serde(rename = "users")]
    pub users: Vec<crate::models::SimpleUser>,
    #[serde(rename = "teams")]
    pub teams: Vec<crate::models::Team>,
    #[serde(rename = "apps", skip_serializing_if = "Option::is_none")]
    pub apps: Option<Vec<crate::models::Integration>>,
}

impl ProtectedBranchRequiredPullRequestReviewsDismissalRestrictions {
    pub fn new(url: String, users_url: String, teams_url: String, users: Vec<crate::models::SimpleUser>, teams: Vec<crate::models::Team>) -> ProtectedBranchRequiredPullRequestReviewsDismissalRestrictions {
        ProtectedBranchRequiredPullRequestReviewsDismissalRestrictions {
            url,
            users_url,
            teams_url,
            users,
            teams,
            apps: None,
        }
    }
}

