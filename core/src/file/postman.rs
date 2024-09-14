use std::collections::HashMap;
use std::path::PathBuf;

use async_trait::async_trait;
use chrono::Utc;
use lazy_static::lazy_static;
use serde::{Deserialize, Serialize};
use serde_json;
use serde_json::Value;
use uuid::Uuid;

use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key_collection::{KeyCollection, KeyCollectionTransform};
use crate::key::{Key, KeyDetail, KeyTransform};
use crate::models::named_pattern::NamedPattern;

pub struct PostmanAdapter;

#[derive(Serialize, Deserialize, Debug)]
struct PostmanEnvironment {
    id: String,
    name: String,
    values: Vec<PostmanVariable>,
    _postman_variable_scope: String,
    _postman_exported_at: String,
    _postman_exported_using: String,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "lowercase")]
pub enum PostmanVariableType {
    Default,
    Secret,
}

#[derive(Serialize, Deserialize, Debug)]
struct PostmanVariable {
    key: String,
    value: String,
    #[serde(rename = "type")]
    type_field: PostmanVariableType,
    enabled: bool,
    description: Option<String>,
    metadata: Option<HashMap<String, Value>>,
    last_updated: Option<String>,
    created_at: Option<String>,
    tags: Option<Vec<String>>,
}

lazy_static! {
    static ref FILENAME_PATTERN1: NamedPattern = NamedPattern::new(
        "toml", r"^(.*)\.toml$"
    );
}

#[async_trait]
impl FormatAdapter for PostmanAdapter {
    fn format_tag(&self) -> &str {
        "postman"
    }


    fn load_keys(&self, path: &PathBuf) -> Result<KeyCollection, FluxError> {
        let contents = std::fs::read_to_string(path)?;
        let postman_env: PostmanEnvironment =
            serde_json::from_str(&contents).map_err(FluxError::from)?;
        let mut map = KeyCollection::new();
        for variable in postman_env.values {
            map.insert(Key::KeyDetail(KeyDetail {
                name: variable.key,
                value: variable.value,
                description: variable.description,
                enabled: variable.enabled,
                input: None,
                metadata: variable.metadata,
                last_updated: variable.last_updated,
                created_at: variable.created_at,
                tags: variable.tags,
            }));
        }
        Ok(map)
    }

    fn save_keys(&self, path: &PathBuf, keys: &KeyCollection) -> Result<(), FluxError> {
        let postman_env = PostmanEnvironment {
            id: Uuid::new_v4().to_string(),
            name: "Generated Environment".to_string(),
            values: keys
                .to_key_detail_collection()
                .iter()
                .map(|key| {
                    let detail = key.to_key_detail(Some(&key.name()));
                    PostmanVariable {
                        key: detail.name,
                        value: detail.value,
                        type_field: PostmanVariableType::Default,
                        enabled: detail.enabled,
                        description: detail.description,
                        metadata: detail.metadata,
                        last_updated: detail.last_updated,
                        created_at: detail.created_at,
                        tags: detail.tags,
                    }
                })
                .collect(),
            _postman_variable_scope: "environment".to_string(),
            _postman_exported_at: Utc::now().to_rfc3339(),
            _postman_exported_using: "keyflux".to_string(),
        };

        let result = serde_json::to_string_pretty(&postman_env).map_err(FluxError::from)?;
        std::fs::write(path, result.clone())?;
        Ok(())
    }

    fn can_handle(&self, path: &PathBuf) -> bool {
        path.extension().map_or(false, |ext| ext == "json")
    }

    fn filename_patterns(&self) -> Vec<&'static NamedPattern> {
        vec![&*FILENAME_PATTERN1]
    }

    fn is_valid_content(&self, content: &str) -> bool {
        serde_json::from_str::<PostmanEnvironment>(content).is_ok()
    }
}
