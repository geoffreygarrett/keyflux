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
pub struct PagesSourceHash {
    #[serde(rename = "branch")]
    pub branch: String,
    #[serde(rename = "path")]
    pub path: String,
}

impl PagesSourceHash {
    pub fn new(branch: String, path: String) -> PagesSourceHash {
        PagesSourceHash {
            branch,
            path,
        }
    }
}

