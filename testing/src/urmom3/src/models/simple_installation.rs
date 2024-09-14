/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// SimpleInstallation : The GitHub App installation. Webhook payloads contain the `installation` property when the event is configured for and sent to a GitHub App. For more information, see \"[Using webhooks with GitHub Apps](https://docs.github.com/apps/creating-github-apps/registering-a-github-app/using-webhooks-with-github-apps).\"



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct SimpleInstallation {
    /// The ID of the installation.
    #[serde(rename = "id")]
    pub id: i32,
    /// The global node ID of the installation.
    #[serde(rename = "node_id")]
    pub node_id: String,
}

impl SimpleInstallation {
    /// The GitHub App installation. Webhook payloads contain the `installation` property when the event is configured for and sent to a GitHub App. For more information, see \"[Using webhooks with GitHub Apps](https://docs.github.com/apps/creating-github-apps/registering-a-github-app/using-webhooks-with-github-apps).\"
    pub fn new(id: i32, node_id: String) -> SimpleInstallation {
        SimpleInstallation {
            id,
            node_id,
        }
    }
}

