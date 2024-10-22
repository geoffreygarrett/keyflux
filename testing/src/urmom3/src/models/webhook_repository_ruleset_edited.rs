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
pub struct WebhookRepositoryRulesetEdited {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "repository", skip_serializing_if = "Option::is_none")]
    pub repository: Option<Box<crate::models::RepositoryWebhooks>>,
    #[serde(rename = "repository_ruleset")]
    pub repository_ruleset: Box<crate::models::RepositoryRuleset>,
    #[serde(rename = "changes", skip_serializing_if = "Option::is_none")]
    pub changes: Option<Box<crate::models::WebhookRepositoryRulesetEditedChanges>>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookRepositoryRulesetEdited {
    pub fn new(action: Action, repository_ruleset: crate::models::RepositoryRuleset, sender: crate::models::SimpleUserWebhooks) -> WebhookRepositoryRulesetEdited {
        WebhookRepositoryRulesetEdited {
            action,
            enterprise: None,
            installation: None,
            organization: None,
            repository: None,
            repository_ruleset: Box::new(repository_ruleset),
            changes: None,
            sender: Box::new(sender),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "edited")]
    Edited,
}

impl Default for Action {
    fn default() -> Action {
        Self::Edited
    }
}

