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
pub struct WebhookSponsorshipEditedChangesPrivacyLevel {
    /// The `edited` event types include the details about the change when someone edits a sponsorship to change the privacy.
    #[serde(rename = "from")]
    pub from: String,
}

impl WebhookSponsorshipEditedChangesPrivacyLevel {
    pub fn new(from: String) -> WebhookSponsorshipEditedChangesPrivacyLevel {
        WebhookSponsorshipEditedChangesPrivacyLevel {
            from,
        }
    }
}

