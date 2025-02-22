/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// PullRequestAutoMerge2 : The status of auto merging a pull request.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct PullRequestAutoMerge2 {
    /// Commit message for the merge commit.
    #[serde(rename = "commit_message")]
    pub commit_message: Option<String>,
    /// Title for the merge commit message.
    #[serde(rename = "commit_title")]
    pub commit_title: String,
    #[serde(rename = "enabled_by")]
    pub enabled_by: Option<Box<crate::models::User>>,
    /// The merge method to use.
    #[serde(rename = "merge_method")]
    pub merge_method: MergeMethod,
}

impl PullRequestAutoMerge2 {
    /// The status of auto merging a pull request.
    pub fn new(commit_message: Option<String>, commit_title: String, enabled_by: Option<crate::models::User>, merge_method: MergeMethod) -> PullRequestAutoMerge2 {
        PullRequestAutoMerge2 {
            commit_message,
            commit_title,
            enabled_by: if let Some(x) = enabled_by {Some(Box::new(x))} else {None},
            merge_method,
        }
    }
}

/// The merge method to use.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum MergeMethod {
    #[serde(rename = "merge")]
    Merge,
    #[serde(rename = "squash")]
    Squash,
    #[serde(rename = "rebase")]
    Rebase,
}

impl Default for MergeMethod {
    fn default() -> MergeMethod {
        Self::Merge
    }
}

