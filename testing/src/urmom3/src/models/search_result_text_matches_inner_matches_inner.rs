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
pub struct SearchResultTextMatchesInnerMatchesInner {
    #[serde(rename = "text", skip_serializing_if = "Option::is_none")]
    pub text: Option<String>,
    #[serde(rename = "indices", skip_serializing_if = "Option::is_none")]
    pub indices: Option<Vec<i32>>,
}

impl SearchResultTextMatchesInnerMatchesInner {
    pub fn new() -> SearchResultTextMatchesInnerMatchesInner {
        SearchResultTextMatchesInnerMatchesInner {
            text: None,
            indices: None,
        }
    }
}

