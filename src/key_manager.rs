use std::path::{Path, PathBuf};
use std::sync::Arc;
use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::mpsc::channel;
use std::time::Duration;
use crate::config::{KeyEnum, KeyFluxConfig};
use crate::error::{FluxError, ConfigError};
use crate::traits::{Flux};
use crate::key::{Key};
use log::{error, info, trace, warn};
use colored::*;
use notify::{Config, Event, EventKind, RecommendedWatcher, RecursiveMode, Watcher};
use crate::flux_registry::FLUX_REGISTRY;
use serde_json::Value;
use crate::config::utils::replace_env_vars;
use crate::key::Attributes;

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

                let keys_to_flux: Vec<Key> = group.keys.iter()
                    .filter_map(|(name, key)| match key {
                        KeyEnum::Value(value) => {
                            info!("{}", t!("info.using_direct_value", key = name.green().to_string()));
                            Some(Key::new(name.clone(), value.clone(), Attributes::new()))
                        }
                        KeyEnum::Key(key) => {
                            if let Some(value) = self.resolve_secret_value(key) {
                                info!("{}", t!("info.fluxing_key", key = key.name.green().to_string()));
                                Some(Key::new(key.name.clone(), value, key.attributes.clone()))
                            } else {
                                warn!("{}", t!("warn.key_not_resolved", key = key.name.yellow().to_string()));
                                None
                            }
                        }
                    })
                    .collect();

                // replace_env_vars(&mut keys_to_flux);
                let updated_keys = keys_to_flux.iter().map(|key| {
                    let updated_value = replace_env_vars(key.value.as_str());
                    trace!("{}", t!("trace.replaced_env_vars", key = key.name.green().to_string()));
                    Key {
                        name: key.name.clone(),
                        value: updated_value,
                        attributes: key.attributes.clone(), // assuming Key also has attributes
                    }
                }).collect::<Vec<Key>>();

                flux.batch(&updated_keys).await?;
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

    pub async fn watch_and_reload(&mut self, config_file: &PathBuf) -> Result<(), FluxError> {
        let (tx, rx) = channel();
        let mut watcher = RecommendedWatcher::new(tx, Config::default()).map_err(|e| FluxError::WatchError(format!("{:?}", e)))?;
        watcher.watch(Path::new(config_file), RecursiveMode::NonRecursive).map_err(|e| FluxError::WatchError(format!("{:?}", e)))?;

        while !self.abort_signal.load(Ordering::Relaxed) {
            if let Ok(event) = rx.recv_timeout(Duration::from_secs(1)) {
                match event {
                    Ok(Event {
                           kind: EventKind::Modify(_),
                           ..
                       }) => {
                        trace!("{}", t!("trace.config_changed"));
                        let config = match KeyFluxConfig::from_file(config_file) {
                            Ok(config) => config,
                            Err(e) => {
                                error!("{}", t!("error.reload_config", error = format!("{:?}", e)));
                                continue;
                            }
                        };

                        trace!("{}", t!("trace.reloaded_config"));
                        self.config = config;

                        if let Err(e) = self.flux_keys().await {
                            error!("{}", t!("error.sync_secrets_after_reload", error = format!("{:?}", e)));
                        } else {
                            info!("{}", t!("info.secrets_synced_after_reload"));
                        }
                    }
                    Ok(event) => trace!("{}", t!("trace.unhandled_event", event = format!("{:?}", event))),
                    Err(e) => {
                        error!("{}", t!("error.watch", error = format!("{:?}", e)));
                        break;
                    }
                }
            }
        }

        Ok(())
    }
}
