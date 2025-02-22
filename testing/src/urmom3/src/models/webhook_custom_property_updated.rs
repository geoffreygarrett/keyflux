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
pub struct WebhookCustomPropertyUpdated {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "definition")]
    pub definition: Box<crate::models::OrgCustomProperty>,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization")]
    pub organization: Box<crate::models::OrganizationSimpleWebhooks>,
    #[serde(rename = "sender", skip_serializing_if = "Option::is_none")]
    pub sender: Option<Box<crate::models::SimpleUserWebhooks>>,
}

impl WebhookCustomPropertyUpdated {
    pub fn new(action: Action, definition: crate::models::OrgCustomProperty, organization: crate::models::OrganizationSimpleWebhooks) -> WebhookCustomPropertyUpdated {
        WebhookCustomPropertyUpdated {
            action,
            definition: Box::new(definition),
            enterprise: None,
            installation: None,
            organization: Box::new(organization),
            sender: None,
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

