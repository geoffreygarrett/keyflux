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
pub struct WebhookProjectCardCreated {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "project_card")]
    pub project_card: Box<crate::models::WebhooksProjectCard>,
    #[serde(rename = "repository", skip_serializing_if = "Option::is_none")]
    pub repository: Option<Box<crate::models::RepositoryWebhooks>>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookProjectCardCreated {
    pub fn new(action: Action, project_card: crate::models::WebhooksProjectCard, sender: crate::models::SimpleUserWebhooks) -> WebhookProjectCardCreated {
        WebhookProjectCardCreated {
            action,
            enterprise: None,
            installation: None,
            organization: None,
            project_card: Box::new(project_card),
            repository: None,
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "created")]
    Created,
}

impl Default for Action {
    fn default() -> Action {
        Self::Created
    }
}

