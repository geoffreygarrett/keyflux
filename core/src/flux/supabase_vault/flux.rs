use std::collections::HashMap;

use async_trait::async_trait;
use log::trace;
use reqwest::{Client, StatusCode};
use serde::Serialize;
use serde_json::{json, Value};
use sqlx::PgPool;
use sqlx::postgres::PgPoolOptions;
use uuid::Uuid;

use keyflux_common::prelude::*;

use crate::flux::supabase_vault::models;
use crate::flux::supabase_vault::models::Secret;

#[typetag::serde(name = "supabase_vault")]
impl Key for Secret {
    fn name(&self) -> &str {
        self.name.as_deref().unwrap_or("")
    }

    fn value(&self) -> &str {
        self.decrypted_value.as_deref().unwrap_or("")
    }

    fn updated_at(&self) -> Option<i64> {
        Some(self.updated_at.timestamp())
    }

    fn created_at(&self) -> Option<i64> {
        Some(self.created_at.timestamp())
    }

    fn get(&self, k: &str) -> Option<Value> {
        match k {
            "id" => Some(json!(self.id)),
            "name" => self.name.as_ref().map(|v| json!(v)),
            "description" => self.description.as_ref().map(|v| json!(v)),
            "secret" => Some(json!(self.secret)),
            "key_id" => Some(json!(self.key_id)),
            "nonce" => Some(json!(self.nonce)),
            "decrypted_value" => self.decrypted_value.as_ref().map(|v| json!(v)),
            "created_at" => Some(json!(self.created_at)),
            "updated_at" => Some(json!(self.updated_at)),
            _ => {
                trace!("Key not found: {}", k);
                None
            }
        }
    }
}


#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct SupabaseVaultFlux {
    connection_string: String,
    #[serde(skip)]
    pool: Option<PgPool>,
}

impl SupabaseVaultFlux {
    pub async fn new(connection_string: String) -> Self {
        let pool = PgPoolOptions::new()
            .connect(&connection_string)
            .await
            .expect("Failed to create pool");

        Self {
            connection_string,
            pool: Some(pool),
        }
    }
}


#[async_trait]
impl FluxInitialize for SupabaseVaultFlux {
    async fn initialize(&mut self, context: &dyn FluxContext) -> Result<()> {
        trace!("Initializing VercelProjectsFlux");
        self.pool = Some(PgPoolOptions::new()
            .connect(&context.render_string(&self.connection_string))
            .context(SqlxPoolSnafu { message: "Failed to create pool".to_string() })
            .await
            .expect("Failed to create pool"));
        Ok(())
    }
}

#[async_trait]
#[typetag::serde(name = "supabase_vault")]
impl Flux for SupabaseVaultFlux {
     async fn list_async(&self, value: Value) -> Result<Vec<KeyResponse>> {
        let limit = value.get("limit").and_then(|v| v.as_i64()).map(|v| v as i32);
        let pool = self.pool.as_ref().ok_or_else(|| Error::NotInitializedError { message: "Pool not initialized".to_string() })?;
        let secrets = crate::flux::supabase_vault::actions::list_secrets(&pool, limit).await?;

        let responses = secrets.into_iter().map(|secret| {
            let mut extra = HashMap::new();
            if let Ok(serialized_secret) = serde_json::to_value(&secret) {
                extra.insert("secret".to_string(), serialized_secret);
            }
            KeyResponse::success(&secret.name.unwrap_or_default(), "list", Some(extra))
        }).collect();

        Ok(responses)
    }
    fn has_list_async(&self) -> bool { true }

    async fn insert_single_async(&self, key: &dyn Key) -> Result<KeyResponse> {
        let pool = self.pool.as_ref().ok_or_else(|| Error::NotInitializedError { message: "Pool not initialized".to_string() })?;
        let secret = crate::flux::supabase_vault::actions::create_secret(&pool, key).await?;
        Ok(KeyResponse::success(&secret.name.unwrap_or_default(), "insert", None))
    }
    fn has_insert_single_async(&self) -> bool { true }

