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
pub struct TeamProjectPermissions {
    #[serde(rename = "read")]
    pub read: bool,
    #[serde(rename = "write")]
    pub write: bool,
    #[serde(rename = "admin")]
    pub admin: bool,
}

impl TeamProjectPermissions {
    pub fn new(read: bool, write: bool, admin: bool) -> TeamProjectPermissions {
        TeamProjectPermissions {
            read,
            write,
            admin,
        }
    }
}

