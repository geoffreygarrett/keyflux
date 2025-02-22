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
pub struct WebhookProjectsV2ItemReorderedChanges {
    #[serde(rename = "previous_projects_v2_item_node_id", skip_serializing_if = "Option::is_none")]
    pub previous_projects_v2_item_node_id: Option<Box<crate::models::WebhookMemberEditedChangesPermission>>,
}

impl WebhookProjectsV2ItemReorderedChanges {
    pub fn new() -> WebhookProjectsV2ItemReorderedChanges {
        WebhookProjectsV2ItemReorderedChanges {
            previous_projects_v2_item_node_id: None,
        }
    }
}


