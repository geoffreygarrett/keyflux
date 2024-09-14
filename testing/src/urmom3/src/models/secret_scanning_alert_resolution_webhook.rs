/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// SecretScanningAlertResolutionWebhook : The reason for resolving the alert.

/// The reason for resolving the alert.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum SecretScanningAlertResolutionWebhook {
    #[serde(rename = "false_positive")]
    FalsePositive,
    #[serde(rename = "wont_fix")]
    WontFix,
    #[serde(rename = "revoked")]
    Revoked,
    #[serde(rename = "used_in_tests")]
    UsedInTests,
    #[serde(rename = "pattern_deleted")]
    PatternDeleted,
    #[serde(rename = "pattern_edited")]
    PatternEdited,

}

impl ToString for SecretScanningAlertResolutionWebhook {
    fn to_string(&self) -> String {
        match self {
            Self::FalsePositive => String::from("false_positive"),
            Self::WontFix => String::from("wont_fix"),
            Self::Revoked => String::from("revoked"),
            Self::UsedInTests => String::from("used_in_tests"),
            Self::PatternDeleted => String::from("pattern_deleted"),
            Self::PatternEdited => String::from("pattern_edited"),
        }
    }
}

impl Default for SecretScanningAlertResolutionWebhook {
    fn default() -> SecretScanningAlertResolutionWebhook {
        Self::FalsePositive
    }
}



