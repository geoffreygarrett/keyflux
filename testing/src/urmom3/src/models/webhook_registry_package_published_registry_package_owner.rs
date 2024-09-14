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
pub struct WebhookRegistryPackagePublishedRegistryPackageOwner {
    #[serde(rename = "avatar_url")]
    pub avatar_url: String,
    #[serde(rename = "events_url")]
    pub events_url: String,
    #[serde(rename = "followers_url")]
    pub followers_url: String,
    #[serde(rename = "following_url")]
    pub following_url: String,
    #[serde(rename = "gists_url")]
    pub gists_url: String,
    #[serde(rename = "gravatar_id")]
    pub gravatar_id: String,
    #[serde(rename = "html_url")]
    pub html_url: String,
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "login")]
    pub login: String,
    #[serde(rename = "node_id")]
    pub node_id: String,
    #[serde(rename = "organizations_url")]
    pub organizations_url: String,
    #[serde(rename = "received_events_url")]
    pub received_events_url: String,
    #[serde(rename = "repos_url")]
    pub repos_url: String,
    #[serde(rename = "site_admin")]
    pub site_admin: bool,
    #[serde(rename = "starred_url")]
    pub starred_url: String,
    #[serde(rename = "subscriptions_url")]
    pub subscriptions_url: String,
    #[serde(rename = "type")]
    pub r#type: String,
    #[serde(rename = "url")]
    pub url: String,
}

impl WebhookRegistryPackagePublishedRegistryPackageOwner {
    pub fn new(avatar_url: String, events_url: String, followers_url: String, following_url: String, gists_url: String, gravatar_id: String, html_url: String, id: i32, login: String, node_id: String, organizations_url: String, received_events_url: String, repos_url: String, site_admin: bool, starred_url: String, subscriptions_url: String, r#type: String, url: String) -> WebhookRegistryPackagePublishedRegistryPackageOwner {
        WebhookRegistryPackagePublishedRegistryPackageOwner {
            avatar_url,
            events_url,
            followers_url,
            following_url,
            gists_url,
            gravatar_id,
            html_url,
            id,
            login,
            node_id,
            organizations_url,
            received_events_url,
            repos_url,
            site_admin,
            starred_url,
            subscriptions_url,
            r#type,
            url,
        }
    }
}

