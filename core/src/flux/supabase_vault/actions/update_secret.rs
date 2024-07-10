use sqlx::{Executor, postgres::PgPool, query_as};

use keyflux_common::prelude::*;

use crate::flux::supabase_vault::models::Secret;

pub async fn update_secret(pool: &PgPool, key: &dyn Key) -> Result<Secret> {
    let name = key.name().to_string();
    let secret = key.value().to_string();
    let description = key.get("description").map_or(String::from(""), |v| v.as_str().unwrap_or("").to_string());

    let query = r#"
        UPDATE vault.secrets
        SET secret = $1, description = $2, updated_at = CURRENT_TIMESTAMP
        WHERE name = $3
        RETURNING *;
    "#;

    let result: Secret = query_as(query)
        .bind(secret)
        .bind(description)
        .bind(name)
        .fetch_one(pool)
        .context(SqlxExecutionSnafu { message: "Failed to update secret!" })
        .await?;

    Ok(result)
}
