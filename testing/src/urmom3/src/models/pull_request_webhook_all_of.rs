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
pub struct PullRequestWebhookAllOf {
    /// Whether to allow auto-merge for pull requests.
    #[serde(rename = "allow_auto_merge", skip_serializing_if = "Option::is_none")]
    pub allow_auto_merge: Option<bool>,
    /// Whether to allow updating the pull request's branch.
    #[serde(rename = "allow_update_branch", skip_serializing_if = "Option::is_none")]
    pub allow_update_branch: Option<bool>,
    /// Whether to delete head branches when pull requests are merged.
    #[serde(rename = "delete_branch_on_merge", skip_serializing_if = "Option::is_none")]
    pub delete_branch_on_merge: Option<bool>,
    /// The default value for a merge commit message. - `PR_TITLE` - default to the pull request's title. - `PR_BODY` - default to the pull request's body. - `BLANK` - default to a blank commit message.
    #[serde(rename = "merge_commit_message", skip_serializing_if = "Option::is_none")]
    pub merge_commit_message: Option<MergeCommitMessage>,
    /// The default value for a merge commit title. - `PR_TITLE` - default to the pull request's title. - `MERGE_MESSAGE` - default to the classic title for a merge message (e.g., \"Merge pull request #123 from branch-name\").
    #[serde(rename = "merge_commit_title", skip_serializing_if = "Option::is_none")]
    pub merge_commit_title: Option<MergeCommitTitle>,
    /// The default value for a squash merge commit message: - `PR_BODY` - default to the pull request's body. - `COMMIT_MESSAGES` - default to the branch's commit messages. - `BLANK` - default to a blank commit message.
    #[serde(rename = "squash_merge_commit_message", skip_serializing_if = "Option::is_none")]
    pub squash_merge_commit_message: Option<SquashMergeCommitMessage>,
    /// The default value for a squash merge commit title: - `PR_TITLE` - default to the pull request's title. - `COMMIT_OR_PR_TITLE` - default to the commit's title (if only one commit) or the pull request's title (when more than one commit).
    #[serde(rename = "squash_merge_commit_title", skip_serializing_if = "Option::is_none")]
    pub squash_merge_commit_title: Option<SquashMergeCommitTitle>,
    /// Whether a squash merge commit can use the pull request title as default. **This property has been deprecated. Please use `squash_merge_commit_title` instead.**
    #[serde(rename = "use_squash_pr_title_as_default", skip_serializing_if = "Option::is_none")]
    pub use_squash_pr_title_as_default: Option<bool>,
}

impl PullRequestWebhookAllOf {
    pub fn new() -> PullRequestWebhookAllOf {
        PullRequestWebhookAllOf {
            allow_auto_merge: None,
            allow_update_branch: None,
            delete_branch_on_merge: None,
            merge_commit_message: None,
            merge_commit_title: None,
            squash_merge_commit_message: None,
            squash_merge_commit_title: None,
            use_squash_pr_title_as_default: None,
        }
    }
}

/// The default value for a merge commit message. - `PR_TITLE` - default to the pull request's title. - `PR_BODY` - default to the pull request's body. - `BLANK` - default to a blank commit message.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum MergeCommitMessage {
    #[serde(rename = "PR_BODY")]
    PrBody,
    #[serde(rename = "PR_TITLE")]
    PrTitle,
    #[serde(rename = "BLANK")]
    Blank,
}

impl Default for MergeCommitMessage {
    fn default() -> MergeCommitMessage {
        Self::PrBody
    }
}
/// The default value for a merge commit title. - `PR_TITLE` - default to the pull request's title. - `MERGE_MESSAGE` - default to the classic title for a merge message (e.g., \"Merge pull request #123 from branch-name\").
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum MergeCommitTitle {
    #[serde(rename = "PR_TITLE")]
    PrTitle,
    #[serde(rename = "MERGE_MESSAGE")]
    MergeMessage,
}

impl Default for MergeCommitTitle {
    fn default() -> MergeCommitTitle {
        Self::PrTitle
    }
}
/// The default value for a squash merge commit message: - `PR_BODY` - default to the pull request's body. - `COMMIT_MESSAGES` - default to the branch's commit messages. - `BLANK` - default to a blank commit message.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum SquashMergeCommitMessage {
    #[serde(rename = "PR_BODY")]
    PrBody,
    #[serde(rename = "COMMIT_MESSAGES")]
    CommitMessages,
    #[serde(rename = "BLANK")]
    Blank,
}

impl Default for SquashMergeCommitMessage {
    fn default() -> SquashMergeCommitMessage {
        Self::PrBody
    }
}
/// The default value for a squash merge commit title: - `PR_TITLE` - default to the pull request's title. - `COMMIT_OR_PR_TITLE` - default to the commit's title (if only one commit) or the pull request's title (when more than one commit).
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum SquashMergeCommitTitle {
    #[serde(rename = "PR_TITLE")]
    PrTitle,
    #[serde(rename = "COMMIT_OR_PR_TITLE")]
    CommitOrPrTitle,
}

impl Default for SquashMergeCommitTitle {
    fn default() -> SquashMergeCommitTitle {
        Self::PrTitle
    }
}

