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
pub struct DependabotUpdateAlertRequest {
    /// The state of the Dependabot alert. A `dismissed_reason` must be provided when setting the state to `dismissed`.
    #[serde(rename = "state")]
    pub state: State,
    /// **Required when `state` is `dismissed`.** A reason for dismissing the alert.
    #[serde(rename = "dismissed_reason", skip_serializing_if = "Option::is_none")]
    pub dismissed_reason: Option<DismissedReason>,
    /// An optional comment associated with dismissing the alert.
    #[serde(rename = "dismissed_comment", skip_serializing_if = "Option::is_none")]
    pub dismissed_comment: Option<String>,
}

impl DependabotUpdateAlertRequest {
    pub fn new(state: State) -> DependabotUpdateAlertRequest {
        DependabotUpdateAlertRequest {
            state,
            dismissed_reason: None,
            dismissed_comment: None,
        }
    }
}

/// The state of the Dependabot alert. A `dismissed_reason` must be provided when setting the state to `dismissed`.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum State {
    #[serde(rename = "dismissed")]
    Dismissed,
    #[serde(rename = "open")]
    Open,
}

impl Default for State {
    fn default() -> State {
        Self::Dismissed
    }
}
/// **Required when `state` is `dismissed`.** A reason for dismissing the alert.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum DismissedReason {
    #[serde(rename = "fix_started")]
    FixStarted,
    #[serde(rename = "inaccurate")]
    Inaccurate,
    #[serde(rename = "no_bandwidth")]
    NoBandwidth,
    #[serde(rename = "not_used")]
    NotUsed,
    #[serde(rename = "tolerable_risk")]
    TolerableRisk,
}

impl Default for DismissedReason {
    fn default() -> DismissedReason {
        Self::FixStarted
    }
}
