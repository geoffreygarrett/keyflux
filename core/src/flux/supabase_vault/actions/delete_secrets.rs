use sqlx::PgPool;
use keyflux_common::prelude::*;
use uuid::Uuid;

pub async fn delete_secrets(pool: &PgPool, ids: &[Uuid]) -> Result<()> {
    if ids.is_empty() {
        return Ok(());
    }

    // Create the placeholders for the IDs in the query
    let mut placeholders = String::new();
    for (index, _) in ids.iter().enumerate() {
        if index > 0 {
            placeholders.push_str(", ");
        }
        placeholders.push_str(&format!("${}", index + 1));
    }

    // Construct the SQL query
    let query = format!("DELETE FROM vault.secrets WHERE id IN ({})", placeholders);

    // Create the query and bind each ID
    let mut sql_query = sqlx::query(&query);
    for id in ids {
        sql_query = sql_query.bind(id);
    }

    // Execute the query
    sql_query
        .execute(pool)
        .context(SqlxExecutionSnafu { message: "Failed to delete secrets" })
        .await?;

    Ok(())
}
