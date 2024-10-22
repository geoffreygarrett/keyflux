use std::path::PathBuf;

use async_trait::async_trait;
use serde_yaml;

use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key_collection::KeyCollection;

pub struct YamlAdapter;

#[async_trait]
impl FormatAdapter for YamlAdapter {
    fn default_file_name(&self) -> &str {
        "{name}.yaml"
    }
    fn format_tag(&self) -> &str {
        "yaml"
    }
    fn path_valid(&self, path: &PathBuf) -> bool {
        PathBuf::from(path)
            .extension()
            .map_or(false, |ext| ext == "yaml" || ext == "yml")
    }

    fn content_valid(&self, content: &str) -> bool {
        serde_yaml::from_str::<serde_yaml::Value>(content).is_ok()
    }

    fn load_keys(&self, path: &PathBuf) -> Result<KeyCollection, FluxError> {
        let contents = std::fs::read_to_string(path)?;
        serde_yaml::from_str(&contents).map_err(FluxError::from)
    }

    fn save_keys(&self, path: &PathBuf, keys: &KeyCollection) -> Result<(), FluxError> {
        let contents = serde_yaml::to_string(keys).map_err(FluxError::from)?;
        std::fs::write(path, contents.as_bytes())?;
        Ok(())
    }
}
