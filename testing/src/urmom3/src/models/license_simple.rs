/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// LicenseSimple : License Simple



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct LicenseSimple {
    #[serde(rename = "key")]
    pub key: String,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "url")]
    pub url: Option<String>,
    #[serde(rename = "spdx_id")]
    pub spdx_id: Option<String>,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "html_url", skip_serializing_if = "Option::is_none")]
    pub html_url: Option<String>,
}

impl LicenseSimple {
    /// License Simple
    pub fn new(key: String, name: String, url: Option<String>, spdx_id: Option<String>, node_id: String) -> LicenseSimple {
        LicenseSimple {
            key,
            name,
            url,
            spdx_id,
            node_id,
            html_url: None,
        }
    }
}


