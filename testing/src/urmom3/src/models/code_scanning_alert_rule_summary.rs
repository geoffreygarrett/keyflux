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
pub struct CodeScanningAlertRuleSummary {
    /// A unique identifier for the rule used to detect the alert.
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    /// The name of the rule used to detect the alert.
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    /// A set of tags applicable for the rule.
    #[serde(rename = "tags", skip_serializing_if = "Option::is_none")]
    pub tags: Option<Vec<String>>,
    /// The severity of the alert.
    #[serde(rename = "severity", skip_serializing_if = "Option::is_none")]
    pub severity: Option<Severity>,
    /// The security severity of the alert.
    #[serde(rename = "security_severity_level", skip_serializing_if = "Option::is_none")]
    pub security_severity_level: Option<SecuritySeverityLevel>,
    /// A short description of the rule used to detect the alert.
    #[serde(rename = "description", skip_serializing_if = "Option::is_none")]
    pub description: Option<String>,
}

impl CodeScanningAlertRuleSummary {
    pub fn new() -> CodeScanningAlertRuleSummary {
        CodeScanningAlertRuleSummary {
            id: None,
            name: None,
            tags: None,
            severity: None,
            security_severity_level: None,
            description: None,
        }
    }
}

/// The severity of the alert.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Severity {
    #[serde(rename = "none")]
    None,
    #[serde(rename = "note")]
    Note,
    #[serde(rename = "warning")]
    Warning,
    #[serde(rename = "error")]
    Error,
}

impl Default for Severity {
    fn default() -> Severity {
        Self::None
    }
}
/// The security severity of the alert.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum SecuritySeverityLevel {
    #[serde(rename = "low")]
    Low,
    #[serde(rename = "medium")]
    Medium,
    #[serde(rename = "high")]
    High,
    #[serde(rename = "critical")]
    Critical,
}

impl Default for SecuritySeverityLevel {
    fn default() -> SecuritySeverityLevel {
        Self::Low
    }
}

