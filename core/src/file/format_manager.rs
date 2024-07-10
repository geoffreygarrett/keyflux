use std::collections::HashMap;
use std::path::PathBuf;

use async_trait::async_trait;
use lazy_static::lazy_static;
use regex::Regex;
use tokio::sync::{RwLock, RwLockReadGuard, RwLockWriteGuard};

use crate::error::FluxError;
use crate::file::env::EnvAdapter;
use crate::file::json::JsonAdapter;
use crate::file::key_collection::KeyCollection;
use crate::file::postman::PostmanAdapter;
use crate::file::toml::TomlAdapter;
use crate::file::yaml::YamlAdapter;

type GlobalFormatManager = RwLock<FormatManager>;

lazy_static! {
    /// Global instance of FormatManager using lazy_static and RwLock for thread safety.
    ///
    /// This instance is used to manage different format adapters for loading and saving key collections.
    static ref FORMAT_MANAGER: GlobalFormatManager = RwLock::new(FormatManager::new());
}

pub async fn with_format_manager_mut<F, T>(f: F) -> Result<T, FluxError>
where
    F: FnOnce(&mut FormatManager) -> Result<T, FluxError>,
{
    let mut format_manager = FORMAT_MANAGER.write().await;
    let result = f(&mut format_manager)?;
    Ok(result)
}

pub struct Placeholder;

impl Placeholder {
    fn extract_placeholders(pattern: &str) -> Vec<String> {
        let re = Regex::new(r"\{(\w+)}").unwrap();
        re.captures_iter(pattern)
            .map(|cap| cap[1].to_string())
            .collect()
    }

    fn replace_placeholders(
        pattern: &str,
        variables: &HashMap<&str, &str>,
    ) -> Result<String, String> {
        let mut result = pattern.to_string();

        for (key, value) in variables {
            let regex_pattern = format!(r"\{{{}\}}", key);
            let re = Regex::new(&regex_pattern).unwrap();
            result = re.replace_all(&result, *value).to_string();
        }

        // Ensure all placeholders are replaced
        if Regex::new(r"\{(\w+)\}").unwrap().is_match(&result) {
            return Err("Not all placeholders were replaced".into());
        }

        Ok(result)
    }
}

/// Trait for format adapters to handle different file formats.
#[async_trait]
pub trait FormatAdapter {
    /// Checks if the adapter can handle the specified file path.
    fn default_file_name(&self) -> &str;

    /// Checks if the adapter can handle the specified file path.
    fn format_tag(&self) -> &str;

    /// Checks if the adapter can handle the specified file path.
    fn path_valid(&self, path: &PathBuf) -> bool;

    /// Loads keys from a file using this adapter.
    fn load_keys(&self, path: &PathBuf) -> Result<KeyCollection, FluxError>;

    /// Saves keys to a file using this adapter.
    fn save_keys(&self, path: &PathBuf, keys: &KeyCollection) -> Result<(), FluxError>;

    /// Priority of the adapter, higher values indicate higher priority.
    fn priority(&self) -> i32 {
        0 // Default priority is 0, can be overridden by specific adapters.
    }
    fn can_handle(&self, path: &PathBuf) -> bool {
        self.path_valid(path)
    }
    fn content_valid(&self, content: &str) -> bool {
        false
    }
    // fn filename_formats(&self) -> Vec<&str>;
}

/// Manages different format adapters for loading and saving key collections.
pub struct FormatManager {
    adapters: Vec<Box<dyn FormatAdapter + Send + Sync>>,
}

impl FormatManager {
    /// Creates a new FormatManager instance with registered adapters.
    pub fn new() -> Self {
        let mut adapters: Vec<Box<dyn FormatAdapter + Send + Sync>> = Vec::new();
        adapters.push(Box::new(EnvAdapter));
        adapters.push(Box::new(JsonAdapter));
        adapters.push(Box::new(YamlAdapter));
        adapters.push(Box::new(TomlAdapter));
        adapters.push(Box::new(PostmanAdapter));

        // Sort adapters by priority (higher priority first)
        adapters.sort_by_key(|a| a.priority());

        FormatManager { adapters }
    }

