// use std::path::{Path, PathBuf};
//
// use crate::file::key_collection::KeyCollection;
// use keyflux_common::prelude::*;
//
// #[derive(Debug, serde::Serialize, serde::Deserialize)]
// pub struct FluxContext {
//     config_path: PathBuf,
//     handlebars: Handlebars,
// }
//
//
// impl FluxContext {
//     pub fn new(path: &PathBuf, keys: KeyCollection) -> Self {
//         Self {
//             config_path: path.clone(),
//             keys,
//         }
//     }
//
//     pub fn config_dir(&self) -> Option<&Path> {
//         self.config_path.parent()
//     }
//
//     pub fn config_path(&self) -> &PathBuf {
//         &self.config_path
//     }
//
//     pub fn keys(&self) -> &KeyCollection {
//         &self.keys
//     }
//
//     pub fn keys_mut(&mut self) -> &mut KeyCollection {
//         &mut self.keys
//     }
// }
//
// // In your main project or a common crate, define the internal trait
// // pub trait FluxInner {
// //     fn set_inner_value(&mut self, inner: Value);
// // }
//
// // use std::path::PathBuf;
// //
// // #[derive(Clone)]
// // pub struct FluxContext {
// //     pub config_path: PathBuf,
// // }
//
// // pub trait FluxInternal {
// //     fn set_context(&mut self, context: FluxContext);
// // }
