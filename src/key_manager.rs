use std::path::{Path, PathBuf};
use std::sync::Arc;
use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::mpsc::channel;
use std::time::Duration;
use crate::config::{KeyEnum, KeyFluxConfig};
use crate::error::{FluxError, ConfigError};
use crate::traits::{Flux};
use crate::key::{Key, KeyDetail, KeyTransform, KeyValue};
use log::{error, info, trace, warn};
use colored::*;
use notify::{Config, Event, EventKind, RecommendedWatcher, RecursiveMode, Watcher};
use crate::flux_registry::FLUX_REGISTRY;
use serde_json::Value;
use crate::config::utils::replace_env_vars;
use crate::file::key_collection::{KeyCollection, KeyCollectionTransform};
// use crate::key::Attributes;

pub struct KeyManager {
    config: KeyFluxConfig,
    abort_signal: Arc<AtomicBool>,
}

impl KeyManager {
    pub fn new(config: KeyFluxConfig) -> Self {
        KeyManager {
            config,
            abort_signal: Arc::new(AtomicBool::new(false)),
        }
    }

    pub async fn flux_keys(&mut self) -> Result<(), FluxError> {
        for group in self.config.groups() {
            for flux in &group.fluxes {
                trace!("{}", t!("trace.processing_flux_config", flux = format!("{:?}", flux)));

                flux.initialize().await?;
                trace!("{}", t!("trace.flux_instance_initialized"));

                let mut new_keys = KeyCollection::new();

                let mut keys = group.keys.to_key_detail_collection();

                // iterate through all geys and replace value with "replace_with_env_Vars(value)"
                for key in keys.iter() {
                    let old_key_detail = key.to_key_detail(None);
                    new_keys.insert(Key::from_key_detail(KeyDetail {
                        name: key.name(),
                        value: replace_env_vars(&key.value()),
                        description: old_key_detail.description.clone(),
                        enabled: old_key_detail.enabled,
                        input: old_key_detail.input.clone(),
                        metadata: old_key_detail.metadata.clone(),
                        last_updated: old_key_detail.last_updated,
                        created_at: old_key_detail.created_at,
                        tags: old_key_detail.tags.clone(),
                    }));
                }

                flux.batch(&new_keys).await?;
                trace!("{}", t!("trace.flux_instance_batched"));

                flux.finalize().await?;
                trace!("{}", t!("trace.flux_instance_finalized"));
            }
        }
        Ok(())
    }

    pub fn resolve_secret_value(&self, _key: &Key) -> Option<String> {
        Some("".to_string())
    }

    #[allow(dead_code)]
    fn create_flux_instance(&self, config: &Value) -> Result<Box<dyn Flux>, ConfigError> {
        let flux_type = config.get("type").and_then(Value::as_str).ok_or_else(|| ConfigError::InvalidConfig(t!("errors.config.invalid_config").to_string()))?;
        let registry = FLUX_REGISTRY.lock().unwrap();
        registry.create(flux_type, config)
    }


    pub fn stop_watching(&self) {
        self.abort_signal.store(true, Ordering::Relaxed);
    }

}
