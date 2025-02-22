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
pub struct ImportProjectChoicesInner {
    #[serde(rename = "vcs", skip_serializing_if = "Option::is_none")]
    pub vcs: Option<String>,
    #[serde(rename = "tfvc_project", skip_serializing_if = "Option::is_none")]
    pub tfvc_project: Option<String>,
    #[serde(rename = "human_name", skip_serializing_if = "Option::is_none")]
    pub human_name: Option<String>,
}

impl ImportProjectChoicesInner {
    pub fn new() -> ImportProjectChoicesInner {
        ImportProjectChoicesInner {
            vcs: None,
            tfvc_project: None,
            human_name: None,
        }
    }
}


