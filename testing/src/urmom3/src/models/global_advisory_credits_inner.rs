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
pub struct GlobalAdvisoryCreditsInner {
    #[serde(rename = "user")]
    pub user: Box<crate::models::SimpleUser>,
    #[serde(rename = "type")]
    pub r#type: crate::models::SecurityAdvisoryCreditTypes,
}

impl GlobalAdvisoryCreditsInner {
    pub fn new(user: crate::models::SimpleUser, r#type: crate::models::SecurityAdvisoryCreditTypes) -> GlobalAdvisoryCreditsInner {
        GlobalAdvisoryCreditsInner {
            user: Box::new(user),
            r#type,
        }
    }
}


