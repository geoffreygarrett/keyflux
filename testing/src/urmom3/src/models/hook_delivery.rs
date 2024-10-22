/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// HookDelivery : Delivery made by a webhook.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct HookDelivery {
    /// Unique identifier of the delivery.
    #[serde(rename = "id")]
    pub id: i32,
    /// Unique identifier for the event (shared with all deliveries for all webhooks that subscribe to this event).
    #[serde(rename = "guid")]
    pub guid: String,
    /// Time when the delivery was delivered.
    #[serde(rename = "delivered_at")]
    pub delivered_at: String,
    /// Whether the delivery is a redelivery.
    #[serde(rename = "redelivery")]
    pub redelivery: bool,
    /// Time spent delivering.
    #[serde(rename = "duration")]
    pub duration: f32,
    /// Description of the status of the attempted delivery
    #[serde(rename = "status")]
    pub status: String,
    /// Status code received when delivery was made.
    #[serde(rename = "status_code")]
    pub status_code: i32,
    /// The event that triggered the delivery.
    #[serde(rename = "event")]
    pub event: String,
    /// The type of activity for the event that triggered the delivery.
    #[serde(rename = "action")]
    pub action: Option<String>,
    /// The id of the GitHub App installation associated with this event.
    #[serde(rename = "installation_id")]
    pub installation_id: Option<i32>,
    /// The id of the repository associated with this event.
    #[serde(rename = "repository_id")]
    pub repository_id: Option<i32>,
    /// Time when the webhook delivery was throttled.
    #[serde(rename = "throttled_at", skip_serializing_if = "Option::is_none")]
    pub throttled_at: Option<String>,
    /// The URL target of the delivery.
    #[serde(rename = "url", skip_serializing_if = "Option::is_none")]
    pub url: Option<String>,
    #[serde(rename = "request")]
    pub request: Box<crate::models::HookDeliveryRequest>,
    #[serde(rename = "response")]
    pub response: Box<crate::models::HookDeliveryResponse>,
}

impl HookDelivery {
    /// Delivery made by a webhook.
    pub fn new(id: i32, guid: String, delivered_at: String, redelivery: bool, duration: f32, status: String, status_code: i32, event: String, action: Option<String>, installation_id: Option<i32>, repository_id: Option<i32>, request: crate::models::HookDeliveryRequest, response: crate::models::HookDeliveryResponse) -> HookDelivery {
        HookDelivery {
            id,
            guid,
            delivered_at,
            redelivery,
            duration,
            status,
            status_code,
            event,
            action,
            installation_id,
            repository_id,
            throttled_at: None,
            url: None,
            request: Box::new(request),
            response: Box::new(response),
        }
    }
}


