/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// NullableTeamSimple : Groups of organization members that gives permissions on specified repositories.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct NullableTeamSimple {
    /// Unique identifier of the team
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "node_id")]
    pub node_id: String,
    /// URL for the team
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "members_url")]
    pub members_url: String,
    /// Name of the team
    #[serde(rename = "name")]
    pub name: String,
    /// Description of the team
    #[serde(rename = "description")]
    pub description: Option<String>,
    /// Permission that the team will have for its repositories
    #[serde(rename = "permission")]
    pub permission: String,
    /// The level of privacy this team should have
    #[serde(rename = "privacy", skip_serializing_if = "Option::is_none")]
    pub privacy: Option<String>,
    /// The notification setting the team has set
    #[serde(rename = "notification_setting", skip_serializing_if = "Option::is_none")]
    pub notification_setting: Option<String>,
    #[serde(rename = "html_url")]
    pub html_url: String,
    #[serde(rename = "repositories_url")]
    pub repositories_url: String,
    #[serde(rename = "slug")]
    pub slug: String,
    /// Distinguished Name (DN) that team maps to within LDAP environment
    #[serde(rename = "ldap_dn", skip_serializing_if = "Option::is_none")]
    pub ldap_dn: Option<String>,
}

impl NullableTeamSimple {
    /// Groups of organization members that gives permissions on specified repositories.
    pub fn new(id: i32, node_id: String, url: String, members_url: String, name: String, description: Option<String>, permission: String, html_url: String, repositories_url: String, slug: String) -> NullableTeamSimple {
        NullableTeamSimple {
            id,
            node_id,
            url,
            members_url,
            name,
            description,
            permission,
            privacy: None,
            notification_setting: None,
            html_url,
            repositories_url,
            slug,
            ldap_dn: None,
        }
    }
}


