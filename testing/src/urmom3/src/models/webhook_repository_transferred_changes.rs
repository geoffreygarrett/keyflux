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
pub struct WebhookRepositoryTransferredChanges {
    #[serde(rename = "owner")]
    pub owner: Box<crate::models::WebhookRepositoryTransferredChangesOwner>,
}

impl WebhookRepositoryTransferredChanges {
    pub fn new(owner: crate::models::WebhookRepositoryTransferredChangesOwner) -> WebhookRepositoryTransferredChanges {
        WebhookRepositoryTransferredChanges {
            owner: Box::new(owner),
        }
    }
}


