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
pub struct RepositoryAdvisoryCreateCreditsInner {
    /// The username of the user credited.
    #[serde(rename = "login")]
    pub login: String,
    #[serde(rename = "type")]
    pub r#type: crate::models::SecurityAdvisoryCreditTypes,
}

impl RepositoryAdvisoryCreateCreditsInner {
    pub fn new(login: String, r#type: crate::models::SecurityAdvisoryCreditTypes) -> RepositoryAdvisoryCreateCreditsInner {
        RepositoryAdvisoryCreateCreditsInner {
            login,
            r#type,
        }
    }
}


