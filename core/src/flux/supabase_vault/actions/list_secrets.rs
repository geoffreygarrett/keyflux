use serde_json::Value;
use sqlx::{Executor, postgres::PgPool};

use keyflux_common::prelude::*;

use crate::flux::supabase_vault::models::Secret;

pub async fn list_secrets(pool: &PgPool, limit: Option<i32>) -> Result<Vec<Secret>> {
    let query = match limit {
        Some(limit) => format!("SELECT * FROM vault.decrypted_secrets LIMIT {}", limit),
        None => "SELECT * FROM vault.decrypted_secrets".to_string(),
    };

    let secrets: Vec<Secret> = sqlx::query_as(query.as_str())
        .fetch_all(pool)
        .context(SqlxExecutionSnafu { message: "Failed to update secret" })
        .await?;

    Ok(secrets)
}

#[cfg(test)]
mod tests {
    use dotenv::dotenv;
    use sqlx::postgres::PgPoolOptions;

    use super::*;

    #[tokio::test]
    async fn test_list_secrets() {
        // Load environment variables from a .env file
        dotenv().ok();

        // Set up database connection pool
        let database_url = std::env::var("DATABASE_URL")
            .expect("DATABASE_URL must be set in .env for tests");

        let pool = PgPoolOptions::new()
            .connect(&database_url)
            .await
            .expect("Failed to create pool");

        // Call list_secrets function and assert the result
        let secrets = list_secrets(&pool, Some(5)).await;
        println!("{:?}", secrets);
        assert!(secrets.is_ok(), "Failed to list secrets");

        // Optional: Assert specific properties of the returned secrets
        let secrets = secrets.unwrap();
        assert_eq!(secrets.len(), 5);
        for secret in secrets {
            // Add more assertions based on your Secret struct properties
            assert!(!secret.id.is_nil());  // Example assertion
        }
    }
}