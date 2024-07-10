// use std::fs::{self, OpenOptions};
// use std::io::{self, Read, Write};
// use std::path::{Path, PathBuf};
//
// use async_trait::async_trait;
// use chrono::Utc;
// use log::{error, info};
// use serde::{Deserialize, Serialize};
// use toml;
//
//
// use crate::{FluxContext};
// use crate::error::FluxError;
// use crate::file::format_manager::FormatManager;
// use crate::file::key_collection::{KeyCollection, KeyCollectionTransform};
// use crate::key::Key;
// use crate::traits::FluxBase;
//
// // use crate::internal::{FluxContext, FluxInternal};
// // use crate;
//
// #[derive(Serialize, Deserialize, Clone, Debug)]
// pub enum SaveStrategy {
//     Overwrite,
//     BackupAndOverwrite,
//     Merge,
// }
//
// impl Default for SaveStrategy {
//     fn default() -> Self {
//         SaveStrategy::Overwrite
//     }
// }
//
// #[derive(Serialize, Deserialize, Clone, Debug, PartialEq, PartialOrd)]
// pub enum Verbosity {
//     Quiet,
//     Info,
//     Debug,
// }
//
// impl Default for Verbosity {
//     fn default() -> Self {
//         Verbosity::Info
//     }
// }
//
// #[flux_struct]
// pub struct FileFlux {
//     #[serde(default = "default_format")]
//     pub format: String,
//     #[proxy_name = "path"]
//     pub path: PathBuf,
//     #[serde(default = "default_strategy")]
//     pub save_strategy: SaveStrategy,
//     #[serde(default = "default_verbosity")]
//     pub verbosity: Verbosity,
//     #[serde(skip)]
//     pub config_dir: PathBuf,
// }
//
// impl FileFlux {
//     fn resolve_path(&self, path: &PathBuf) -> PathBuf {
//         if path.is_absolute() {
//             path.clone()
//         } else {
//             self.config_dir.join(path)
//         }
//     }
// }
//
// fn default_format() -> String {
//     "env".to_string()
// }
//
// fn default_strategy() -> SaveStrategy {
//     SaveStrategy::Merge
// }
//
// fn default_verbosity() -> Verbosity {
//     Verbosity::Info
// }
//
// impl FileFlux {
//     async fn save_keys(&self, keys: &KeyCollection) -> Result<(), FluxError> {
//         let manager = FormatManager::read().await;
//         let path = self.resolve_path(&self.path_field());
//         info!("Saving keys to {:?}", path);
//         match self.save_strategy {
//             SaveStrategy::Overwrite => self.overwrite(&manager, &path, keys).await,
//             SaveStrategy::BackupAndOverwrite => {
//                 self.backup_and_overwrite(&manager, &path, keys).await
//             }
//             SaveStrategy::Merge => self.merge(&manager, &path, keys).await,
//         }
//     }
//
//     async fn overwrite(
//         &self,
//         manager: &FormatManager,
//         path: &PathBuf,
//         keys: &KeyCollection,
//     ) -> Result<(), FluxError> {
//         self.create_directories(path)?;
//         manager.save_keys(path, keys, Some(&self.format_field()))?;
//         Ok(())
//     }
//
//     async fn backup_and_overwrite(
//         &self,
//         manager: &FormatManager,
//         path: &PathBuf,
//         keys: &KeyCollection,
//     ) -> Result<(), FluxError> {
//         self.create_directories(path)?;
//         if path.exists() {
//             let backup_path = path.with_extension("bak");
//             fs::copy(path, &backup_path)?;
//             // if self.verbosity >= Verbosity::Info {
//             info!("Backup created at {:?}", backup_path);
//             // }
//         }
//         self.overwrite(manager, path, keys).await
//     }
//
//     async fn merge(
//         &self,
//         manager: &FormatManager,
//         path: &PathBuf,
//         keys: &KeyCollection,
//     ) -> Result<(), FluxError> {
//         self.create_directories(path)?;
//         if path.exists() {
//             let existing_keys = manager.load_keys(path, Some(&self.format_field()))?;
//             let merged_keys = self.merge_keys(existing_keys, keys);
//             // if self.verbosity >= Verbosity::Info {
//             info!("Merged content into {:?}", path);
//             // }
//             manager.save_keys(path, &merged_keys, Some(&self.format_field()))?;
//         } else {
//             manager.save_keys(path, keys, Some(&self.format_field()))?;
//         }
//         Ok(())
//     }
//
//     fn merge_keys(&self, existing_keys: KeyCollection, new_keys: &KeyCollection) -> KeyCollection {
//         // Placeholder for actual merge logic
//         let mut merged_keys = existing_keys;
//         for key in new_keys.iter() {
//             merged_keys.upsert(key.clone());
//         }
//         merged_keys
//     }
//
//     fn create_directories(&self, path: &Path) -> io::Result<()> {
//         if let Some(parent) = path.parent() {
//             fs::create_dir_all(parent)?;
//         }
//         Ok(())
//     }
//
//     // fn resolve_path(&self, path: &Path) -> PathBuf {
//     //     // Implement path resolution logic if needed
//     //     path.to_path_buf()
//     // }
// }
//
// #[async_trait]
// #[typetag::serde(name = "file")]
// impl Flux for FileFlux {
//     async fn initialize(&mut self, context: &FluxContext) -> Result<(), FluxError> {
//         info!("self, {:?}", self);
//         // info!("flux_internal, {:?}", self.flux_internal());
//         self.config_dir = context.config_dir().unwrap().to_path_buf();
//         // info!("Fluxed format: {:?}", self.format_field()_field());
//         info!("Fluxed format: {:?}", self.format_field());
//         info!(
//             "Initializing file flux at {:?}",
//             self.resolve_path(&self.path_field())
//         );
//         self.create_directories(&self.resolve_path(&self.path_field()))?;
//         Ok(())
//     }
//
//     async fn finalize(&self, _context: &FluxContext) -> Result<(), FluxError> {
//         // Any cleanup logic if needed
//         Ok(())
//     }
//
//     async fn single(&self, key: &Key) -> Result<(), FluxError> {
//         let manager = FormatManager::read().await;
//         let mut keys = manager.load_keys(&self.path_field(), Some(&self.format_field()))?;
//         keys.upsert(key.clone());
//         self.save_keys(&keys).await
//     }
//
//     async fn batch(&self, context: &FluxContext) -> Result<(), FluxError> {
//         // info!("Batch processing keys, {:?}", context.keys());
//         self.save_keys(context.keys()).await
//     }
//
//     async fn check(&self, _key: &Key) -> Result<Option<String>, FluxError> {
//         Ok(None)
//     }
//
//     async fn revert(&self, _key: &Key) -> Result<(), FluxError> {
//         Ok(())
//     }
// }
