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
pub struct WebhookProjectsV2ItemRestored {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "changes")]
    pub changes: Box<crate::models::WebhooksProjectChanges>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization")]
    pub organization: Box<crate::models::OrganizationSimpleWebhooks>,
    #[serde(rename = "projects_v2_item")]
    pub projects_v2_item: Box<crate::models::ProjectsV2Item>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookProjectsV2ItemRestored {
    pub fn new(action: Action, changes: crate::models::WebhooksProjectChanges, organization: crate::models::OrganizationSimpleWebhooks, projects_v2_item: crate::models::ProjectsV2Item, sender: crate::models::SimpleUserWebhooks) -> WebhookProjectsV2ItemRestored {
        WebhookProjectsV2ItemRestored {
            action,
            changes: Box::new(changes),
            installation: None,
            organization: Box::new(organization),
            projects_v2_item: Box::new(projects_v2_item),
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "restored")]
    Restored,
}

impl Default for Action {
    fn default() -> Action {
        Self::Restored
    }
}
