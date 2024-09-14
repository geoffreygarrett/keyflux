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
pub struct WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom {
    #[serde(rename = "id")]
    pub id: String,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "color", skip_serializing_if = "Option::is_none")]
    pub color: Option<String>,
    #[serde(rename = "description", skip_serializing_if = "Option::is_none")]
    pub description: Option<String>,
    #[serde(rename = "title")]
    pub title: String,
    #[serde(rename = "duration", skip_serializing_if = "Option::is_none")]
    pub duration: Option<f32>,
    #[serde(rename = "start_date", skip_serializing_if = "Option::is_none")]
    pub start_date: Option<String>,
}

impl WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom {
    pub fn new(id: String, name: String, title: String) -> WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom {
        WebhookProjectsV2ItemEditedChangesOneOfFieldValueFrom {
            id,
            name,
            color: None,
            description: None,
            title,
            duration: None,
            start_date: None,
        }
    }
}

