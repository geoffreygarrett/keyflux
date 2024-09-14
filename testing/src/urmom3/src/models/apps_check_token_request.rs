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
pub struct AppsCheckTokenRequest {
    /// The access_token of the OAuth or GitHub application.
    #[serde(rename = "access_token")]
    pub access_token: String,
}

impl AppsCheckTokenRequest {
    pub fn new(access_token: String) -> AppsCheckTokenRequest {
        AppsCheckTokenRequest {
            access_token,
        }
    }
}

