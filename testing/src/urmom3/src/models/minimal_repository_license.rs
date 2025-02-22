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
pub struct MinimalRepositoryLicense {
    #[serde(rename = "key", skip_serializing_if = "Option::is_none")]
    pub key: Option<String>,
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "spdx_id", skip_serializing_if = "Option::is_none")]
    pub spdx_id: Option<String>,
    #[serde(rename = "url", skip_serializing_if = "Option::is_none")]
    pub url: Option<String>,
    #[serde(rename = "node_id", skip_serializing_if = "Option::is_none")]
    pub node_id: Option<String>,
}

impl MinimalRepositoryLicense {
    pub fn new() -> MinimalRepositoryLicense {
        MinimalRepositoryLicense {
            key: None,
            name: None,
            spdx_id: None,
            url: None,
            node_id: None,
        }
    }
}


