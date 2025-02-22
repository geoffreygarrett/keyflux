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
pub struct WebhookPullRequestReviewRequestRemovedOneOf {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    /// The pull request number.
    #[serde(rename = "number")]
    pub number: i32,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "pull_request")]
    pub pull_request: Box<crate::models::PullRequest6>,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "requested_reviewer")]
    pub requested_reviewer: Option<Box<crate::models::User5>>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookPullRequestReviewRequestRemovedOneOf {
    pub fn new(action: Action, number: i32, pull_request: crate::models::PullRequest6, repository: crate::models::RepositoryWebhooks, requested_reviewer: Option<crate::models::User5>, sender: crate::models::SimpleUserWebhooks) -> WebhookPullRequestReviewRequestRemovedOneOf {
        WebhookPullRequestReviewRequestRemovedOneOf {
            action,
            enterprise: None,
            installation: None,
            number,
            organization: None,
            pull_request: Box::new(pull_request),
            repository: Box::new(repository),
            requested_reviewer: if let Some(x) = requested_reviewer {Some(Box::new(x))} else {None},
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "review_request_removed")]
    ReviewRequestRemoved,
}

impl Default for Action {
    fn default() -> Action {
        Self::ReviewRequestRemoved
    }
}

