use serde::{Deserialize, Serialize};
use std::cmp::Ordering;
use std::collections::HashMap;
// use diff::Diff;
use regex::Regex;
use serde_json::Value;
use crate::traits::Flux;


impl Eq for Box<dyn Flux> {}
impl PartialEq for Box<dyn Flux> {
    fn eq(&self, other: &Self) -> bool {
        serde_json::to_string(self).unwrap() == serde_json::to_string(other).unwrap()
    }
}

impl Ord for Box<dyn Flux> {
    fn cmp(&self, _other: &Self) -> Ordering {
        Ordering::Equal
    }
}

impl PartialOrd for Box<dyn Flux> {
    fn partial_cmp(&self, _other: &Self) -> Option<Ordering> {
        Some(Ordering::Equal)
    }
}

impl Clone for Box<dyn Flux> {
    fn clone(&self) -> Self {
        serde_json::from_str(&serde_json::to_string(self).unwrap()).unwrap()
    }
}

/// `KeyDetail` represents a detailed key with multiple attributes.
#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
pub struct KeyDetail {
    pub name: String,
    pub value: String,
    pub description: Option<String>,
    pub enabled: bool,
    pub metadata: Option<HashMap<String, Value>>,
    pub last_updated: Option<String>,
    pub created_at: Option<String>,
    pub tags: Option<Vec<String>>,
    // #[serde(flatten)]
    pub input: Option<HashMap<String, Value>>,

}

impl Ord for KeyDetail {
    fn cmp(&self, other: &Self) -> Ordering {
        self.name
            .cmp(&other.name)
            .then_with(|| self.value.cmp(&other.value))
    }
}

impl PartialOrd for KeyDetail {
    fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
        Some(self.cmp(other))
    }
}

//
// pub enum ValueEnum {
//     String(String),
//     Template(String),
// }

/// `KeyValue` represents a simple key-value pair.
#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, PartialOrd, Ord)]
pub struct KeyValue {
    pub name: String,
    pub value: String,
}

/// `Key` is an enum that can hold different types of key representations.
#[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, PartialOrd, Ord)]
#[serde(untagged)]
pub enum Key {
    Value(String),
    KeyDetail(KeyDetail),
    KeyValue(KeyValue),
}

// Define a trait for common key functionality
// trait KeyTrait {
//     fn key(&self) -> String;
//     fn value(&self) -> String;
// }

// impl KeyTrait for KeyDetail {
//     fn key(&self) -> String { self.name.clone() }
//     fn value(&self) -> String { self.value.clone() }
// }
//
// impl KeyTrait for KeyValue {
//     fn key(&self) -> String { self.name.clone() }
//     fn value(&self) -> String { self.value.clone() }
// }

impl Key {
    // pub fn input(&self) -> Option<Value> {
    //     match self {
    //         Key::Value(_) => None,
    //         Key::KeyDetail(detail) => detail.input,
    //         Key::KeyValue(_) => None,
    //     }
    // }
    pub fn name(&self) -> String {
        match self {
            Key::Value(_) => panic!("Key::name() called on Key::Value"),
            Key::KeyDetail(detail) => detail.name.clone(),
            Key::KeyValue(kv) => kv.name.clone(),
        }
    }

    pub fn value(&self) -> String {
        match self {
            Key::Value(value) => value.clone(),
            Key::KeyDetail(detail) => detail.value.clone(),
            Key::KeyValue(kv) => kv.value.clone(),
        }
    }

    pub fn enabled(&self) -> bool {
        match self {
            Key::Value(_) => true,
            Key::KeyDetail(detail) => detail.enabled,
            Key::KeyValue(_) => true,
        }
    }

    pub fn description(&self) -> Option<String> {
        match self {
            Key::Value(_) => None,
            Key::KeyDetail(detail) => detail.description.clone(),
            Key::KeyValue(_) => None,
        }
    }

    pub fn metadata(&self) -> Option<&HashMap<String, Value>> {
        match self {
            Key::Value(_) => None,
            Key::KeyDetail(detail) => detail.metadata.as_ref(),
            Key::KeyValue(_) => None,
        }
    }

