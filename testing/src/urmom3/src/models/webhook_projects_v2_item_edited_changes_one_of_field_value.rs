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
pub struct WebhookProjectsV2ItemEditedChangesOneOfFieldValue {
    #[serde(rename = "field_node_id", skip_serializing_if = "Option::is_none")]
    pub field_node_id: Option<String>,
    #[serde(rename = "field_type", skip_serializing_if = "Option::is_none")]
    pub field_type: Option<String>,
    #[serde(rename = "field_name", skip_serializing_if = "Option::is_none")]
    pub field_name: Option<String>,
    #[serde(rename = "project_number", skip_serializing_if = "Option::is_none")]
    pub project_number: Option<i32>,
    #[serde(rename = "from", skip_serializing_if = "Option::is_none")]
    pub from: Option<Box<crate::models::WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom>>,
    #[serde(rename = "to", skip_serializing_if = "Option::is_none")]
    pub to: Option<Box<crate::models::WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom>>,
}

impl WebhookProjectsV2ItemEditedChangesOneOfFieldValue {
    pub fn new() -> WebhookProjectsV2ItemEditedChangesOneOfFieldValue {
        WebhookProjectsV2ItemEditedChangesOneOfFieldValue {
            field_node_id: None,
            field_type: None,
            field_name: None,
            project_number: None,
            from: None,
            to: None,
        }
    }
}

