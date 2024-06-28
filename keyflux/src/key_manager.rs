use crate::config::utils::replace_env_vars;
use crate::config::{KeyEnum, KeyFluxConfig};
use crate::error::{ConfigError, FluxError};
use crate::file::key_collection::{KeyCollection, KeyCollectionTransform};
use crate::internal::FluxContext;
use crate::key::{Key, KeyDetail, KeyTransform, KeyValue};
use crate::traits::Flux;
use colored::*;
use log::{error, info, trace, warn};
use notify::{Config, Event, EventKind, RecommendedWatcher, RecursiveMode, Watcher};
use serde_json::Value;
use std::path::{Path, PathBuf};
use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::mpsc::channel;
use std::sync::Arc;
use std::time::Duration;
use crate::flux::replace_vars_in_json;

pub struct KeyManager<'a> {
    config: &'a mut KeyFluxConfig,
    config_path: PathBuf,
    abort_signal: Arc<AtomicBool>,
}

impl<'a> KeyManager<'a> {
    pub fn new(config: &'a mut KeyFluxConfig, config_path: &PathBuf) -> Self {
        KeyManager {
            config,
            config_path: config_path.clone(),
            abort_signal: Arc::new(AtomicBool::new(false)),
        }
    }

    pub async fn flux_keys(&mut self) -> Result<(), FluxError> {
        for mut group in self.config.groups_mut() {
            ////////////////////////////////////////////////
            // KEYS
            ////////////////////////////////////////////////
            trace!("{}", t!("trace.flux_instance_processing_keys"));
            let mut new_keys = KeyCollection::new();
            trace!("{:?}", group.keys);
            let mut keys = group.keys.to_key_detail_collection();
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
            let mut base_keys = KeyCollection::new();
            base_keys.merge(new_keys);
            trace!("{}", t!("trace.flux_instance_keys_processed"));
            let mut context = FluxContext::new(&self.config_path, base_keys);
            ////////////////////////////////////////////////
            for mut flux in &mut group.fluxes {
                trace!("{}", t!("trace.flux_instance_processing"));
                trace!("flux_value {}", format!("{:?}", flux));
                let mut flux_value = serde_json::to_value(&flux).unwrap();
                trace!("flux_value, after serde_json::to_value(&flux).unwrap() {}", format!("{:?}", flux_value));
                replace_vars_in_json(&mut flux_value);
                trace!("flux_value, after replace_vars_in_json(&mut flux_value) {}", format!("{:?}", flux_value));
                let inner_value = flux_value["input"].clone();
                flux.set_inner_value(inner_value);
                trace!(
                    "{}",
                    t!("trace.processing_flux_config", flux = format!("{:?}", flux))
                );

                ////////////////////////////////////////////////
                // INITIALIZE
                ////////////////////////////////////////////////
                trace!("{}", t!("trace.flux_instance_initializing"));
                flux.initialize(&context).await?;
                trace!("{}", t!("trace.flux_instance_initialized"));
                ////////////////////////////////////////////////

                ////////////////////////////////////////////////
                // BATCH
                ////////////////////////////////////////////////
                trace!("{}", t!("trace.flux_instance_batching"));
                flux.batch(&context).await?;
                trace!("{}", t!("trace.flux_instance_batched"));
                ////////////////////////////////////////////////

                ////////////////////////////////////////////////
                // FINALIZE
                ////////////////////////////////////////////////
                trace!("{}", t!("trace.flux_instance_finalizing"));
                flux.finalize(&context).await?;
                trace!("{}", t!("trace.flux_instance_finalized"));
                ////////////////////////////////////////////////
            }
        }
        Ok(())
    }

    pub fn resolve_secret_value(&self, _key: &Key) -> Option<String> {
        Some("".to_string())
    }

    pub fn stop_watching(&self) {
        self.abort_signal.store(true, Ordering::Relaxed);
    }
}
