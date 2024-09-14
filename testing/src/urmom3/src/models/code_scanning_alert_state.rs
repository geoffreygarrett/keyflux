/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// CodeScanningAlertState : State of a code scanning alert.

/// State of a code scanning alert.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum CodeScanningAlertState {
    #[serde(rename = "open")]
    Open,
    #[serde(rename = "dismissed")]
    Dismissed,
    #[serde(rename = "fixed")]
    Fixed,

}

impl ToString for CodeScanningAlertState {
    fn to_string(&self) -> String {
        match self {
            Self::Open => String::from("open"),
            Self::Dismissed => String::from("dismissed"),
            Self::Fixed => String::from("fixed"),
        }
    }
}

impl Default for CodeScanningAlertState {
    fn default() -> CodeScanningAlertState {
        Self::Open
    }
}



