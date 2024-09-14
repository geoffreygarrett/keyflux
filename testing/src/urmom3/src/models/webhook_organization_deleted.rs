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
pub struct WebhookOrganizationDeleted {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "membership", skip_serializing_if = "Option::is_none")]
    pub membership: Option<Box<crate::models::WebhooksMembership>>,
    #[serde(rename = "organization")]
    pub organization: Box<crate::models::OrganizationSimpleWebhooks>,
    #[serde(rename = "repository", skip_serializing_if = "Option::is_none")]
    pub repository: Option<Box<crate::models::RepositoryWebhooks>>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookOrganizationDeleted {
    pub fn new(action: Action, organization: crate::models::OrganizationSimpleWebhooks, sender: crate::models::SimpleUserWebhooks) -> WebhookOrganizationDeleted {
        WebhookOrganizationDeleted {
            action,
            enterprise: None,
            installation: None,
            membership: None,
            organization: Box::new(organization),
            repository: None,
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "deleted")]
    Deleted,
}

impl Default for Action {
    fn default() -> Action {
        Self::Deleted
    }
}
