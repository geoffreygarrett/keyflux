/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// RepositoryRuleCommitAuthorEmailPattern : Parameters to be used for the commit_author_email_pattern rule



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct RepositoryRuleCommitAuthorEmailPattern {
    #[serde(rename = "type")]
    pub r#type: RHashType,
    #[serde(rename = "parameters", skip_serializing_if = "Option::is_none")]
    pub parameters: Option<Box<crate::models::RepositoryRuleCommitMessagePatternParameters>>,
}

impl RepositoryRuleCommitAuthorEmailPattern {
    /// Parameters to be used for the commit_author_email_pattern rule
    pub fn new(r#type: RHashType) -> RepositoryRuleCommitAuthorEmailPattern {
        RepositoryRuleCommitAuthorEmailPattern {
            r#type,
            parameters: None,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RHashType {
    #[serde(rename = "commit_author_email_pattern")]
    CommitAuthorEmailPattern,
}

impl Default for RHashType {
    fn default() -> RHashType {
        Self::CommitAuthorEmailPattern
    }
}
