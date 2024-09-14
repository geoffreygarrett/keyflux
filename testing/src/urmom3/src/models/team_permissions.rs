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
pub struct TeamPermissions {
    #[serde(rename = "pull")]
    pub pull: bool,
    #[serde(rename = "triage")]
    pub triage: bool,
    #[serde(rename = "push")]
    pub push: bool,
    #[serde(rename = "maintain")]
    pub maintain: bool,
    #[serde(rename = "admin")]
    pub admin: bool,
}

impl TeamPermissions {
    pub fn new(pull: bool, triage: bool, push: bool, maintain: bool, admin: bool) -> TeamPermissions {
        TeamPermissions {
            pull,
            triage,
            push,
            maintain,
            admin,
        }
    }
}

