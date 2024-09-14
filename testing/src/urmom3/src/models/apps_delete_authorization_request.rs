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
pub struct AppsDeleteAuthorizationRequest {
    /// The OAuth access token used to authenticate to the GitHub API.
    #[serde(rename = "access_token")]
    pub access_token: String,
}

impl AppsDeleteAuthorizationRequest {
    pub fn new(access_token: String) -> AppsDeleteAuthorizationRequest {
        AppsDeleteAuthorizationRequest {
            access_token,
        }
    }
}

