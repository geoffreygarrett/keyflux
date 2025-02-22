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
pub struct WebhookCodeScanningAlertCreatedAlertTool {
    #[serde(rename = "guid", skip_serializing_if = "Option::is_none")]
    pub guid: Option<String>,
    /// The name of the tool used to generate the code scanning analysis alert.
    #[serde(rename = "name")]
    pub name: String,
    /// The version of the tool used to detect the alert.
    #[serde(rename = "version")]
    pub version: Option<String>,
}

impl WebhookCodeScanningAlertCreatedAlertTool {
    pub fn new(name: String, version: Option<String>) -> WebhookCodeScanningAlertCreatedAlertTool {
        WebhookCodeScanningAlertCreatedAlertTool {
            guid: None,
            name,
            version,
        }
    }
}


