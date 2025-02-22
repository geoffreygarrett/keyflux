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
pub struct WebhookMemberAdded {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "changes", skip_serializing_if = "Option::is_none")]
    pub changes: Option<Box<crate::models::WebhookMemberAddedChanges>>,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "member")]
    pub member: Option<Box<crate::models::WebhooksUser>>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookMemberAdded {
    pub fn new(action: Action, member: Option<crate::models::WebhooksUser>, repository: crate::models::RepositoryWebhooks, sender: crate::models::SimpleUserWebhooks) -> WebhookMemberAdded {
        WebhookMemberAdded {
            action,
            changes: None,
            enterprise: None,
            installation: None,
            member: if let Some(x) = member {Some(Box::new(x))} else {None},
            organization: None,
            repository: Box::new(repository),
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "added")]
    Added,
}

impl Default for Action {
    fn default() -> Action {
        Self::Added
    }
}