    pub fn last_updated(&self) -> Option<&str> {
        match self {
            Key::Value(_) => None,
            Key::KeyDetail(detail) => detail.last_updated.as_deref(),
            Key::KeyValue(_) => None,
        }
    }

    pub fn from_key_detail(detail: KeyDetail) -> Key {
        Key::KeyDetail(detail)
    }

    pub fn from_key_value(kv: KeyValue) -> Key {
        Key::KeyValue(kv)
    }

    pub fn has_shell_placeholder(&self) -> bool {
        let re = Regex::new(r"\$\{[^\}]+\}").unwrap();
        match self {
            Key::Value(value) => re.is_match(value),
            Key::KeyDetail(detail) => re.is_match(&detail.value),
            Key::KeyValue(kv) => re.is_match(&kv.value),
        }
    }

    pub fn with_value(&mut self, value: String) {
        match self {
            Key::Value(v) => *v = value,
            Key::KeyDetail(detail) => detail.value = value,
            Key::KeyValue(kv) => kv.value = value,
        }
    }

    pub fn replace_shell_vars(&mut self, context: &HashMap<String, String>) {
        let re = Regex::new(r"\$\{[^\}]+\}").unwrap();

        let mut replace_fn = |caps: &regex::Captures| {
            let key = &caps[0][2..caps[0].len() - 1];
            context
                .get(key)
                .cloned()
                .unwrap_or_else(|| caps[0].to_string())
        };

        let replace_recursively = |value: &mut String| {
            while re.is_match(value) {
                *value = re.replace_all(value, &replace_fn).to_string();
            }
        };

        match self {
            Key::Value(value) => replace_recursively(value),
            Key::KeyDetail(detail) => replace_recursively(&mut detail.value),
            Key::KeyValue(kv) => replace_recursively(&mut kv.value),
        }
    }
}

/// `KeyTransform` is a trait for transforming keys between different representations.
pub trait KeyTransform {
    fn to_key_detail(&self, name: Option<&str>) -> KeyDetail;
    fn to_key_value(&self) -> KeyValue;
    fn to_value(&self) -> String;
}

impl KeyTransform for KeyDetail {
    fn to_key_detail(&self, _name: Option<&str>) -> KeyDetail {
        self.clone()
    }

    fn to_key_value(&self) -> KeyValue {
        KeyValue {
            name: self.name.clone(),
            value: self.value.clone(),
        }
    }

    fn to_value(&self) -> String {
        self.value.clone()
    }
}

impl KeyTransform for KeyValue {
    fn to_key_detail(&self, _name: Option<&str>) -> KeyDetail {
        KeyDetail {
            name: self.name.clone(),
            value: self.value.clone(),
            description: None,
            enabled: true,
            input: None,
            metadata: None,
            last_updated: None,
            created_at: None,
            tags: None,
        }
    }

    fn to_key_value(&self) -> KeyValue {
        self.clone()
    }

    fn to_value(&self) -> String {
        self.value.clone()
    }
}

impl KeyTransform for Key {
    fn to_key_detail(&self, name: Option<&str>) -> KeyDetail {
        match self {
            Key::Value(value) => KeyDetail {
                name: name.unwrap_or("").to_string(),
                value: value.clone(),
                description: None,
                enabled: true,
                input: None,
                metadata: None,
                last_updated: None,
                created_at: None,
                tags: None,
            },
            Key::KeyDetail(detail) => detail.clone(),
            Key::KeyValue(kv) => kv.to_key_detail(None),
        }
    }

    fn to_key_value(&self) -> KeyValue {
        match self {
            Key::Value(value) => KeyValue {
                name: "".to_string(),
                value: value.clone(),
            },
            Key::KeyDetail(detail) => KeyValue {
                name: detail.name.clone(),
                value: detail.value.clone(),
            },
            Key::KeyValue(kv) => kv.clone(),
        }
    }

    fn to_value(&self) -> String {
        match self {
            Key::Value(value) => value.clone(),
            Key::KeyDetail(detail) => detail.value.clone(),
            Key::KeyValue(kv) => kv.value.clone(),
        }
    }
}
