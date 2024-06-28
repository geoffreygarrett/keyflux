use async_trait::async_trait;
use log::info;
use postgres::{Client, NoTls};
use serde::{Deserialize, Serialize};

use crate::error::FluxError;
use crate::file::key_collection::KeyCollection;
use crate::internal::{FluxContext, FluxInner};
use crate::key::Key;
use crate::traits::Flux;

/// Structure representing a connection to a PostgreSQL database with Supabase Vault.
#[flux_define]
pub struct SupabaseVaultFlux {
    pub connection_string: String,
}

impl SupabaseVaultFlux {
    /// Helper function to establish a database connection synchronously.
    fn connect(&self) -> Result<Client, FluxError> {
        Client::connect(&self.connection_string, NoTls)
            .map_err(|e| FluxError::DatabaseError(format!("Failed to connect to database: {}", e)))
    }
}

#[async_trait]
#[flux_config(name = "supabase_vault")]
impl Flux for SupabaseVaultFlux {
    async fn initialize(&mut self, _context: &FluxContext) -> Result<(), FluxError> {
        // let client = self.connect()?;
        info!("Supabase Vault initialized successfully.");
        Ok(())
    }

    async fn finalize(&self, _context: &FluxContext) -> Result<(), FluxError> {
        info!("Supabase Vault finalized successfully.");
        Ok(())
    }

    async fn single(&self, key: &Key) -> Result<(), FluxError> {
        let mut client = self.connect()?;
        let stmt = "SELECT vault.create_secret($1, $2, $3);";
        let params: &[&(dyn postgres::types::ToSql + Sync)] = &[&key.value(), &key.name(), &""];
        client
            .execute(stmt, params)
            .map_err(|e| FluxError::DatabaseError(format!("Failed to execute query: {}", e)))?;
        info!("Secret '{}' added successfully.", key.name());
        Ok(())
    }

    async fn batch(&self, context: &FluxContext) -> Result<(), FluxError> {
        let mut client = self.connect()?;
        for key in context.keys() {
            let stmt = "SELECT vault.create_secret($1, $2, $3);";
            let params: &[&(dyn postgres::types::ToSql + Sync)] = &[&key.value(), &key.name(), &""];
            client
                .execute(stmt, params)
                .map_err(|e| FluxError::DatabaseError(format!("Failed to execute query: {}", e)))?;
            info!("Secret '{}' added successfully.", key.name());
        }
        Ok(())
    }

    async fn check(&self, key: &Key) -> Result<Option<String>, FluxError> {
        let mut client = self.connect()?;
        let stmt = "SELECT decrypted_secret FROM vault.decrypted_secrets WHERE name = $1;";
        let rows = client
            .query(stmt, &[&key.name()])
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
