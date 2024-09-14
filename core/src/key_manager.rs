use std::collections::HashMap;
use std::path::{Path, PathBuf};
use std::sync::Arc;
use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::mpsc::channel;
use std::time::Duration;

use colored::*;
use log::{error, info, trace, warn};
use notify::{Config, Event, EventKind, RecommendedWatcher, RecursiveMode, Watcher};
use serde_json::Value;

use crate::config::{KeyEnum, KeyFluxConfig};
use crate::config::utils::replace_env_vars;
use crate::error::{ConfigError, FluxError};
use crate::file::key_collection::{KeyCollection, KeyCollectionTransform};
use crate::key::{Key, KeyDetail, KeyTransform, KeyValue};
use keyflux_common::prelude::*;

use crate::utils::general::replace_vars_in_json;

// Assuming KeyFluxConfig and FluxContext are defined elsewhere and imported appropriately
pub struct KeyManager<'a> {
    config: &'a mut KeyFluxConfig,
    config_path: PathBuf,
    abort_signal: Arc<AtomicBool>,
    context: Arc<dyn FluxContext>,
}

impl<'a> KeyManager<'a> {
    pub fn new(config: &'a mut KeyFluxConfig, config_path: &PathBuf, context: Arc<dyn FluxContext>) -> KeyManager<'a> {
        KeyManager {
            config,
            config_path: config_path.clone(),
            abort_signal: Arc::new(AtomicBool::new(false)),
            context,
        }
    }


    // async fn process_flux(&self, context: &FluxContext, flux: &mut impl Flux) -> Result<()> {
    //     if flux.has_list_async() {
    //         trace!("Executing list_async operation");
    //         flux.list_async(Value::Null).await?;
    //     }
    //     if flux.has_upsert_single_async() {
    //         trace!("Executing upsert_single_async operation");
    //         flux.upsert_single_async(context).await?;
    //     }
    //     if flux.has_upsert_many_async() {
    //         trace!("Executing upsert_many_async operation");
    //         flux.upsert_many_async(context).await?;
    //     }
    //     if flux.has_delete() {
    //         trace!("Executing delete operation");
    //         flux.delete(context).await?;
    //     }
    //     if flux.has_upsert() {
    //         trace!("Executing upsert operation");
    //         flux.upsert(context).await?;
    //     }
    //     if flux.has_select() {
    //         trace!("Executing select operation");
    //         flux.select(context).await?;
    //     }
    //     Ok(())
    // }

    // pub async fn run_once(&mut self) -> Result<(), FluxError> {};

    // pub async fn run(&mut self) -> Result<(), FluxError> {
    //     let (tx, rx) = channel();
    //     let mut watcher: RecommendedWatcher = Watcher::new_immediate(move |res| tx.send(res).unwrap()).unwrap();
    //     watcher.watch(&self.config_path, RecursiveMode::NonRecursive).unwrap();
    //     loop {
    //         if self.abort_signal.load(Ordering::Relaxed) {
    //             break;
    //         }
    //         match rx.recv_timeout(Duration::from_secs(1)) {
    //             Ok(event) => {
    //                 match event {
    //                     Ok(event) => {
    //                         match event.kind {
    //                             EventKind::Modify(_) => {
    //                                 info!("{}", t!("info.config_modified"));
    //                                 self.config = KeyFluxConfig::from_file(&self.config_path)?;
    //                                 self.flux_keys().await?;
    //                             }
    //                             _ => {}
    //                         }
    //                     }
    //                     Err(e) => {
    //                         error!("{}", t!("error.config_watch_error", error = e));
    //                     }
    //                 }
    //             }
    //             Err(_) => {}
    //         }
    //     }
    //     Ok(())
    // }

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
            ////////////////////////////////////////////////
            for mut flux in &mut group.fluxes {
                trace!("{}", t!("trace.flux_instance_processing"));
                trace!("flux_value {}", format!("{:?}", flux));
                let mut flux_value = serde_json::to_value(&flux).unwrap();
                trace!(
                    "flux_value, after serde_json::to_value(&flux).unwrap() {}",
                    format!("{:?}", flux_value)
                );
                replace_vars_in_json(&mut flux_value);
                trace!(
                    "flux_value, after replace_vars_in_json(&mut flux_value) {}",
                    format!("{:?}", flux_value)
                );

                // let inner_value = flux_value["input"].clone();
                // flux.set_inner_value(inner_value);
                trace!(
                    "{}",
                    t!("trace.processing_flux_config", flux = format!("{:?}", flux))
                );
                //
                // ////////////////////////////////////////////////
                // // INITIALIZE
                // ////////////////////////////////////////////////
                // trace!("{}", t!("trace.flux_instance_initializing"));
                flux.initialize(&self.context).await?;
                // trace!("{}", t!("trace.flux_instance_initialized"));
                // ////////////////////////////////////////////////
                //
                // ////////////////////////////////////////////////
                // // BATCH
                // ////////////////////////////////////////////////
                // trace!("{}", t!("trace.flux_instance_batching"));
                if flux.has_upsert_many_async() || flux.has_upsert_single_async() {
                    trace!("Executing upsert_many_async operation");
                    let k = keys.iter().map(|k| k.to_key_value()).collect();
                    flux.upsert_many_async(&k).await?;
                } else if flux.has_list_async() {
                    // Fallback to comparing and syncing individually
                    trace!("Executing list_async operation");
                    self.sync_with_remote_keys(&mut keys, flux).await?;
                } else {
                    panic!("No async operation found");
                }
                // flux.batch(&context).await?;
                // trace!("{}", t!("trace.flux_instance_batched"));
                // ////////////////////////////////////////////////
                //
                // ////////////////////////////////////////////////
                // // FINALIZE
                // ////////////////////////////////////////////////
                // trace!("{}", t!("trace.flux_instance_finalizing"));
                // flux.finalize(&context).await?;
                // trace!("{}", t!("trace.flux_instance_finalized"));
                // ////////////////////////////////////////////////
            }
        }
        Ok(())
    }

    async fn sync_with_remote_keys(&self, local_keys: &[KeyDetail], flux: &mut impl Flux) -> Result<()> {
        let remote_keys = flux.list_async(Value::Null).await?;
        // let remote_key_map: HashMap<_, _> = remote_keys.into_iter().map(|k| (k.name().clone(), k)).collect();
        let local_key_map: HashMap<_, _> = local_keys.iter().map(|k| (k.name.clone(), k.clone())).collect();

        // Upsert new or updated keys
        for (key_name, remote_key) in remote_keys.iter().map(|k| (k.name().clone(), k.clone())) {
            let local_key = local_key_map.get(key_name);
            // if local_key.is_none() || local_key.unwrap() != remote_key {
                trace!("Upserting key: {}", key_name);
                flux.insert_single_async(remote_key).await?;
            // }
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
