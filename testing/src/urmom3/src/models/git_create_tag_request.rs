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
pub struct GitCreateTagRequest {
    /// The tag's name. This is typically a version (e.g., \"v0.0.1\").
    #[serde(rename = "tag")]
    pub tag: String,
    /// The tag message.
    #[serde(rename = "message")]
    pub message: String,
    /// The SHA of the git object this is tagging.
    #[serde(rename = "object")]
    pub object: String,
    /// The type of the object we're tagging. Normally this is a `commit` but it can also be a `tree` or a `blob`.
    #[serde(rename = "type")]
    pub r#type: RHashType,
    #[serde(rename = "tagger", skip_serializing_if = "Option::is_none")]
    pub tagger: Option<Box<crate::models::GitCreateTagRequestTagger>>,
}

impl GitCreateTagRequest {
    pub fn new(tag: String, message: String, object: String, r#type: RHashType) -> GitCreateTagRequest {
        GitCreateTagRequest {
            tag,
            message,
            object,
            r#type,
            tagger: None,
        }
    }
}

/// The type of the object we're tagging. Normally this is a `commit` but it can also be a `tree` or a `blob`.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RHashType {
    #[serde(rename = "commit")]
    Commit,
    #[serde(rename = "tree")]
    Tree,
    #[serde(rename = "blob")]
    Blob,
}

impl Default for RHashType {
    fn default() -> RHashType {
        Self::Commit
    }
}

