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
pub struct WebhooksSponsorship {
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "maintainer", skip_serializing_if = "Option::is_none")]
    pub maintainer: Option<Box<crate::models::WebhooksSponsorshipMaintainer>>,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "privacy_level")]
    pub privacy_level: String,
    #[serde(rename = "sponsor")]
    pub sponsor: Option<Box<crate::models::User>>,
    #[serde(rename = "sponsorable")]
    pub sponsorable: Option<Box<crate::models::User>>,
    #[serde(rename = "tier")]
    pub tier: Box<crate::models::SponsorshipTier>,
}

impl WebhooksSponsorship {
    pub fn new(created_at: String, node_id: String, privacy_level: String, sponsor: Option<crate::models::User>, sponsorable: Option<crate::models::User>, tier: crate::models::SponsorshipTier) -> WebhooksSponsorship {
        WebhooksSponsorship {
            created_at,
            maintainer: None,
            node_id,
            privacy_level,
            sponsor: if let Some(x) = sponsor {Some(Box::new(x))} else {None},
            sponsorable: if let Some(x) = sponsorable {Some(Box::new(x))} else {None},
            tier: Box::new(tier),
        }
    }
}


