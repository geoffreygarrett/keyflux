/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// GpgKey : A unique encryption key



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct GpgKey {
    #[serde(rename = "id")]
    pub id: i64,
    #[serde(rename = "name", skip_serializing_if = "Option::is_none")]
    pub name: Option<String>,
    #[serde(rename = "primary_key_id")]
    pub primary_key_id: Option<i32>,
    #[serde(rename = "key_id")]
    pub key_id: String,
    #[serde(rename = "public_key")]
    pub public_key: String,
    #[serde(rename = "emails")]
    pub emails: Vec<crate::models::GpgKeyEmailsInner>,
    #[serde(rename = "subkeys")]
    pub subkeys: Vec<crate::models::GpgKeySubkeysInner>,
    #[serde(rename = "can_sign")]
    pub can_sign: bool,
    #[serde(rename = "can_encrypt_comms")]
    pub can_encrypt_comms: bool,
    #[serde(rename = "can_encrypt_storage")]
    pub can_encrypt_storage: bool,
    #[serde(rename = "can_certify")]
    pub can_certify: bool,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "expires_at")]
    pub expires_at: Option<String>,
    #[serde(rename = "revoked")]
    pub revoked: bool,
    #[serde(rename = "raw_key")]
    pub raw_key: Option<String>,
}

impl GpgKey {
    /// A unique encryption key
    pub fn new(id: i64, primary_key_id: Option<i32>, key_id: String, public_key: String, emails: Vec<crate::models::GpgKeyEmailsInner>, subkeys: Vec<crate::models::GpgKeySubkeysInner>, can_sign: bool, can_encrypt_comms: bool, can_encrypt_storage: bool, can_certify: bool, created_at: String, expires_at: Option<String>, revoked: bool, raw_key: Option<String>) -> GpgKey {
        GpgKey {
            id,
            name: None,
            primary_key_id,
            key_id,
            public_key,
            emails,
            subkeys,
            can_sign,
            can_encrypt_comms,
            can_encrypt_storage,
            can_certify,
            created_at,
            expires_at,
            revoked,
            raw_key,
        }
    }
}


