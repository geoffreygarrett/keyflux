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
pub struct WebhookPullRequestDequeued {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "number")]
    pub number: i32,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "pull_request")]
    pub pull_request: Box<crate::models::PullRequest3>,
    #[serde(rename = "reason")]
    pub reason: String,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookPullRequestDequeued {
    pub fn new(action: Action, number: i32, pull_request: crate::models::PullRequest3, reason: String, repository: crate::models::RepositoryWebhooks, sender: crate::models::SimpleUserWebhooks) -> WebhookPullRequestDequeued {
        WebhookPullRequestDequeued {
            action,
            enterprise: None,
            installation: None,
            number,
            organization: None,
            pull_request: Box::new(pull_request),
            reason,
            repository: Box::new(repository),
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "dequeued")]
    Dequeued,
}

impl Default for Action {
    fn default() -> Action {
        Self::Dequeued
    }
}
