/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// DeploymentBranchPolicy : Details of a deployment branch or tag policy.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct DeploymentBranchPolicy {
    /// The unique identifier of the branch or tag policy.
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<i32>,
    #[serde(rename = "node_id", skip_serializing_if = "Option::is_none")]
    pub node_id: Option<String>,
    /// The name pattern that branches or tags must match in order to deploy to the environment.
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    /// Whether this rule targets a branch or tag.
    #[serde(rename = "type", skip_serializing_if = "Option::is_none")]
    pub r#type: Option<RHashType>,
}

impl DeploymentBranchPolicy {
    /// Details of a deployment branch or tag policy.
    pub fn new() -> DeploymentBranchPolicy {
        DeploymentBranchPolicy {
            id: None,
            node_id: None,
            name: None,
            r#type: None,
        }
    }
}

/// Whether this rule targets a branch or tag.
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

