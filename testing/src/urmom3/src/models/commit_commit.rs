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
pub struct CommitCommit {
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "author")]
    pub author: Option<Box<crate::models::NullableGitUser>>,
    #[serde(rename = "committer")]
    pub committer: Option<Box<crate::models::NullableGitUser>>,
    #[serde(rename = "message")]
    pub message: String,
    #[serde(rename = "comment_count")]
    pub comment_count: i32,
    #[serde(rename = "tree")]
    pub tree: Box<crate::models::CommitCommitTree>,
    #[serde(rename = "verification", skip_serializing_if = "Option::is_none")]
    pub verification: Option<Box<crate::models::Verification>>,
}

impl CommitCommit {
    pub fn new(url: String, author: Option<crate::models::NullableGitUser>, committer: Option<crate::models::NullableGitUser>, message: String, comment_count: i32, tree: crate::models::CommitCommitTree) -> CommitCommit {
        CommitCommit {
            url,
            author: if let Some(x) = author {Some(Box::new(x))} else {None},
            committer: if let Some(x) = committer {Some(Box::new(x))} else {None},
            message,
            comment_count,
            tree: Box::new(tree),
            verification: None,
        }
    }
}


