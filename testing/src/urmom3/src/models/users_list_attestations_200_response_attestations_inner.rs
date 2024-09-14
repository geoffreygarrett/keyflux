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
pub struct UsersListAttestations200ResponseAttestationsInner {
    #[serde(rename = "bundle", skip_serializing_if = "Option::is_none")]
    pub bundle: Option<Box<crate::models::SigstoreBundle0>>,
    #[serde(rename = "repository_id", skip_serializing_if = "Option::is_none")]
    pub repository_id: Option<i32>,
}

impl UsersListAttestations200ResponseAttestationsInner {
    pub fn new() -> UsersListAttestations200ResponseAttestationsInner {
        UsersListAttestations200ResponseAttestationsInner {
            bundle: None,
            repository_id: None,
        }
    }
}

