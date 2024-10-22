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
pub struct SimplePullRequest3Head {
    #[serde(rename = "label")]
    pub label: Option<String>,
    #[serde(rename = "ref")]
    pub r#ref: String,
    #[serde(rename = "repo")]
    pub repo: Option<Box<crate::models::Repository14>>,
    #[serde(rename = "sha")]
    pub sha: String,
    #[serde(rename = "user")]
    pub user: Option<Box<crate::models::User1>>,
}

impl SimplePullRequest3Head {
    pub fn new(label: Option<String>, r#ref: String, repo: Option<crate::models::Repository14>, sha: String, user: Option<crate::models::User1>) -> SimplePullRequest3Head {
        SimplePullRequest3Head {
            label,
            r#ref,
            repo: if let Some(x) = repo {Some(Box::new(x))} else {None},
            sha,
            user: if let Some(x) = user {Some(Box::new(x))} else {None},
        }
    }
}


