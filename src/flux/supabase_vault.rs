use async_trait::async_trait;
use postgres::{Client, NoTls};
use log::{info};
use serde::{Deserialize, Serialize};

use crate::error::FluxError;
use crate::key::Key;
use crate::traits::Flux;

/// Structure representing a connection to a PostgreSQL database with Supabase Vault.
#[derive(Debug, Clone, Serialize, Deserialize)]
pub struct SupabaseVaultFlux {
    pub connection_string: String,
}

impl SupabaseVaultFlux {
    pub fn new(connection_string: String) -> Self {
        SupabaseVaultFlux {
            connection_string,
        }
    }

    /// Helper function to establish a database connection synchronously.
    fn connect(&self) -> Result<Client, FluxError> {
        Client::connect(&self.connection_string, NoTls)
            .map_err(|e| FluxError::DatabaseError(format!("Failed to connect to database: {}", e)))
    }
}

#[async_trait]
impl Flux for SupabaseVaultFlux {
    async fn initialize(&self) -> Result<(), FluxError> {
        // let client = self.connect()?;
        info!("Supabase Vault initialized successfully.");
        Ok(())
    }

    async fn finalize(&self) -> Result<(), FluxError> {
        info!("Supabase Vault finalized successfully.");
        Ok(())
    }

    async fn single(&self, key: &Key) -> Result<(), FluxError> {
        let mut client = self.connect()?;
        let stmt = "SELECT vault.create_secret($1, $2, $3);";
        let params: &[&(dyn postgres::types::ToSql + Sync)] = &[&key.value, &key.name, &""];
        client.execute(stmt, params)
            .map_err(|e| FluxError::DatabaseError(format!("Failed to execute query: {}", e)))?;
        info!("Secret '{}' added successfully.", key.name);
        Ok(())
    }

    async fn batch(&self, keys: &[Key]) -> Result<(), FluxError> {
        let mut client = self.connect()?;
        for key in keys {
            let stmt = "SELECT vault.create_secret($1, $2, $3);";
            let params: &[&(dyn postgres::types::ToSql + Sync)] = &[&key.value, &key.name, &""];
            client.execute(stmt, params)
                .map_err(|e| FluxError::DatabaseError(format!("Failed to execute query: {}", e)))?;
            info!("Secret '{}' added successfully.", key.name);
        }
        Ok(())
    }

    async fn check(&self, key: &Key) -> Result<Option<String>, FluxError> {
        let mut client = self.connect()?;
        let stmt = "SELECT decrypted_secret FROM vault.decrypted_secrets WHERE name = $1;";
        let rows = client.query(stmt, &[&key.name])
            .map_err(|e| FluxError::DatabaseError(format!("Failed to execute query: {}", e)))?;
        if let Some(row) = rows.iter().next() {
            let secret: String = row.get("decrypted_secret");
            Ok(Some(secret))
        } else {
            Ok(None)
        }
    }

    // Implement other methods as necessary
}
