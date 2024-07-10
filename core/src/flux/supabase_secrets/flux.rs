use async_trait::async_trait;
use serde_json::Value;
use keyflux_common::prelude::*;
use crate::flux::supabase_secrets::models::Secret;

#[derive(Debug, Clone, serde::Deserialize, serde::Serialize)]
struct SupabaseSecretsFlux {
    project_ref: String,
    token: String,
    #[serde(skip)]
    client: reqwest::Client,
}

#[async_trait]
impl FluxInitialize for SupabaseSecretsFlux {
    async fn initialize(&mut self, _context: &dyn FluxContext) -> Result<()> {
        self.client = reqwest::Client::new();
        Ok(())
    }
}

#[async_trait]
#[typetag::serde(name = "supabase_secrets")]
impl Flux for SupabaseSecretsFlux {
    async fn delete_many_async(&self, keys: &[&dyn Key]) -> Result<Vec<KeyResponse>> {
        let key_clone = keys.clone();
        let keys = keys.clone().iter().map(|key| (*key).name().to_string()).collect();
        crate::flux::supabase_secrets::actions::delete_secrets(&self.client, &self.project_ref, keys).await;
        let responses = key_clone.into_iter().map(|key| KeyResponse::success(key.name(), "delete", None)).collect();
        Ok(responses)
    }

    async fn list_async(&self, _value: Value) -> Result<Vec<KeyResponse>> {
        let secrets = crate::flux::supabase_secrets::actions::list_secrets(&self.client, &self.project_ref, &self.token).await?;
        let keys = secrets.into_iter().map(|secret| {
            let mut extra = std::collections::HashMap::new();
            if let Ok(serialized_secret) = serde_json::to_value(&secret) {
                extra.insert("secret".to_string(), serialized_secret);
            }
            KeyResponse::success(&secret.name, "list", Some(extra))
        }).collect();
        Ok(keys)
    }

    async fn upsert_many_async(&self, keys: &[&dyn Key]) -> Result<Vec<KeyResponse>> {
        let key_clone = keys.clone();
        let keys = keys.iter().map(|key| Secret {name: key.name().to_string(), value: key.value().to_string(), description: None}).collect();
        crate::flux::supabase_secrets::actions::upsert_secrets(&self.client, &self.project_ref, keys).await;
        let responses = key_clone.into_iter().map(|key| KeyResponse::success(key.name(), "upsert", None)).collect();
        Ok(responses)
    }

    fn has_delete_many_async(&self) -> bool { true }
    fn has_list_async(&self) -> bool { true }
    fn has_upsert_many_async(&self) -> bool { true }
}


#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};
    use std::sync::{Mutex, Once};

    use dotenv::dotenv;
    use lazy_static::lazy_static;
    use reqwest::Client;
    use serde_json::Value;

    use super::*;

    struct MyContext;
    impl FluxContext for MyContext {
        fn config_dir(&self) -> Option<&Path> {
            todo!()
        }

        fn config_path(&self) -> &PathBuf {
            todo!()
        }

        fn render_value(&self, value: &Value) -> Value {
            todo!()
        }

        fn render_string(&self, value: &str) -> String {
            todo!()
        }
    }
    fn initialize_logging() {
        dotenv().ok();
        let _ = env_logger::builder()
            .is_test(true)
            .write_style(env_logger::WriteStyle::Always)
            .filter_level(log::LevelFilter::Trace)
            .try_init();
    }
    lazy_static! {
        static ref INIT: Once = Once::new();
        static ref TEST_SETUP: Mutex<(SupabaseSecretsFlux, MyContext)> = Mutex::new(setup());
    }
    fn setup() -> (SupabaseSecretsFlux, MyContext) {
        initialize_logging();
        dotenv::dotenv().ok();
        let project_ref = std::env::var("SUPABASE_PROJECT_REF").expect("Missing SUPABASE_PROJECT_REF");
        let token = std::env::var("SUPABASE_ACCESS_TOKEN").expect("Missing SUPABASE_ACCESS_TOKEN");

        let flux = SupabaseSecretsFlux {
            project_ref,
            token,
            client: Client::new(),
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
    async fn test_upsert_delete_secrets() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");

        let key1 = KeyStruct::new("key1".to_string(), "value1".to_string(), None);
        let key2 = KeyStruct::new("key2".to_string(), "value2".to_string(), None);
        let keys: Vec<&dyn Key> = vec![&key1, &key2];

        // Upsert keys
        assert!(flux.upsert_many_async(&keys).await.is_ok(), "Failed to upsert secrets");

        // List and verify keys
        let list_result = flux.list_async(Value::Null).await.unwrap();
        assert!(list_result.len() >= 2, "Failed to list secrets");

        // Delete keys
        assert!(flux.delete_many_async(&keys).await.is_ok(), "Failed to delete secrets");
    }

    #[tokio::test]
    async fn test_list_secrets() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");

        let list_result = flux.list_async(Value::Null).await;
        println!("List result: {:#?}", list_result);
        assert!(list_result.is_ok(), "Failed to list secrets");
    }
}