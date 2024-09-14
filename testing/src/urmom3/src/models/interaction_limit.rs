/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// InteractionLimit : Limit interactions to a specific type of user for a specified duration



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct InteractionLimit {
    #[serde(rename = "limit")]
    pub limit: crate::models::InteractionGroup,
    #[serde(rename = "expiry", skip_serializing_if = "Option::is_none")]
    pub expiry: Option<crate::models::InteractionExpiry>,
}

impl InteractionLimit {
    /// Limit interactions to a specific type of user for a specified duration
    pub fn new(limit: crate::models::InteractionGroup) -> InteractionLimit {
        InteractionLimit {
            limit,
            expiry: None,
        }
    }
}

