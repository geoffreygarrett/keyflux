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
pub struct CodeSecurityCreateConfigurationRequest {
    /// The name of the code security configuration. Must be unique within the organization.
    #[serde(rename = "name")]
    pub name: String,
    /// A description of the code security configuration
    #[serde(rename = "description")]
    pub description: String,
    /// The enablement status of GitHub Advanced Security
    #[serde(rename = "advanced_security", skip_serializing_if = "Option::is_none")]
    pub advanced_security: Option<AdvancedSecurity>,
    /// The enablement status of Dependency Graph
    #[serde(rename = "dependency_graph", skip_serializing_if = "Option::is_none")]
    pub dependency_graph: Option<DependencyGraph>,
    /// The enablement status of Dependabot alerts
    #[serde(rename = "dependabot_alerts", skip_serializing_if = "Option::is_none")]
    pub dependabot_alerts: Option<DependabotAlerts>,
    /// The enablement status of Dependabot security updates
    #[serde(rename = "dependabot_security_updates", skip_serializing_if = "Option::is_none")]
    pub dependabot_security_updates: Option<DependabotSecurityUpdates>,
    /// The enablement status of code scanning default setup
    #[serde(rename = "code_scanning_default_setup", skip_serializing_if = "Option::is_none")]
    pub code_scanning_default_setup: Option<CodeScanningDefaultSetup>,
    /// The enablement status of secret scanning
    #[serde(rename = "secret_scanning", skip_serializing_if = "Option::is_none")]
    pub secret_scanning: Option<SecretScanning>,
    /// The enablement status of secret scanning push protection
    #[serde(rename = "secret_scanning_push_protection", skip_serializing_if = "Option::is_none")]
    pub secret_scanning_push_protection: Option<SecretScanningPushProtection>,
    /// The enablement status of private vulnerability reporting
    #[serde(rename = "private_vulnerability_reporting", skip_serializing_if = "Option::is_none")]
    pub private_vulnerability_reporting: Option<PrivateVulnerabilityReporting>,
}

impl CodeSecurityCreateConfigurationRequest {
    pub fn new(name: String, description: String) -> CodeSecurityCreateConfigurationRequest {
        CodeSecurityCreateConfigurationRequest {
            name,
            description,
            advanced_security: None,
            dependency_graph: None,
            dependabot_alerts: None,
            dependabot_security_updates: None,
            code_scanning_default_setup: None,
            secret_scanning: None,
            secret_scanning_push_protection: None,
            private_vulnerability_reporting: None,
        }
    }
}

/// The enablement status of GitHub Advanced Security
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum AdvancedSecurity {
    #[serde(rename = "enabled")]
    Enabled,
    #[serde(rename = "disabled")]
    Disabled,
}

impl Default for AdvancedSecurity {
    fn default() -> AdvancedSecurity {
        Self::Enabled
    }
}
/// The enablement status of Dependency Graph
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum DependencyGraph {
    #[serde(rename = "enabled")]
    Enabled,
    #[serde(rename = "disabled")]
    Disabled,
    #[serde(rename = "not_set")]
    NotSet,
}

impl Default for DependencyGraph {
    fn default() -> DependencyGraph {
        Self::Enabled
    }
}
/// The enablement status of Dependabot alerts
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum DependabotAlerts {
    #[serde(rename = "enabled")]
    Enabled,
    #[serde(rename = "disabled")]
    Disabled,
    #[serde(rename = "not_set")]
    NotSet,
}

impl Default for DependabotAlerts {
    fn default() -> DependabotAlerts {
        Self::Enabled
    }
}
/// The enablement status of Dependabot security updates
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum DependabotSecurityUpdates {
    #[serde(rename = "enabled")]
    Enabled,
    #[serde(rename = "disabled")]
    Disabled,
    #[serde(rename = "not_set")]
    NotSet,
}

impl Default for DependabotSecurityUpdates {
    fn default() -> DependabotSecurityUpdates {
        Self::Enabled
    }
}
/// The enablement status of code scanning default setup
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum CodeScanningDefaultSetup {
    #[serde(rename = "enabled")]
    Enabled,
    #[serde(rename = "disabled")]
    Disabled,
    #[serde(rename = "not_set")]
    NotSet,
}

impl Default for CodeScanningDefaultSetup {
    fn default() -> CodeScanningDefaultSetup {
        Self::Enabled
    }
}
/// The enablement status of secret scanning
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum SecretScanning {
    #[serde(rename = "enabled")]
    Enabled,
    #[serde(rename = "disabled")]
    Disabled,
    #[serde(rename = "not_set")]
    NotSet,
}

impl Default for SecretScanning {
    fn default() -> SecretScanning {
        Self::Enabled
    }
}
/// The enablement status of secret scanning push protection
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum SecretScanningPushProtection {
    #[serde(rename = "enabled")]
    Enabled,
    #[serde(rename = "disabled")]
    Disabled,
    #[serde(rename = "not_set")]
    NotSet,
}

impl Default for SecretScanningPushProtection {
    fn default() -> SecretScanningPushProtection {
        Self::Enabled
    }
}
/// The enablement status of private vulnerability reporting
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum PrivateVulnerabilityReporting {
    #[serde(rename = "enabled")]
    Enabled,
    #[serde(rename = "disabled")]
    Disabled,
    #[serde(rename = "not_set")]
    NotSet,
}

impl Default for PrivateVulnerabilityReporting {
    fn default() -> PrivateVulnerabilityReporting {
        Self::Enabled
    }
}

