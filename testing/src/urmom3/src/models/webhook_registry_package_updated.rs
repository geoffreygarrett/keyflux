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
pub struct WebhookRegistryPackageUpdated {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "registry_package")]
    pub registry_package: Box<crate::models::WebhookRegistryPackageUpdatedRegistryPackage>,
    #[serde(rename = "repository", skip_serializing_if = "Option::is_none")]
    pub repository: Option<Box<crate::models::RepositoryWebhooks>>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookRegistryPackageUpdated {
    pub fn new(action: Action, registry_package: crate::models::WebhookRegistryPackageUpdatedRegistryPackage, sender: crate::models::SimpleUserWebhooks) -> WebhookRegistryPackageUpdated {
        WebhookRegistryPackageUpdated {
            action,
            enterprise: None,
            installation: None,
            organization: None,
            registry_package: Box::new(registry_package),
            repository: None,
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "updated")]
    Updated,
}

impl Default for Action {
    fn default() -> Action {
        Self::Updated
    }
}

