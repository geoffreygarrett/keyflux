use std::path::PathBuf;

use async_trait::async_trait;
use toml;

use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key_collection::KeyCollection;

pub struct TomlAdapter;

#[async_trait]
impl FormatAdapter for TomlAdapter {
    fn default_file_name(&self) -> &str {
        "{name}.toml"
    }

    fn format_tag(&self) -> &str {
        "toml"
    }

    fn path_valid(&self, path: &PathBuf) -> bool {
        PathBuf::from(path)
            .extension()
            .map_or(false, |ext| ext == "toml")
    }
    fn load_keys(&self, path: &PathBuf) -> Result<KeyCollection, FluxError> {
        let contents = std::fs::read_to_string(path)?;
        toml::from_str(&contents).map_err(FluxError::from)
    }

    fn save_keys(&self, path: &PathBuf, keys: &KeyCollection) -> Result<(), FluxError> {
        let contents = toml::to_string_pretty(keys).map_err(FluxError::from)?;
        std::fs::write(path, contents.as_bytes())?;
        Ok(())
    }
}
