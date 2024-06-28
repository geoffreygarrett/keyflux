use crate::file::key_collection::KeyCollection;
use crate::flux::replace_vars_in_json;
use crate::traits::Flux;
use serde::Deserialize;
use std::path::{Path, PathBuf};
use serde_json::Value;
use typetag::__private::erased_serde::Serialize;

#[derive(Debug, serde::Serialize, serde::Deserialize)]
pub struct FluxContext {
    config_path: PathBuf,
    keys: KeyCollection,
}

impl FluxContext {
    pub fn new(path: &PathBuf, keys: KeyCollection) -> Self {
        Self {
            config_path: path.clone(),
            keys,
        }
    }

    pub fn config_dir(&self) -> Option<&Path> {
        self.config_path.parent()
    }

    pub fn config_path(&self) -> &PathBuf {
        &self.config_path
    }

    pub fn keys(&self) -> &KeyCollection {
        &self.keys
    }

    pub fn keys_mut(&mut self) -> &mut KeyCollection {
        &mut self.keys
    }
}

pub trait Fluxed<F: Flux> {
    fn flux(&self) -> &F;
}

// In your main project or a common crate, define the internal trait
pub trait FluxInner {
    fn set_inner_value(&mut self, inner: Value);



    // fn set_internal_from_value(&mut self, value: Value);

    // fn set_context(&mut self, context: &FluxContext);
    //
    // fn context(&self) -> &FluxContext;

    // fn config_path(&self) -> &Path {
    //     &self.context().config_path
    // }
    // fn resolve_path(&self, path: &PathBuf) -> PathBuf {
    //     if path.is_absolute() {
    //         path.clone()
    //     } else {
    //         self.config_path().parent().unwrap().join(path)
    //     }
    // }
    // fn replace_vars(&self, value: &str) -> String {
    //     let regex = regex::Regex::new(r"\$\{(\w+)\}").unwrap();
    //     let mut result = value.to_string();
    //
    //     for caps in regex.captures_iter(value) {
    //         if let Some(var_name) = caps.get(1) {
    //             if let Ok(var_value) = std::env::var(var_name.as_str()) {
    //                 result = result.replace(&caps[0], &var_value);
    //             }
    //         }
    //     }
    //
    //     result
    // }
}

// use std::path::PathBuf;
//
// #[derive(Clone)]
// pub struct FluxContext {
//     pub config_path: PathBuf,
// }

// pub trait FluxInternal {
//     fn set_context(&mut self, context: FluxContext);
// }
