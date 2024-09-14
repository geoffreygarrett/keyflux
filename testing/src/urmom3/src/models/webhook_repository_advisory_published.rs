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
pub struct WebhookRepositoryAdvisoryPublished {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "repository_advisory")]
    pub repository_advisory: Box<crate::models::RepositoryAdvisory>,
    #[serde(rename = "sender", skip_serializing_if = "Option::is_none")]
    pub sender: Option<Box<crate::models::SimpleUserWebhooks>>,
}

impl WebhookRepositoryAdvisoryPublished {
    pub fn new(action: Action, repository: crate::models::RepositoryWebhooks, repository_advisory: crate::models::RepositoryAdvisory) -> WebhookRepositoryAdvisoryPublished {
        WebhookRepositoryAdvisoryPublished {
            action,
            enterprise: None,
            installation: None,
            organization: None,
            repository: Box::new(repository),
            repository_advisory: Box::new(repository_advisory),
            sender: None,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "published")]
    Published,
}

impl Default for Action {
    fn default() -> Action {
        Self::Published
    }
}
