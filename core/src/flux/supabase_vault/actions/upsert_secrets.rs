use chrono::{DateTime, Utc};
use sqlx::{FromRow, PgPool, query_as};
use uuid::Uuid;

use keyflux_common::prelude::*;

// use crate::flux::supabase_vault::models::SecretRecord; // Make sure this model has the appropriate fields and types

#[derive(Debug, Serialize, Deserialize, FromRow)]
pub struct SecretRecord {
    id: Uuid,
    name: Option<String>,
    description: Option<String>,
    pub(crate) secret: String,
    key_id: Uuid,
    nonce: Vec<u8>,
    created_at: DateTime<Utc>,
    updated_at: DateTime<Utc>,
}

pub async fn upsert_secrets(pool: &PgPool, keys: &[&dyn Key]) -> Result<Vec<SecretRecord>> {
    if keys.is_empty() {
        return Ok(vec![]);
    }

    let ids: Vec<Uuid> = keys.iter().map(|key| Uuid::new_v4()).collect(); // Assuming you generate new UUIDs for each key, or you fetch them from the key if they exist
    let names: Vec<Option<String>> = keys.iter().map(|key| Some(key.name().to_string())).collect();
    let values: Vec<String> = keys.iter().map(|key| key.value().to_string()).collect();
    let descriptions: Vec<Option<String>> = keys.iter().map(|key| Some(key.get("description").map_or(String::from(""), |v| v.as_str().unwrap_or("").to_string()))).collect();

    let query = r#"
    INSERT INTO vault.secrets (id, name, secret, description)
        SELECT * FROM unnest($1, $2, $3, $4)
        ON CONFLICT ON CONSTRAINT secrets_name_idx
        DO UPDATE SET
            id = COALESCE(NULLIF(EXCLUDED.id, NULL), secrets.id),
            secret = EXCLUDED.secret,
            description = EXCLUDED.description,
            updated_at = CURRENT_TIMESTAMP
        RETURNING *;
    "#;

    let result: Vec<SecretRecord> = sqlx::query_as(query)
        .bind(&ids)
        .bind(&names)
        .bind(&values)
        .bind(&descriptions)
        .fetch_all(pool)
        .context(SqlxExecutionSnafu { message: "Failed to upsert secrets!" })
        .await?;

    Ok(result)
}