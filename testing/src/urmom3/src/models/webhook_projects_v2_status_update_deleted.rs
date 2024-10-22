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
pub struct WebhookProjectsV2StatusUpdateDeleted {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization")]
    pub organization: Box<crate::models::OrganizationSimpleWebhooks>,
    #[serde(rename = "projects_v2_status_update")]
    pub projects_v2_status_update: Box<crate::models::ProjectsV2StatusUpdate>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookProjectsV2StatusUpdateDeleted {
    pub fn new(action: Action, organization: crate::models::OrganizationSimpleWebhooks, projects_v2_status_update: crate::models::ProjectsV2StatusUpdate, sender: crate::models::SimpleUserWebhooks) -> WebhookProjectsV2StatusUpdateDeleted {
        WebhookProjectsV2StatusUpdateDeleted {
            action,
            installation: None,
            organization: Box::new(organization),
            projects_v2_status_update: Box::new(projects_v2_status_update),
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

