/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// OrganizationSimpleWebhooks : A GitHub organization. Webhook payloads contain the `organization` property when the webhook is configured for an organization, or when the event occurs from activity in a repository owned by an organization.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct OrganizationSimpleWebhooks {
    #[serde(rename = "login")]
    pub login: String,
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "repos_url")]
    pub repos_url: String,
    #[serde(rename = "events_url")]
    pub events_url: String,
    #[serde(rename = "hooks_url")]
    pub hooks_url: String,
    #[serde(rename = "issues_url")]
    pub issues_url: String,
    #[serde(rename = "members_url")]
    pub members_url: String,
    #[serde(rename = "public_members_url")]
    pub public_members_url: String,
    #[serde(rename = "avatar_url")]
    pub avatar_url: String,
    #[serde(rename = "description")]
    pub description: Option<String>,
}

impl OrganizationSimpleWebhooks {
    /// A GitHub organization. Webhook payloads contain the `organization` property when the webhook is configured for an organization, or when the event occurs from activity in a repository owned by an organization.
    pub fn new(login: String, id: i32, node_id: String, url: String, repos_url: String, events_url: String, hooks_url: String, issues_url: String, members_url: String, public_members_url: String, avatar_url: String, description: Option<String>) -> OrganizationSimpleWebhooks {
        OrganizationSimpleWebhooks {
            login,
            id,
            node_id,
            url,
            repos_url,
            events_url,
            hooks_url,
            issues_url,
            members_url,
            public_members_url,
            avatar_url,
            description,
        }
    }
}

