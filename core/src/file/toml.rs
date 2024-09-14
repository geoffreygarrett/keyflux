use std::path::PathBuf;

use async_trait::async_trait;
use lazy_static::lazy_static;
use toml;

use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key_collection::KeyCollection;
use crate::models::named_pattern::NamedPattern;

pub struct TomlAdapter;


lazy_static! {
    static ref FILENAME_PATTERN1: NamedPattern = NamedPattern::new(
        "toml", r"^(.*)\.toml$"
    );
}


#[async_trait]
impl FormatAdapter for TomlAdapter {

    fn format_tag(&self) -> &str {
        "toml"
    }

    fn filename_patterns(&self) -> Vec<&'static NamedPattern> {
        vec![&*FILENAME_PATTERN1]
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

    fn is_valid_content(&self, content: &str) -> bool {
        toml::from_str::<toml::Value>(content).is_ok()
    }
}
