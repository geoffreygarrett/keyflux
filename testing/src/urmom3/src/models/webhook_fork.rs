/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// WebhookFork : A user forks a repository.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct WebhookFork {
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "forkee")]
    pub forkee: Box<crate::models::WebhookForkForkee>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookFork {
    /// A user forks a repository.
    pub fn new(forkee: crate::models::WebhookForkForkee, repository: crate::models::RepositoryWebhooks, sender: crate::models::SimpleUserWebhooks) -> WebhookFork {
        WebhookFork {
            enterprise: None,
            forkee: Box::new(forkee),
            installation: None,
            organization: None,
            repository: Box::new(repository),
            sender: Box::new(sender),
        }
    }
}


