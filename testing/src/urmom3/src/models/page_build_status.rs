/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// PageBuildStatus : Page Build Status



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct PageBuildStatus {
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "status")]
    pub status: String,
}

impl PageBuildStatus {
    /// Page Build Status
    pub fn new(url: String, status: String) -> PageBuildStatus {
        PageBuildStatus {
            url,
            status,
        }
    }
}


