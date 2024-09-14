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
pub struct WebhooksPreviousMarketplacePurchase {
    #[serde(rename = "account")]
    pub account: Box<crate::models::WebhooksMarketplacePurchaseAccount>,
    #[serde(rename = "billing_cycle")]
    pub billing_cycle: String,
    #[serde(rename = "free_trial_ends_on")]
    pub free_trial_ends_on: Option<serde_json::Value>,
    #[serde(rename = "next_billing_date", skip_serializing_if = "Option::is_none")]
    pub next_billing_date: Option<String>,
    #[serde(rename = "on_free_trial")]
    pub on_free_trial: bool,
    #[serde(rename = "plan")]
    pub plan: Box<crate::models::WebhooksPreviousMarketplacePurchasePlan>,
    #[serde(rename = "unit_count")]
    pub unit_count: i32,
}

impl WebhooksPreviousMarketplacePurchase {
    pub fn new(account: crate::models::WebhooksMarketplacePurchaseAccount, billing_cycle: String, free_trial_ends_on: Option<serde_json::Value>, on_free_trial: bool, plan: crate::models::WebhooksPreviousMarketplacePurchasePlan, unit_count: i32) -> WebhooksPreviousMarketplacePurchase {
        WebhooksPreviousMarketplacePurchase {
            account: Box::new(account),
            billing_cycle,
            free_trial_ends_on,
            next_billing_date: None,
            on_free_trial,
            plan: Box::new(plan),
            unit_count,
        }
    }
}

