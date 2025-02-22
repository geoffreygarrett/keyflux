/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// WebhookSecurityAdvisoryWithdrawnSecurityAdvisory : The details of the security advisory, including summary, description, and severity.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct WebhookSecurityAdvisoryWithdrawnSecurityAdvisory {
    #[serde(rename = "cvss")]
    pub cvss: Box<crate::models::WebhooksSecurityAdvisoryCvss>,
    #[serde(rename = "cwes")]
    pub cwes: Vec<crate::models::WebhooksSecurityAdvisoryCwesInner>,
    #[serde(rename = "description")]
    pub description: String,
    #[serde(rename = "ghsa_id")]
    pub ghsa_id: String,
    #[serde(rename = "identifiers")]
    pub identifiers: Vec<crate::models::WebhooksSecurityAdvisoryIdentifiersInner>,
    #[serde(rename = "published_at")]
    pub published_at: String,
    #[serde(rename = "references")]
    pub references: Vec<crate::models::WebhooksSecurityAdvisoryReferencesInner>,
    #[serde(rename = "severity")]
    pub severity: String,
    #[serde(rename = "summary")]
    pub summary: String,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    #[serde(rename = "vulnerabilities")]
    pub vulnerabilities: Vec<crate::models::WebhooksSecurityAdvisoryVulnerabilitiesInner>,
    #[serde(rename = "withdrawn_at")]
    pub withdrawn_at: String,
}

impl WebhookSecurityAdvisoryWithdrawnSecurityAdvisory {
    /// The details of the security advisory, including summary, description, and severity.
    pub fn new(cvss: crate::models::WebhooksSecurityAdvisoryCvss, cwes: Vec<crate::models::WebhooksSecurityAdvisoryCwesInner>, description: String, ghsa_id: String, identifiers: Vec<crate::models::WebhooksSecurityAdvisoryIdentifiersInner>, published_at: String, references: Vec<crate::models::WebhooksSecurityAdvisoryReferencesInner>, severity: String, summary: String, updated_at: String, vulnerabilities: Vec<crate::models::WebhooksSecurityAdvisoryVulnerabilitiesInner>, withdrawn_at: String) -> WebhookSecurityAdvisoryWithdrawnSecurityAdvisory {
        WebhookSecurityAdvisoryWithdrawnSecurityAdvisory {
            cvss: Box::new(cvss),
            cwes,
            description,
            ghsa_id,
            identifiers,
            published_at,
            references,
            severity,
            summary,
            updated_at,
            vulnerabilities,
            withdrawn_at,
        }
    }
}


