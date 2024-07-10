use sqlx::PgPool;
use keyflux_common::prelude::*;
pub async fn delete_secret(pool: &PgPool, key: &dyn Key) -> Result<()> {
    let name = key.name().to_string();

    let query = r#"
        DELETE FROM vault.secrets
        WHERE name = $1;
    "#;

    sqlx::query(query)
        .bind(name)
        .execute(pool)
        .context(SqlxExecutionSnafu { message: "Failed to delete secret!" })
        .await?;

    Ok(())
}
