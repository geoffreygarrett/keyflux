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
pub struct WebhookRepositoryRulesetEditedChangesConditions {
    #[serde(rename = "added", skip_serializing_if = "Option::is_none")]
    pub added: Option<Vec<crate::models::RepositoryRulesetConditions>>,
    #[serde(rename = "deleted", skip_serializing_if = "Option::is_none")]
    pub deleted: Option<Vec<crate::models::RepositoryRulesetConditions>>,
    #[serde(rename = "updated", skip_serializing_if = "Option::is_none")]
    pub updated: Option<Vec<crate::models::WebhookRepositoryRulesetEditedChangesConditionsUpdatedInner>>,
}

impl WebhookRepositoryRulesetEditedChangesConditions {
    pub fn new() -> WebhookRepositoryRulesetEditedChangesConditions {
        WebhookRepositoryRulesetEditedChangesConditions {
            added: None,
            deleted: None,
            updated: None,
        }
    }
}

