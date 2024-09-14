/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// WebhookCodeScanningAlertFixedAlert : The code scanning alert involved in the event.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct WebhookCodeScanningAlertFixedAlert {
    /// The time that the alert was created in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ.`
    #[serde(rename = "created_at")]
    pub created_at: String,
    /// The time that the alert was dismissed in ISO 8601 format: `YYYY-MM-DDTHH:MM:SSZ`.
    #[serde(rename = "dismissed_at")]
    pub dismissed_at: Option<String>,
    #[serde(rename = "dismissed_by")]
    pub dismissed_by: Option<Box<crate::models::User>>,
    /// The reason for dismissing or closing the alert.
    #[serde(rename = "dismissed_reason")]
    pub dismissed_reason: Option<DismissedReason>,
    /// The GitHub URL of the alert resource.
    #[serde(rename = "html_url")]
    pub html_url: String,
    #[serde(rename = "instances_url", skip_serializing_if = "Option::is_none")]
    pub instances_url: Option<String>,
    #[serde(rename = "most_recent_instance", skip_serializing_if = "Option::is_none")]
    pub most_recent_instance: Option<Box<crate::models::AlertInstance>>,
    /// The code scanning alert number.
    #[serde(rename = "number")]
    pub number: i32,
    #[serde(rename = "rule")]
    pub rule: Box<crate::models::WebhookCodeScanningAlertClosedByUserAlertRule>,
    /// State of a code scanning alert.
    #[serde(rename = "state")]
    pub state: State,
    #[serde(rename = "tool")]
    pub tool: Box<crate::models::WebhookCodeScanningAlertClosedByUserAlertTool>,
    #[serde(rename = "url")]
    pub url: String,
}

impl WebhookCodeScanningAlertFixedAlert {
    /// The code scanning alert involved in the event.
    pub fn new(created_at: String, dismissed_at: Option<String>, dismissed_by: Option<crate::models::User>, dismissed_reason: Option<DismissedReason>, html_url: String, number: i32, rule: crate::models::WebhookCodeScanningAlertClosedByUserAlertRule, state: State, tool: crate::models::WebhookCodeScanningAlertClosedByUserAlertTool, url: String) -> WebhookCodeScanningAlertFixedAlert {
        WebhookCodeScanningAlertFixedAlert {
            created_at,
            dismissed_at,
            dismissed_by: if let Some(x) = dismissed_by {Some(Box::new(x))} else {None},
            dismissed_reason,
            html_url,
            instances_url: None,
            most_recent_instance: None,
            number,
            rule: Box::new(rule),
            state,
            tool: Box::new(tool),
            url,
        }
    }
}

/// The reason for dismissing or closing the alert.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum DismissedReason {
    #[serde(rename = "false positive")]
    FalsePositive,
    #[serde(rename = "won't fix")]
    WonQuoteTFix,
    #[serde(rename = "used in tests")]
    UsedInTests,
    #[serde(rename = "null")]
    Null,
}

impl Default for DismissedReason {
    fn default() -> DismissedReason {
        Self::FalsePositive
    }
}
/// State of a code scanning alert.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum State {
    #[serde(rename = "fixed")]
    Fixed,
}

impl Default for State {
    fn default() -> State {
        Self::Fixed
    }
}
