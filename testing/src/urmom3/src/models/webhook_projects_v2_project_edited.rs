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
pub struct WebhookProjectsV2ProjectEdited {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "changes")]
    pub changes: Box<crate::models::WebhookProjectsV2ProjectEditedChanges>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization")]
    pub organization: Box<crate::models::OrganizationSimpleWebhooks>,
    #[serde(rename = "projects_v2")]
    pub projects_v2: Box<crate::models::ProjectsV2>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookProjectsV2ProjectEdited {
    pub fn new(action: Action, changes: crate::models::WebhookProjectsV2ProjectEditedChanges, organization: crate::models::OrganizationSimpleWebhooks, projects_v2: crate::models::ProjectsV2, sender: crate::models::SimpleUserWebhooks) -> WebhookProjectsV2ProjectEdited {
        WebhookProjectsV2ProjectEdited {
            action,
            changes: Box::new(changes),
            installation: None,
            organization: Box::new(organization),
            projects_v2: Box::new(projects_v2),
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "edited")]
    Edited,
}

impl Default for Action {
    fn default() -> Action {
        Self::Edited
    }
}

