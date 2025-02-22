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
pub struct ContentDirectoryInner {
    #[serde(rename = "type")]
    pub r#type: RHashType,
    #[serde(rename = "size")]
    pub size: i32,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "path")]
    pub path: String,
    #[serde(rename = "content", skip_serializing_if = "Option::is_none")]
    pub content: Option<String>,
    #[serde(rename = "sha")]
    pub sha: String,
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "git_url")]
    pub git_url: Option<String>,
    #[serde(rename = "html_url")]
    pub html_url: Option<String>,
    #[serde(rename = "download_url")]
    pub download_url: Option<String>,
    #[serde(rename = "_links")]
    pub _links: Box<crate::models::ContentTreeEntriesInnerLinks>,
}

impl ContentDirectoryInner {
    pub fn new(r#type: RHashType, size: i32, name: String, path: String, sha: String, url: String, git_url: Option<String>, html_url: Option<String>, download_url: Option<String>, _links: crate::models::ContentTreeEntriesInnerLinks) -> ContentDirectoryInner {
        ContentDirectoryInner {
            r#type,
            size,
            name,
            path,
            content: None,
            sha,
            url,
            git_url,
            html_url,
            download_url,
            _links: Box::new(_links),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RHashType {
    #[serde(rename = "dir")]
    Dir,
    #[serde(rename = "file")]
    File,
    #[serde(rename = "submodule")]
    Submodule,
    #[serde(rename = "symlink")]
    Symlink,
}

impl Default for RHashType {
    fn default() -> RHashType {
        Self::Dir
    }
}

