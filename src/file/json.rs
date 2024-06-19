use std::collections::HashMap;
use std::path::PathBuf;
use async_trait::async_trait;
use crate::file::key_collection::KeyCollection;
use crate::error::FluxError;
use serde_json;
use crate::file::format_manager::FormatAdapter;
use crate::file::metadata::extract_file_metadata;

pub struct JsonAdapter;

#[async_trait]
impl FormatAdapter for JsonAdapter {
    fn default_file_name(&self) -> &str {
        "{name}.json"
    }
    fn format_tag(&self) -> &str {
        "json"
    }

    fn path_valid(&self, path: &PathBuf) -> bool {
        path.extension().map_or(false, |ext| ext == "json")
    }

    fn load_keys(&self, path: &PathBuf) -> Result<KeyCollection, FluxError> {
        let contents = std::fs::read_to_string(path)?;
        let keys: KeyCollection = serde_json::from_str(&contents)?;
        Ok(keys)
    }

    fn save_keys(&self, path: &PathBuf, keys: &KeyCollection) -> Result<(), FluxError> {
        let contents = serde_json::to_string_pretty(keys)?;
        std::fs::write(path, contents)?;
        Ok(())
    }
}
