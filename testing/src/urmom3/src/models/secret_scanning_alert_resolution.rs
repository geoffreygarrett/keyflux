/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// SecretScanningAlertResolution : **Required when the `state` is `resolved`.** The reason for resolving the alert.

/// **Required when the `state` is `resolved`.** The reason for resolving the alert.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum SecretScanningAlertResolution {
    #[serde(rename = "false_positive")]
    FalsePositive,
    #[serde(rename = "wont_fix")]
    WontFix,
    #[serde(rename = "revoked")]
    Revoked,
    #[serde(rename = "used_in_tests")]
    UsedInTests,

}

impl ToString for SecretScanningAlertResolution {
    fn to_string(&self) -> String {
        match self {
            Self::FalsePositive => String::from("false_positive"),
            Self::WontFix => String::from("wont_fix"),
            Self::Revoked => String::from("revoked"),
            Self::UsedInTests => String::from("used_in_tests"),
        }
    }
}

impl Default for SecretScanningAlertResolution {
    fn default() -> SecretScanningAlertResolution {
        Self::FalsePositive
    }
}



