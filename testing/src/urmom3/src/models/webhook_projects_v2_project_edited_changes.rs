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
pub struct WebhookProjectsV2ProjectEditedChanges {
    #[serde(rename = "description", skip_serializing_if = "Option::is_none")]
    pub description: Option<Box<crate::models::WebhookMemberEditedChangesPermission>>,
    #[serde(rename = "public", skip_serializing_if = "Option::is_none")]
    pub public: Option<Box<crate::models::WebhookProjectsV2ProjectEditedChangesPublic>>,
    #[serde(rename = "short_description", skip_serializing_if = "Option::is_none")]
    pub short_description: Option<Box<crate::models::WebhookMemberEditedChangesPermission>>,
    #[serde(rename = "title", skip_serializing_if = "Option::is_none")]
    pub title: Option<Box<crate::models::WebhookProjectsV2ProjectEditedChangesTitle>>,
}

impl WebhookProjectsV2ProjectEditedChanges {
    pub fn new() -> WebhookProjectsV2ProjectEditedChanges {
        WebhookProjectsV2ProjectEditedChanges {
            description: None,
            public: None,
            short_description: None,
            title: None,
        }
    }
}

