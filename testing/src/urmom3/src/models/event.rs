/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// Event : Event



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct Event {
    #[serde(rename = "id")]
    pub id: String,
    #[serde(rename = "type")]
    pub r#type: Option<String>,
    #[serde(rename = "actor")]
    pub actor: Box<crate::models::Actor>,
    #[serde(rename = "repo")]
    pub repo: Box<crate::models::EventRepo>,
    #[serde(rename = "org", skip_serializing_if = "Option::is_none")]
    pub org: Option<Box<crate::models::Actor>>,
    #[serde(rename = "payload")]
    pub payload: Box<crate::models::EventPayload>,
    #[serde(rename = "public")]
    pub public: bool,
    #[serde(rename = "created_at")]
    pub created_at: Option<String>,
}

impl Event {
    /// Event
    pub fn new(id: String, r#type: Option<String>, actor: crate::models::Actor, repo: crate::models::EventRepo, payload: crate::models::EventPayload, public: bool, created_at: Option<String>) -> Event {
        Event {
            id,
            r#type,
            actor: Box::new(actor),
            repo: Box::new(repo),
            org: None,
            payload: Box::new(payload),
            public,
            created_at,
        }
    }
}


