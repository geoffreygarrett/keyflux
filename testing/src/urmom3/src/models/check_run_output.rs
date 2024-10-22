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
pub struct CheckRunOutput {
    #[serde(rename = "title")]
    pub title: Option<String>,
    #[serde(rename = "summary")]
    pub summary: Option<String>,
    #[serde(rename = "text")]
    pub text: Option<String>,
    #[serde(rename = "annotations_count")]
    pub annotations_count: i32,
    #[serde(rename = "annotations_url")]
    pub annotations_url: String,
}

impl CheckRunOutput {
    pub fn new(title: Option<String>, summary: Option<String>, text: Option<String>, annotations_count: i32, annotations_url: String) -> CheckRunOutput {
        CheckRunOutput {
            title,
            summary,
            text,
            annotations_count,
            annotations_url,
        }
    }
}