    async fn update_single_async(&self, key: &dyn Key) -> Result<KeyResponse> {
        let pool = self.pool.as_ref().ok_or_else(|| Error::NotInitializedError { message: "Pool not initialized".to_string() })?;
        let secret = crate::flux::supabase_vault::actions::update_secret(&pool, key).await?;
        Ok(KeyResponse::success(&secret.name.unwrap_or_default(), "update", None))
    }

    fn has_update_single_async(&self) -> bool { true }

    async fn delete_single_async(&self, key: &dyn Key) -> Result<KeyResponse> {
        let pool = self.pool.as_ref().ok_or_else(|| Error::NotInitializedError { message: "Pool not initialized".to_string() })?;
        crate::flux::supabase_vault::actions::delete_secret(&pool, key).await?;
        Ok(KeyResponse::success(key.name(), "delete", None))
    }

    fn has_delete_single_async(&self) -> bool { true }

}

#[derive(Debug, Serialize, Deserialize)]
struct KeyStruct {
    name: String,
    value: String,
    extra: Option<HashMap<String, Value>>,
}

impl KeyStruct {
    pub fn new(name: String, value: String, extra: Option<HashMap<String, Value>>) -> Self {
        Self {
            name,
            value,
            extra,
        }
    }
}

#[typetag::serde(name = "basic_key")]
impl Key for KeyStruct {
    fn name(&self) -> &str {
        &self.name
    }

    fn value(&self) -> &str {
        &self.value
    }
}


#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};
    use std::sync::{Mutex, Once};

    use lazy_static::lazy_static;
    use serde_json::json;
    use sqlx::{Error, PgPool};
    use sqlx::postgres::PgPoolOptions;
    use tokio::test;

    use super::*;

    lazy_static! {
        static ref INIT: Once = Once::new();
        static ref TEST_SETUP: Mutex<(SupabaseVaultFlux, MyContext)> = Mutex::new(setup());
    }

    struct MyContext;

    impl FluxContext for MyContext {
        fn config_dir(&self) -> Option<&Path> {
            todo!()
        }

        fn config_path(&self) -> &PathBuf {
            todo!()
        }

        fn render_value(&self, value: &Value) -> Value {
            value.clone() // Placeholder for actual implementation
        }

        fn render_string(&self, value: &str) -> String {
            value.to_string()
        }
    }

    fn initialize_logging() {
        let _ = env_logger::builder()
            .is_test(true)
            .write_style(env_logger::WriteStyle::Always)
            .filter_level(log::LevelFilter::Trace)
            .try_init();
    }

    fn setup() -> (SupabaseVaultFlux, MyContext) {
        initialize_logging();
        dotenv::dotenv().ok();
        let connection_string = std::env::var("DATABASE_URL").expect("Missing DATABASE_URL");

        let flux = SupabaseVaultFlux {
            connection_string,
            pool: None,
        };

        let context = MyContext;

        (flux, context)
    }

    #[tokio::test]
    async fn test_initialize_flux() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");
    }

    #[tokio::test]
    async fn test_insert_delete_secrets() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");

        let k1 = KeyStruct::new("key1".to_string(), "value1".to_string(), None);
        let k2 = KeyStruct::new("key2".to_string(), "value2".to_string(), None);
        let keys: Vec<&dyn Key> = vec![
            &k1,
            &k2,
        ];

        // Insert keys before attempting deletion
        let result_insert = flux.insert_many_async(&keys).await;
        println!("Insert result: {:#?}", result_insert);
        assert!(result_insert.is_ok(), "Failed to insert secrets");

        let result = flux.delete_many_async(&keys).await;
        println!("Delete result: {:#?}", result);
        assert!(result.is_ok(), "Failed to delete secrets");
        println!("Delete result: {:#?}", result.unwrap());
    }

    #[tokio::test]
    async fn test_list_secrets() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");

        let value = json!({ "limit": 10 });
        let result = flux.list_async(value).await;
        assert!(result.is_ok(), "Failed to list secrets");
        println!("List result: {:#?}", result.unwrap());
    }
}

