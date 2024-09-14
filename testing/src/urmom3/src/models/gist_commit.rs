/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// GistCommit : Gist Commit



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct GistCommit {
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "version")]
    pub version: String,
    #[serde(rename = "user")]
    pub user: Option<Box<crate::models::NullableSimpleUser>>,
    #[serde(rename = "change_status")]
    pub change_status: Box<crate::models::GistHistoryChangeStatus>,
    #[serde(rename = "committed_at")]
    pub committed_at: String,
}

impl GistCommit {
    /// Gist Commit
    pub fn new(url: String, version: String, user: Option<crate::models::NullableSimpleUser>, change_status: crate::models::GistHistoryChangeStatus, committed_at: String) -> GistCommit {
        GistCommit {
            url,
            version,
            user: if let Some(x) = user {Some(Box::new(x))} else {None},
            change_status: Box::new(change_status),
            committed_at,
        }
    }
}

