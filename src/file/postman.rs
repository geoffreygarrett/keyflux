use async_trait::async_trait;
use std::collections::{HashMap};
use std::path::PathBuf;
use serde::{Deserialize, Serialize};
use serde_json;
use uuid::Uuid;
use chrono::Utc;
use serde_json::Value;
use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key::{Key, KeyDetail, KeyTransform};
use crate::file::key_collection::{KeyCollection, KeyCollectionMap, KeyCollectionTransform};

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
struct PostmanVariable {
    key: String,
    value: String,
    #[serde(rename = "type")]
    type_field: String,
    enabled: bool,
    description: Option<String>,
    metadata: Option<HashMap<String, Value>>,
    last_updated: Option<String>,
    created_at: Option<String>,
    tags: Option<Vec<String>>,
}

#[async_trait]
impl FormatAdapter for PostmanAdapter {

    fn format_tag(&self) -> &str {
        "postman"
    }
    fn default_file_name(&self) -> &str {
        "{name}.json"
    }

    // fn default_file_name(&self) -> &str {
    //     ".env.{name}"
    // }


    fn path_valid(&self, path: &PathBuf) -> bool {
        PathBuf::from(path).extension().map_or(false, |ext| ext == "json")
    }

    fn load_keys(&self, path: &PathBuf) -> Result<KeyCollection, FluxError> {
        let contents = std::fs::read_to_string(path)?;
        let postman_env: PostmanEnvironment = serde_json::from_str(&contents).map_err(FluxError::from)?;
        let mut map = KeyCollectionMap::new();
        for variable in postman_env.values {
            map.insert(variable.key.clone(), Key::KeyDetail(KeyDetail {
                name: variable.key,
                value: variable.value,
                description: variable.description,
                enabled: variable.enabled,
                metadata: variable.metadata,
                last_updated: variable.last_updated,
                created_at: variable.created_at,
                tags: variable.tags,
            }));
        }
        Ok(KeyCollection::Map(map))
    }

    fn save_keys(&self, path: &PathBuf, keys: &KeyCollection) -> Result<(), FluxError> {
        // let map: KeyCollection = match keys {
        //     KeyCollection::Map(map) => map.to_key_detail_collection(),
        //     KeyCollection::List(list) => {
        //         list.iter()
        //             .filter_map(|key| match key {
        //                 Key::KeyDetail(detail) => Some((detail.name.clone(), detail.clone())),
        //                 _ => None,
        //             })
        //             .collect()
        //     }
        // };

        let postman_env = PostmanEnvironment {
            id: Uuid::new_v4().to_string(),
            name: "Generated Environment".to_string(),
            values: keys.to_key_detail_collection().iter().map(|(name, key)| {
                let detail = key.to_key_detail(Some(&name));
                PostmanVariable {
                    key: detail.name,
                    value: detail.value,
                    type_field: "default".to_string(),
                    enabled: detail.enabled,
                    description: detail.description,
                    metadata: detail.metadata,
                    last_updated: detail.last_updated,
                    created_at: detail.created_at,
                    tags: detail.tags,
                }
            }).collect(),
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
}
