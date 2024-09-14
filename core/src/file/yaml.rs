use std::path::PathBuf;

use async_trait::async_trait;
use lazy_static::lazy_static;
use serde_yaml;

use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key_collection::KeyCollection;
use crate::models::named_pattern::NamedPattern;

pub struct YamlAdapter;

lazy_static! {
    static ref FILENAME_PATTERN1: NamedPattern = NamedPattern::new(
        "yaml", r"^(.*)\.yaml$"
    );
}

#[async_trait]
impl FormatAdapter for YamlAdapter {

    fn format_tag(&self) -> &str {
        "yaml"
    }

    fn is_valid_content(&self, content: &str) -> bool {
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

    fn filename_patterns(&self) -> Vec<&'static NamedPattern> {
        vec![&*FILENAME_PATTERN1]
    }
}
