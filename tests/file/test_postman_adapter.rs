// use async_trait::async_trait;
// use std::collections::HashMap;
// use serde::{Deserialize, Serialize};
// use serde_json;
// use uuid::Uuid;
// use chrono::Utc;
// use keyflux::error::FluxError;
use keyflux::file::format_manager::FormatAdapter;
// use keyflux::file::key::Key;
use crate::file::common::get_sample_keys;
use keyflux::file::postman::PostmanAdapter;


// pub struct PostmanAdapter;
//
// #[derive(Serialize, Deserialize, Debug)]
// struct PostmanEnvironment {
//     id: String,
//     name: String,
//     values: Vec<PostmanVariable>,
//     _postman_variable_scope: String,
//     _postman_exported_at: String,
//     _postman_exported_using: String,
// }
//
// #[derive(Serialize, Deserialize, Debug)]
// struct PostmanVariable {
//     key: String,
//     value: String,
//     #[serde(rename = "type")]
//     type_field: String,
//     enabled: bool,
//     description: Option<String>,
//     metadata: Option<HashMap<String, String>>,
//     last_updated: Option<String>,
//     created_at: Option<String>,
//     tags: Option<Vec<String>>,
// }
//
// #[async_trait]
// impl FormatAdapter for PostmanAdapter {
//     fn extension(&self) -> &str {
//         "postman_environment.json"
//     }
//
//     fn load_keys(&self, contents: &str) -> Result<HashMap<String, Key>, FluxError> {
//         let postman_env: PostmanEnvironment = serde_json::from_str(contents).map_err(FluxError::from)?;
//         let mut map = HashMap::new();
//         for variable in postman_env.values {
//             map.insert(variable.key.clone(), Key {
//                 name: variable.key,
//                 value: variable.value,
//                 description: variable.description,
//                 enabled: variable.enabled,
//                 metadata: variable.metadata,
//                 last_updated: variable.last_updated,
//                 created_at: variable.created_at,
//                 tags: variable.tags,
//             });
//         }
//         Ok(map)
//     }
//
//     fn save_keys(&self, keys: &HashMap<String, Key>) -> Result<String, FluxError> {
//         let postman_env = PostmanEnvironment {
//             id: Uuid::new_v4().to_string(),
//             name: "Generated Environment".to_string(),
//             values: keys
//                 .iter()
//                 .map(|(_, key)| PostmanVariable {
//                     key: key.name.clone(),
//                     value: key.value.clone(),
//                     type_field: "default".to_string(),
//                     enabled: key.enabled,
//                     description: key.description.clone(),
//                     metadata: key.metadata.clone(),
//                     last_updated: key.last_updated.clone(),
//                     created_at: key.created_at.clone(),
//                     tags: key.tags.clone(),
//                 })
//                 .collect(),
//             _postman_variable_scope: "environment".to_string(),
//             _postman_exported_at: Utc::now().to_rfc3339(),
//             _postman_exported_using: "keyflux".to_string(),
//         };
//
//         serde_json::to_string_pretty(&postman_env).map_err(FluxError::from)
//     }
// }

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_load_keys_postman() {
        let contents = r#"
        {
            "id": "4cea2f79-3df2-447c-aa82-a8b07fc723c3",
            "name": "nsri-db-local",
            "values": [
                {
                    "key": "KEY1",
                    "value": "VALUE1",
                    "type": "default",
                    "enabled": true,
                    "description": "Description for KEY1",
                    "metadata": null,
                    "last_updated": "2024-06-16T15:16:47.567Z",
                    "created_at": "2024-06-16T15:16:47.567Z",
                    "tags": ["tag1", "tag2"]
                },
                {
                    "key": "KEY2",
                    "value": "VALUE2",
                    "type": "default",
                    "enabled": false,
                    "description": null,
                    "metadata": {
                        "meta": "data"
                    },
                    "last_updated": null,
                    "created_at": null,
                    "tags": null
                }
            ],
            "_postman_variable_scope": "environment",
            "_postman_exported_at": "2024-06-16T15:16:47.567Z",
            "_postman_exported_using": "Postman/10.24.25"
        }
        "#;
        let adapter = PostmanAdapter;
        let keys = adapter.load_keys(contents).unwrap();

        assert_eq!(keys.len(), 2);
        assert_eq!(keys["KEY1"].value, "VALUE1");
        assert_eq!(keys["KEY2"].value, "VALUE2");
    }

    #[test]
    fn test_save_keys_postman() {
        let keys = get_sample_keys();
        let adapter = PostmanAdapter;
        let result = adapter.save_keys(&keys).unwrap();

        assert!(result.contains("\"key\": \"KEY1\""));
        assert!(result.contains("\"value\": \"VALUE1\""));
        assert!(result.contains("\"key\": \"KEY2\""));
        assert!(result.contains("\"value\": \"VALUE2\""));
    }
}
