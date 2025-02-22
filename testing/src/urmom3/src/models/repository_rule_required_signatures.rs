/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// RepositoryRuleRequiredSignatures : Commits pushed to matching refs must have verified signatures.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct RepositoryRuleRequiredSignatures {
    #[serde(rename = "type")]
    pub r#type: RHashType,
}

impl RepositoryRuleRequiredSignatures {
    /// Commits pushed to matching refs must have verified signatures.
    pub fn new(r#type: RHashType) -> RepositoryRuleRequiredSignatures {
        RepositoryRuleRequiredSignatures {
            r#type,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RHashType {
    #[serde(rename = "required_signatures")]
    RequiredSignatures,
}

impl Default for RHashType {
    fn default() -> RHashType {
        Self::RequiredSignatures
    }
}

