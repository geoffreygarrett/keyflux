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
pub struct WebhooksWorkflowJobRun {
    #[serde(rename = "conclusion")]
    pub conclusion: Option<serde_json::Value>,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "environment")]
    pub environment: String,
    #[serde(rename = "html_url")]
    pub html_url: String,
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "name")]
    pub name: Option<serde_json::Value>,
    #[serde(rename = "status")]
    pub status: String,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
}

impl WebhooksWorkflowJobRun {
    pub fn new(conclusion: Option<serde_json::Value>, created_at: String, environment: String, html_url: String, id: i32, name: Option<serde_json::Value>, status: String, updated_at: String) -> WebhooksWorkflowJobRun {
        WebhooksWorkflowJobRun {
            conclusion,
            created_at,
            environment,
            html_url,
            id,
            name,
            status,
            updated_at,
        }
    }
}

