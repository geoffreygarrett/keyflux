/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// WebhookCheckRunCompletedFormEncoded : The check_run.completed webhook encoded with URL encoding



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct WebhookCheckRunCompletedFormEncoded {
    /// A URL-encoded string of the check_run.completed JSON payload. The decoded payload is a JSON object.
    #[serde(rename = "payload")]
    pub payload: String,
}

impl WebhookCheckRunCompletedFormEncoded {
    /// The check_run.completed webhook encoded with URL encoding
    pub fn new(payload: String) -> WebhookCheckRunCompletedFormEncoded {
        WebhookCheckRunCompletedFormEncoded {
            payload,
        }
    }
}

