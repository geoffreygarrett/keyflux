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
pub struct WebhookIssuesAssigned {
    /// The action that was performed.
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "assignee", skip_serializing_if = "Option::is_none")]
    pub assignee: Option<Box<crate::models::WebhooksUser>>,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "issue")]
    pub issue: Box<crate::models::WebhooksIssue>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookIssuesAssigned {
    pub fn new(action: Action, issue: crate::models::WebhooksIssue, repository: crate::models::RepositoryWebhooks, sender: crate::models::SimpleUserWebhooks) -> WebhookIssuesAssigned {
        WebhookIssuesAssigned {
            action,
            assignee: None,
            enterprise: None,
            installation: None,
            issue: Box::new(issue),
            organization: None,
            repository: Box::new(repository),
            sender: Box::new(sender),
        }
    }
}

/// The action that was performed.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "assigned")]
    Assigned,
}

impl Default for Action {
    fn default() -> Action {
        Self::Assigned
    }
}
