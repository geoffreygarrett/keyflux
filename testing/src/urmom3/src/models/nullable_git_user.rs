/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// NullableGitUser : Metaproperties for Git author/committer information.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct NullableGitUser {
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "email", skip_serializing_if = "Option::is_none")]
    pub email: Option<String>,
    #[serde(rename = "date", skip_serializing_if = "Option::is_none")]
    pub date: Option<String>,
}

impl NullableGitUser {
    /// Metaproperties for Git author/committer information.
    pub fn new() -> NullableGitUser {
        NullableGitUser {
            name: None,
            email: None,
            date: None,
        }
    }
}

