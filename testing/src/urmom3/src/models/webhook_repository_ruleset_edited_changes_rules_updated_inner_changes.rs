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
pub struct WebhookRepositoryRulesetEditedChangesRulesUpdatedInnerChanges {
    #[serde(rename = "configuration", skip_serializing_if = "Option::is_none")]
    pub configuration: Option<Box<crate::models::WebhookOrganizationRenamedChangesLogin>>,
    #[serde(rename = "rule_type", skip_serializing_if = "Option::is_none")]
    pub rule_type: Option<Box<crate::models::WebhookOrganizationRenamedChangesLogin>>,
    #[serde(rename = "pattern", skip_serializing_if = "Option::is_none")]
    pub pattern: Option<Box<crate::models::WebhookOrganizationRenamedChangesLogin>>,
}

impl WebhookRepositoryRulesetEditedChangesRulesUpdatedInnerChanges {
    pub fn new() -> WebhookRepositoryRulesetEditedChangesRulesUpdatedInnerChanges {
        WebhookRepositoryRulesetEditedChangesRulesUpdatedInnerChanges {
            configuration: None,
            rule_type: None,
            pattern: None,
        }
    }
}


