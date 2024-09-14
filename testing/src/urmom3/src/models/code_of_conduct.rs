/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// CodeOfConduct : Code Of Conduct



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct CodeOfConduct {
    #[serde(rename = "key")]
    pub key: String,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "body", skip_serializing_if = "Option::is_none")]
    pub body: Option<String>,
    #[serde(rename = "html_url")]
    pub html_url: Option<String>,
}

impl CodeOfConduct {
    /// Code Of Conduct
    pub fn new(key: String, name: String, url: String, html_url: Option<String>) -> CodeOfConduct {
        CodeOfConduct {
            key,
            name,
            url,
            body: None,
            html_url,
        }
    }
}

