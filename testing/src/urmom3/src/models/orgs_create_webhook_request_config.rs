/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// OrgsCreateWebhookRequestConfig : Key/value pairs to provide settings for this webhook.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct OrgsCreateWebhookRequestConfig {
    /// The URL to which the payloads will be delivered.
    #[serde(rename = "url")]
    pub url: String,
    /// The media type used to serialize the payloads. Supported values include `json` and `form`. The default is `form`.
    #[serde(rename = "content_type", skip_serializing_if = "Option::is_none")]
    pub content_type: Option<String>,
    /// If provided, the `secret` will be used as the `key` to generate the HMAC hex digest value for [delivery signature headers](https://docs.github.com/webhooks/event-payloads/#delivery-headers).
    #[serde(rename = "secret", skip_serializing_if = "Option::is_none")]
    pub secret: Option<String>,
    #[serde(rename = "insecure_ssl", skip_serializing_if = "Option::is_none")]
    pub insecure_ssl: Option<Box<crate::models::WebhookConfigInsecureSsl>>,
    #[serde(rename = "username", skip_serializing_if = "Option::is_none")]
    pub username: Option<String>,
    #[serde(rename = "password", skip_serializing_if = "Option::is_none")]
    pub password: Option<String>,
}

impl OrgsCreateWebhookRequestConfig {
    /// Key/value pairs to provide settings for this webhook.
    pub fn new(url: String) -> OrgsCreateWebhookRequestConfig {
        OrgsCreateWebhookRequestConfig {
            url,
            content_type: None,
            secret: None,
            insecure_ssl: None,
            username: None,
            password: None,
        }
    }
}

