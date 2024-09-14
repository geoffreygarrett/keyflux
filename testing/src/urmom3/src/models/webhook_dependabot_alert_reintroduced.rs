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
pub struct WebhookDependabotAlertReintroduced {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "alert")]
    pub alert: Box<crate::models::DependabotAlert>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookDependabotAlertReintroduced {
    pub fn new(action: Action, alert: crate::models::DependabotAlert, repository: crate::models::RepositoryWebhooks, sender: crate::models::SimpleUserWebhooks) -> WebhookDependabotAlertReintroduced {
        WebhookDependabotAlertReintroduced {
            action,
            alert: Box::new(alert),
            installation: None,
            organization: None,
            enterprise: None,
            repository: Box::new(repository),
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "reintroduced")]
    Reintroduced,
}

impl Default for Action {
    fn default() -> Action {
        Self::Reintroduced
    }
}
