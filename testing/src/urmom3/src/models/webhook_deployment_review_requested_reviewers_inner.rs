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
pub struct WebhookDeploymentReviewRequestedReviewersInner {
    #[serde(rename = "reviewer", skip_serializing_if = "Option::is_none")]
    pub reviewer: Option<Box<crate::models::User4>>,
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub r#type: Option<RHashType>,
}

impl WebhookDeploymentReviewRequestedReviewersInner {
    pub fn new() -> WebhookDeploymentReviewRequestedReviewersInner {
        WebhookDeploymentReviewRequestedReviewersInner {
            reviewer: None,
            r#type: None,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RHashType {
    #[serde(rename = "User")]
    User,
    #[serde(rename = "Team")]
    Team,
}

impl Default for RHashType {
    fn default() -> RHashType {
        Self::User
    }
}
