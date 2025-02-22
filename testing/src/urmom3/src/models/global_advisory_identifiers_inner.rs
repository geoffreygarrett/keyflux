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
pub struct GlobalAdvisoryIdentifiersInner {
    /// The type of identifier.
    #[serde(rename = "type")]
    pub r#type: RHashType,
    /// The identifier value.
    #[serde(rename = "value")]
    pub value: String,
}

impl GlobalAdvisoryIdentifiersInner {
    pub fn new(r#type: RHashType, value: String) -> GlobalAdvisoryIdentifiersInner {
        GlobalAdvisoryIdentifiersInner {
            r#type,
            value,
        }
    }
}

/// The type of identifier.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RHashType {
    #[serde(rename = "CVE")]
    Cve,
    #[serde(rename = "GHSA")]
    Ghsa,
}

impl Default for RHashType {
    fn default() -> RHashType {
        Self::Cve
    }
}

