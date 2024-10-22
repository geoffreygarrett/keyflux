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
pub struct WebhooksIssuePullRequest {
    #[serde(rename = "diff_url", skip_serializing_if = "Option::is_none")]
    pub diff_url: Option<String>,
    #[serde(rename = "html_url", skip_serializing_if = "Option::is_none")]
    pub html_url: Option<String>,
    #[serde(rename = "merged_at", skip_serializing_if = "Option::is_none")]
    pub merged_at: Option<String>,
    #[serde(rename = "patch_url", skip_serializing_if = "Option::is_none")]
    pub patch_url: Option<String>,
    #[serde(rename = "url", skip_serializing_if = "Option::is_none")]
    pub url: Option<String>,
}

impl WebhooksIssuePullRequest {
    pub fn new() -> WebhooksIssuePullRequest {
        WebhooksIssuePullRequest {
            diff_url: None,
            html_url: None,
            merged_at: None,
            patch_url: None,
            url: None,
        }
    }
}


