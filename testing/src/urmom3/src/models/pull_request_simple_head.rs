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
pub struct PullRequestSimpleHead {
    #[serde(rename = "label")]
    pub label: String,
    #[serde(rename = "ref")]
    pub r#ref: String,
    #[serde(rename = "repo")]
    pub repo: Box<crate::models::Repository>,
    #[serde(rename = "sha")]
    pub sha: String,
    #[serde(rename = "user")]
    pub user: Option<Box<crate::models::NullableSimpleUser>>,
}

impl PullRequestSimpleHead {
    pub fn new(label: String, r#ref: String, repo: crate::models::Repository, sha: String, user: Option<crate::models::NullableSimpleUser>) -> PullRequestSimpleHead {
        PullRequestSimpleHead {
            label,
            r#ref,
            repo: Box::new(repo),
            sha,
            user: if let Some(x) = user {Some(Box::new(x))} else {None},
        }
    }
}

