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
pub struct ReposCreateWebhookRequest {
    /// Use `web` to create a webhook. Default: `web`. This parameter only accepts the value `web`.
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "config", skip_serializing_if = "Option::is_none")]
    pub config: Option<Box<crate::models::ReposCreateWebhookRequestConfig>>,
    /// Determines what [events](https://docs.github.com/webhooks/event-payloads) the hook is triggered for.
    #[serde(rename = "events", skip_serializing_if = "Option::is_none")]
    pub events: Option<Vec<String>>,
    /// Determines if notifications are sent when the webhook is triggered. Set to `true` to send notifications.
    #[serde(rename = "active", skip_serializing_if = "Option::is_none")]
    pub active: Option<bool>,
}

impl ReposCreateWebhookRequest {
    pub fn new() -> ReposCreateWebhookRequest {
        ReposCreateWebhookRequest {
            name: None,
            config: None,
            events: None,
            active: None,
        }
    }
}

