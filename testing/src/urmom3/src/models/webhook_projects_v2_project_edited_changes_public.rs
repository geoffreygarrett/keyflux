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
pub struct WebhookProjectsV2ProjectEditedChangesPublic {
    #[serde(rename = "from", skip_serializing_if = "Option::is_none")]
    pub from: Option<bool>,
    #[serde(rename = "to", skip_serializing_if = "Option::is_none")]
    pub to: Option<bool>,
}

impl WebhookProjectsV2ProjectEditedChangesPublic {
    pub fn new() -> WebhookProjectsV2ProjectEditedChangesPublic {
        WebhookProjectsV2ProjectEditedChangesPublic {
            from: None,
            to: None,
        }
    }
}

