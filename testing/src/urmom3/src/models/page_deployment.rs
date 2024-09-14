/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// PageDeployment : The GitHub Pages deployment status.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct PageDeployment {
    #[serde(rename = "id")]
    pub id: Box<crate::models::PageDeploymentId>,
    /// The URI to monitor GitHub Pages deployment status.
    #[serde(rename = "status_url")]
    pub status_url: String,
    /// The URI to the deployed GitHub Pages.
    #[serde(rename = "page_url")]
    pub page_url: String,
    /// The URI to the deployed GitHub Pages preview.
    #[serde(rename = "preview_url", skip_serializing_if = "Option::is_none")]
    pub preview_url: Option<String>,
}

impl PageDeployment {
    /// The GitHub Pages deployment status.
    pub fn new(id: crate::models::PageDeploymentId, status_url: String, page_url: String) -> PageDeployment {
        PageDeployment {
            id: Box::new(id),
            status_url,
            page_url,
            preview_url: None,
        }
    }
}

