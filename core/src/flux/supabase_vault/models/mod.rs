use serde::{Deserialize, Serialize};
use sqlx::{FromRow, Row};
use sqlx::postgres::PgRow;
use sqlx::types::{Uuid};

use keyflux_common::prelude::*;

#[derive(Debug, Serialize, Deserialize)]
pub struct Secret {
    pub id: Uuid,
    pub name: Option<String>,
    pub description: Option<String>,
    pub secret: String,
    pub key_id: Uuid,
    pub nonce: Vec<u8>,
    pub decrypted_value: Option<String>, // pub decrypted_value:
    pub created_at: chrono::DateTime<chrono::Utc>, // pub created_at:
    pub updated_at: chrono::DateTime<chrono::Utc>, // pub updated_at:
}



impl Secret {
    pub fn new(secret: String, key_id: Uuid) -> Self {
        Secret {
            id: Uuid::new_v4(),
            name: None,
            description: None,
            secret,
            key_id,
            nonce: Vec::new(), // Placeholder for nonce, adjust as per encryption needs
            decrypted_value: None,
            created_at: chrono::Utc::now(),
            updated_at: chrono::Utc::now(),
        }
    }
}

impl FromRow<'_, PgRow> for Secret {
    fn from_row(row: &PgRow) -> Result<Self, sqlx::Error> {
        Ok(Self {
            id: row.try_get("id")?,
            name: row.try_get("name")?,
            description: row.try_get("description")?,
            secret: row.try_get("secret")?,
            key_id: row.try_get("key_id")?,
            nonce: row.try_get("nonce")?,
            decrypted_value: None,
            created_at: row.try_get("created_at")?,
            updated_at: row.try_get("updated_at")?,
        })
    }
}