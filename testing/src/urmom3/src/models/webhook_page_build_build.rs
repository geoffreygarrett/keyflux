/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// WebhookPageBuildBuild : The [List GitHub Pages builds](https://docs.github.com/rest/pages/pages#list-github-pages-builds) itself.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct WebhookPageBuildBuild {
    #[serde(rename = "commit")]
    pub commit: Option<String>,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "duration")]
    pub duration: i32,
    #[serde(rename = "error")]
    pub error: Box<crate::models::PageBuildError>,
    #[serde(rename = "pusher")]
    pub pusher: Option<Box<crate::models::User>>,
    #[serde(rename = "status")]
    pub status: String,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    #[serde(rename = "url")]
    pub url: String,
}

impl WebhookPageBuildBuild {
    /// The [List GitHub Pages builds](https://docs.github.com/rest/pages/pages#list-github-pages-builds) itself.
    pub fn new(commit: Option<String>, created_at: String, duration: i32, error: crate::models::PageBuildError, pusher: Option<crate::models::User>, status: String, updated_at: String, url: String) -> WebhookPageBuildBuild {
        WebhookPageBuildBuild {
            commit,
            created_at,
            duration,
            error: Box::new(error),
            pusher: if let Some(x) = pusher {Some(Box::new(x))} else {None},
            status,
            updated_at,
            url,
        }
    }
}


