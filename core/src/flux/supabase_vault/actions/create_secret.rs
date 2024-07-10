use chrono::{DateTime, Utc};
use sqlx::{Error, FromRow, PgPool, query_as};
use uuid::Uuid;

use keyflux_common::prelude::*;
use crate::flux::supabase_vault::models::Secret;

pub async fn create_secret(pool: &PgPool, key: &dyn Key) -> Result<Secret> {
    let name = key.name().to_string();
    let secret = key.value().to_string();
    let description = key.get("description").map_or(String::from(""), |v| v.as_str().unwrap_or("").to_string());

    let query = r#"
        INSERT INTO vault.secrets (name, secret, description)
        VALUES ($1, $2, $3)
        RETURNING *;
    "#;

    let result: Secret = query_as(query)
        .bind(name)
        .bind(secret)
        .bind(description)
        .fetch_one(pool)
        .context(SqlxExecutionSnafu { message: "Failed to create secret!" })
        .await?;

    Ok(result)
}
