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
pub struct CodeScanningSarifsReceipt {
    /// An identifier for the upload.
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    /// The REST API URL for checking the status of the upload.
    #[serde(rename = "url", skip_serializing_if = "Option::is_none")]
    pub url: Option<String>,
}

impl CodeScanningSarifsReceipt {
    pub fn new() -> CodeScanningSarifsReceipt {
        CodeScanningSarifsReceipt {
            id: None,
            url: None,
        }
    }
}

