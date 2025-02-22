/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// NullableIntegration : GitHub apps are a new way to extend GitHub. They can be installed directly on organizations and user accounts and granted access to specific repositories. They come with granular permissions and built-in webhooks. GitHub apps are first class actors within GitHub.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct NullableIntegration {
    /// Unique identifier of the GitHub app
    #[serde(rename = "id")]
    pub id: i32,
    /// The slug name of the GitHub app
    #[serde(rename = "slug", skip_serializing_if = "Option::is_none")]
    pub slug: Option<String>,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "owner")]
    pub owner: Option<Box<crate::models::NullableSimpleUser>>,
    /// The name of the GitHub app
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "description")]
    pub description: Option<String>,
    #[serde(rename = "external_url")]
    pub external_url: String,
    #[serde(rename = "html_url")]
    pub html_url: String,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    #[serde(rename = "permissions")]
    pub permissions: crate::models::IntegrationPermissions,
    /// The list of events for the GitHub app
    #[serde(rename = "events")]
    pub events: Vec<String>,
    /// The number of installations associated with the GitHub app
    #[serde(rename = "installations_count", skip_serializing_if = "Option::is_none")]
    pub installations_count: Option<i32>,
    #[serde(rename = "client_id", skip_serializing_if = "Option::is_none")]
    pub client_id: Option<String>,
    #[serde(rename = "client_secret", skip_serializing_if = "Option::is_none")]
    pub client_secret: Option<String>,
    #[serde(rename = "webhook_secret", skip_serializing_if = "Option::is_none")]
    pub webhook_secret: Option<String>,
    #[serde(rename = "pem", skip_serializing_if = "Option::is_none")]
    pub pem: Option<String>,
}

impl NullableIntegration {
    /// GitHub apps are a new way to extend GitHub. They can be installed directly on organizations and user accounts and granted access to specific repositories. They come with granular permissions and built-in webhooks. GitHub apps are first class actors within GitHub.
    pub fn new(id: i32, node_id: String, owner: Option<crate::models::NullableSimpleUser>, name: String, description: Option<String>, external_url: String, html_url: String, created_at: String, updated_at: String, permissions: crate::models::IntegrationPermissions, events: Vec<String>) -> NullableIntegration {
        NullableIntegration {
            id,
            slug: None,
            node_id,
            owner: if let Some(x) = owner {Some(Box::new(x))} else {None},
            name,
            description,
            external_url,
            html_url,
            created_at,
            updated_at,
            permissions,
            events,
            installations_count: None,
            client_id: None,
            client_secret: None,
            webhook_secret: None,
            pem: None,
        }
    }
}


