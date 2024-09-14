/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// WebhookTeamEditedChanges : The changes to the team if the action was `edited`.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct WebhookTeamEditedChanges {
    #[serde(rename = "description", skip_serializing_if = "Option::is_none")]
    pub description: Option<Box<crate::models::WebhookLabelEditedChangesDescription>>,
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<Box<crate::models::WebhookLabelEditedChangesName>>,
    #[serde(rename = "privacy", skip_serializing_if = "Option::is_none")]
    pub privacy: Option<Box<crate::models::WebhookTeamEditedChangesPrivacy>>,
    #[serde(rename = "notification_setting", skip_serializing_if = "Option::is_none")]
    pub notification_setting: Option<Box<crate::models::WebhookTeamEditedChangesNotificationSetting>>,
    #[serde(rename = "repository", skip_serializing_if = "Option::is_none")]
    pub repository: Option<Box<crate::models::WebhookTeamEditedChangesRepository>>,
}

impl WebhookTeamEditedChanges {
    /// The changes to the team if the action was `edited`.
    pub fn new() -> WebhookTeamEditedChanges {
        WebhookTeamEditedChanges {
            description: None,
            name: None,
            privacy: None,
            notification_setting: None,
            repository: None,
        }
    }
}

