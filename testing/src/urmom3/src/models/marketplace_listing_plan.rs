/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// MarketplaceListingPlan : Marketplace Listing Plan



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct MarketplaceListingPlan {
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "accounts_url")]
    pub accounts_url: String,
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "number")]
    pub number: i32,
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "description")]
    pub description: String,
    #[serde(rename = "monthly_price_in_cents")]
    pub monthly_price_in_cents: i32,
    #[serde(rename = "yearly_price_in_cents")]
    pub yearly_price_in_cents: i32,
    #[serde(rename = "price_model")]
    pub price_model: PriceModel,
    #[serde(rename = "has_free_trial")]
    pub has_free_trial: bool,
    #[serde(rename = "unit_name")]
    pub unit_name: Option<String>,
    #[serde(rename = "state")]
    pub state: String,
    #[serde(rename = "bullets")]
    pub bullets: Vec<String>,
}

impl MarketplaceListingPlan {
    /// Marketplace Listing Plan
    pub fn new(url: String, accounts_url: String, id: i32, number: i32, name: String, description: String, monthly_price_in_cents: i32, yearly_price_in_cents: i32, price_model: PriceModel, has_free_trial: bool, unit_name: Option<String>, state: String, bullets: Vec<String>) -> MarketplaceListingPlan {
        MarketplaceListingPlan {
            url,
            accounts_url,
            id,
            number,
            name,
            description,
            monthly_price_in_cents,
            yearly_price_in_cents,
            price_model,
            has_free_trial,
            unit_name,
            state,
            bullets,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum PriceModel {
    #[serde(rename = "FREE")]
    Free,
    #[serde(rename = "FLAT_RATE")]
    FlatRate,
    #[serde(rename = "PER_UNIT")]
    PerUnit,
}

impl Default for PriceModel {
    fn default() -> PriceModel {
        Self::Free
    }
}

