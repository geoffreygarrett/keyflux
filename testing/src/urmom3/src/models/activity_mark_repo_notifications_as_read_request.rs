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
pub struct ActivityMarkRepoNotificationsAsReadRequest {
    /// Describes the last point that notifications were checked. Anything updated since this time will not be marked as read. If you omit this parameter, all notifications are marked as read. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: `YYYY-MM-DDTHH:MM:SSZ`. Default: The current timestamp.
    #[serde(rename = "last_read_at", skip_serializing_if = "Option::is_none")]
    pub last_read_at: Option<String>,
}

impl ActivityMarkRepoNotificationsAsReadRequest {
    pub fn new() -> ActivityMarkRepoNotificationsAsReadRequest {
        ActivityMarkRepoNotificationsAsReadRequest {
            last_read_at: None,
        }
    }
}

