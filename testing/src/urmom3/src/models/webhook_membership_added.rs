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
pub struct WebhookMembershipAdded {
    #[serde(rename = "action")]
    pub action: Action,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "member")]
    pub member: Option<Box<crate::models::WebhooksUser>>,
    #[serde(rename = "organization")]
    pub organization: Box<crate::models::OrganizationSimpleWebhooks>,
    #[serde(rename = "repository", skip_serializing_if = "Option::is_none")]
    pub repository: Option<Box<crate::models::RepositoryWebhooks>>,
    /// The scope of the membership. Currently, can only be `team`.
    #[serde(rename = "scope")]
    pub scope: Scope,
    #[serde(rename = "sender")]
    pub sender: Option<Box<crate::models::User>>,
    #[serde(rename = "team")]
    pub team: Box<crate::models::WebhooksTeam>,
}

impl WebhookMembershipAdded {
    pub fn new(action: Action, member: Option<crate::models::WebhooksUser>, organization: crate::models::OrganizationSimpleWebhooks, scope: Scope, sender: Option<crate::models::User>, team: crate::models::WebhooksTeam) -> WebhookMembershipAdded {
        WebhookMembershipAdded {
            action,
            enterprise: None,
            installation: None,
            member: if let Some(x) = member {Some(Box::new(x))} else {None},
            organization: Box::new(organization),
            repository: None,
            scope,
            sender: if let Some(x) = sender {Some(Box::new(x))} else {None},
            team: Box::new(team),
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Action {
    #[serde(rename = "added")]
    Added,
}

impl Default for Action {
    fn default() -> Action {
        Self::Added
    }
}
/// The scope of the membership. Currently, can only be `team`.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Scope {
    #[serde(rename = "team")]
    Team,
}

impl Default for Scope {
    fn default() -> Scope {
        Self::Team
    }
}
