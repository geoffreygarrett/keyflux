use std::collections::HashMap;

use keyflux::key::{Key, KeyDetail};

pub fn get_sample_keys() -> HashMap<String, Key> {
    let mut keys = HashMap::new();
    keys.insert(
        "KEY1".to_string(),
        Key::KeyDetail(KeyDetail {
            name: "KEY1".to_string(),
            value: "VALUE1".to_string(),
            description: Some("Description for KEY1".to_string()),
            enabled: true,
            metadata: None,
            last_updated: Some("2024-06-16T15:16:47.567Z".to_string()),
            created_at: Some("2024-06-16T15:16:47.567Z".to_string()),
            tags: Some(vec!["tag1".to_string(), "tag2".to_string()]),
            input: None,
        }),
    );
    keys.insert(
        "KEY2".to_string(),
        Key::KeyDetail(KeyDetail {
            name: "KEY2".to_string(),
            value: "VALUE2".to_string(),
            description: None,
            enabled: false,
            metadata: None,
            last_updated: None,
            created_at: None,
            tags: None,
            input: None,
        },
        );
    keys
}
