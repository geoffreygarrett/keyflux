/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// GitTree : The hierarchy between files in a Git repository.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct GitTree {
    #[serde(rename = "sha")]
    pub sha: String,
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "truncated")]
    pub truncated: bool,
    /// Objects specifying a tree structure
    #[serde(rename = "tree")]
    pub tree: Vec<crate::models::GitTreeTreeInner>,
}

impl GitTree {
    /// The hierarchy between files in a Git repository.
    pub fn new(sha: String, url: String, truncated: bool, tree: Vec<crate::models::GitTreeTreeInner>) -> GitTree {
        GitTree {
            sha,
            url,
            truncated,
            tree,
        }
    }
}

