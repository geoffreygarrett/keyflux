use std::path::PathBuf;

use async_trait::async_trait;
use lazy_static::lazy_static;
use serde_json;

use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key_collection::{KeyCollection, KeyCollectionTransform};
use crate::models::named_pattern::NamedPattern;

pub struct JsonAdapter;

lazy_static! {
    static ref FILENAME_PATTERN1: NamedPattern = NamedPattern::new(
        "json", r"^(.*)\.json$"
    );
    static ref FILENAME_PATTERN2: NamedPattern = NamedPattern::new(
        "jsonc", r"^(.*)\.jsonc$"
    );
    static ref FILENAME_PATTERN3: NamedPattern = NamedPattern::new(
        "jsonl", r"^(.*)\.jsonl$"
    );
}


#[async_trait]
impl FormatAdapter for JsonAdapter {

    fn format_tag(&self) -> &str {
        "json"
    }

    fn filename_patterns(&self) -> Vec<&'static NamedPattern> {
        vec![&*FILENAME_PATTERN1, &*FILENAME_PATTERN2, &*FILENAME_PATTERN3]
    }


    fn load_keys(&self, path: &PathBuf) -> Result<KeyCollection, FluxError> {
        let contents = std::fs::read_to_string(path)?;
        let keys: KeyCollection = serde_json::from_str(&contents)?;
        Ok(keys)
    }
    fn save_keys(&self, path: &PathBuf, keys: &KeyCollection) -> Result<(), FluxError> {
        let contents = serde_json::to_string_pretty(&keys.to_value_collection())?;
        std::fs::write(path, contents)?;
        Ok(())
    }
    fn is_valid_content(&self, content: &str) -> bool {
        serde_json::from_str::<serde_json::Value>(content).is_ok()
    }
}
