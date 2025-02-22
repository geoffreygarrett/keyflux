/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// SponsorshipTier : The `tier_changed` and `pending_tier_change` will include the original tier before the change or pending change. For more information, see the pending tier change payload.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct SponsorshipTier {
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "description")]
    pub description: String,
    #[serde(rename = "is_custom_ammount", skip_serializing_if = "Option::is_none")]
    pub is_custom_ammount: Option<bool>,
    #[serde(rename = "is_custom_amount", skip_serializing_if = "Option::is_none")]
    pub is_custom_amount: Option<bool>,
    #[serde(rename = "is_one_time")]
    pub is_one_time: bool,
    #[serde(rename = "monthly_price_in_cents")]
    pub monthly_price_in_cents: i32,
    #[serde(rename = "monthly_price_in_dollars")]
    pub monthly_price_in_dollars: i32,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "node_id")]
    pub node_id: String,
}

impl SponsorshipTier {
    /// The `tier_changed` and `pending_tier_change` will include the original tier before the change or pending change. For more information, see the pending tier change payload.
    pub fn new(created_at: String, description: String, is_one_time: bool, monthly_price_in_cents: i32, monthly_price_in_dollars: i32, name: String, node_id: String) -> SponsorshipTier {
        SponsorshipTier {
            created_at,
            description,
            is_custom_ammount: None,
            is_custom_amount: None,
            is_one_time,
            monthly_price_in_cents,
            monthly_price_in_dollars,
            name,
            node_id,
        }
    }
}