    pub async fn read() -> RwLockReadGuard<'static, FormatManager> {
        FORMAT_MANAGER.read().await
    }

    pub async fn write() -> RwLockWriteGuard<'static, FormatManager> {
        FORMAT_MANAGER.write().await
    }

    pub fn get_new_file_name(&self, extension: &str, file_name: Option<&str>) -> String {
        let adapter = self
            .adapters
            .iter()
            .find(|adapter| adapter.format_tag().contains(extension))
            .unwrap();
        // let adapter = self.adapters.iter().find(|adapter| adapter.default_file_name().contains(extension)).unwrap();
        let pattern = adapter.default_file_name();
        let placeholders = Placeholder::extract_placeholders(pattern);
        let mut variables = HashMap::new();
        variables.insert("name", file_name.unwrap_or("default"));
        Placeholder::replace_placeholders(pattern, &variables).unwrap()
    }

    /// Retrieves the appropriate adapter based on file path.
    pub fn get_adapter_by_path(
        &self,
        path: &PathBuf,
    ) -> Option<&Box<dyn FormatAdapter + Send + Sync>> {
        self.adapters
            .iter()
            .find(|adapter| adapter.can_handle(path))
    }

    /// Retrieves the appropriate adapter based on file content.
    pub fn get_adapter_by_content(
        &self,
        content: &str,
    ) -> Option<&Box<dyn FormatAdapter + Send + Sync>> {
        self.adapters
            .iter()
            .find(|adapter| adapter.content_valid(content))
    }

    pub fn get_adapter_by_tag(&self, tag: &str) -> Option<&Box<dyn FormatAdapter + Send + Sync>> {
        self.adapters
            .iter()
            .find(|adapter| adapter.format_tag() == tag)
    }

    /// Loads keys from a file using the appropriate adapter.
    pub fn load_keys(&self, path: &PathBuf, fmt: Option<&str>) -> Result<KeyCollection, FluxError> {
        let adapter = self.get_adapter_by_path(path).ok_or_else(|| {
            FluxError::UnsupportedFormat(format!(
                "Unsupported format for file: {}",
                path.to_str().unwrap()
            ))
        })?;
        let keys = adapter.load_keys(path);
        Ok(keys.unwrap())
    }

    pub fn parse_keys(&self, content: &str) -> Result<KeyCollection, FluxError> {
        let adapter = self.get_adapter_by_tag("env").ok_or_else(|| {
            FluxError::UnsupportedFormat("Unsupported format: env".into())
        })?;
        let keys = adapter.load_keys(&PathBuf::new());
        Ok(keys.unwrap())
    }

    /// Saves keys to a file using the appropriate adapter.
    // TODO: Add support for specifying name of file via templates and regexing to get name etc.
    pub fn save_keys(
        &self,
        path: &PathBuf,
        keys: &KeyCollection,
        fmt: Option<&str>,
    ) -> Result<(), FluxError> {
        match fmt {
            Some(fmt) => {
                let adapter = self.get_adapter_by_tag(fmt).ok_or_else(|| {
                    FluxError::UnsupportedFormat(format!("Unsupported format: {}", fmt))
                })?;
                adapter.save_keys(path, keys)
            }
            None => {
                let adapter = self.get_adapter_by_path(path).ok_or_else(|| {
                    FluxError::UnsupportedFormat(format!(
                        "Unsupported format for file: {}",
                        path.to_str().unwrap()
                    ))
                })?;
                adapter.save_keys(path, keys)
            }
        }
    }

    pub fn acquire_manager<R, F>(&self, f: F) -> Result<R, FluxError>
    where
        F: FnOnce(&FormatManager) -> Result<R, FluxError>,
    {
        let manager = self;
        f(manager)
    }
}
