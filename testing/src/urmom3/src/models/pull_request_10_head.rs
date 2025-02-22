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
pub struct PullRequest10Head {
    #[serde(rename = "label")]
    pub label: String,
    #[serde(rename = "ref")]
    pub r#ref: String,
    #[serde(rename = "repo")]
    pub repo: Box<crate::models::Repository15>,
    #[serde(rename = "sha")]
    pub sha: String,
    #[serde(rename = "user")]
    pub user: Option<Box<crate::models::User1>>,
}

impl PullRequest10Head {
    pub fn new(label: String, r#ref: String, repo: crate::models::Repository15, sha: String, user: Option<crate::models::User1>) -> PullRequest10Head {
        PullRequest10Head {
            label,
            r#ref,
            repo: Box::new(repo),
            sha,
            user: if let Some(x) = user {Some(Box::new(x))} else {None},
        }
    }
}


