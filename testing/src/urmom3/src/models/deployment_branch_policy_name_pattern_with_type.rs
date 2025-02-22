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
pub struct DeploymentBranchPolicyNamePatternWithType {
    /// The name pattern that branches or tags must match in order to deploy to the environment.  Wildcard characters will not match `/`. For example, to match branches that begin with `release/` and contain an additional single slash, use `release/_*_/_*`. For more information about pattern matching syntax, see the [Ruby File.fnmatch documentation](https://ruby-doc.org/core-2.5.1/File.html#method-c-fnmatch).
    #[serde(rename = "name")]
    pub name: String,
    /// Whether this rule targets a branch or tag
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub r#type: Option<RHashType>,
}

impl DeploymentBranchPolicyNamePatternWithType {
    pub fn new(name: String) -> DeploymentBranchPolicyNamePatternWithType {
        DeploymentBranchPolicyNamePatternWithType {
            name,
            r#type: None,
        }
    }
}

/// Whether this rule targets a branch or tag
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RHashType {
    #[serde(rename = "branch")]
    Branch,
    #[serde(rename = "tag")]
    Tag,
}

impl Default for RHashType {
    fn default() -> RHashType {
        Self::Branch
    }
}

