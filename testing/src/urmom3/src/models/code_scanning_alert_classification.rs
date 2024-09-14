/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// CodeScanningAlertClassification : A classification of the file. For example to identify it as generated.

/// A classification of the file. For example to identify it as generated.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum CodeScanningAlertClassification {
    #[serde(rename = "source")]
    Source,
    #[serde(rename = "generated")]
    Generated,
    #[serde(rename = "test")]
    Test,
    #[serde(rename = "library")]
    Library,

}

impl ToString for CodeScanningAlertClassification {
    fn to_string(&self) -> String {
        match self {
            Self::Source => String::from("source"),
            Self::Generated => String::from("generated"),
            Self::Test => String::from("test"),
            Self::Library => String::from("library"),
        }
    }
}

impl Default for CodeScanningAlertClassification {
    fn default() -> CodeScanningAlertClassification {
        Self::Source
    }
}



