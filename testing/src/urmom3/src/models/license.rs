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
pub struct License {
    #[serde(rename = "key")]
    pub key: String,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "spdx_id")]
    pub spdx_id: String,
    #[serde(rename = "url")]
    pub url: Option<String>,
}

impl License {
    pub fn new(key: String, name: String, node_id: String, spdx_id: String, url: Option<String>) -> License {
        License {
            key,
            name,
            node_id,
            spdx_id,
            url,
        }
    }
}

