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
pub struct UsersSetPrimaryEmailVisibilityForAuthenticatedUserRequest {
    /// Denotes whether an email is publicly visible.
    #[serde(rename = "visibility")]
    pub visibility: Visibility,
}

impl UsersSetPrimaryEmailVisibilityForAuthenticatedUserRequest {
    pub fn new(visibility: Visibility) -> UsersSetPrimaryEmailVisibilityForAuthenticatedUserRequest {
        UsersSetPrimaryEmailVisibilityForAuthenticatedUserRequest {
            visibility,
        }
    }
}

/// Denotes whether an email is publicly visible.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Visibility {
    #[serde(rename = "public")]
    Public,
    #[serde(rename = "private")]
    Private,
}

impl Default for Visibility {
    fn default() -> Visibility {
        Self::Public
    }
}
