// use std::cmp::Ordering;
// use serde::{Deserialize, Serialize};
// use std::collections::HashMap;
// use serde_json::Value;
//
// /// `KeyDetail` represents a detailed key with multiple attributes.
// #[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq)]
// pub struct KeyDetail {
//     pub name: String,
//     pub value: String,
//     pub description: Option<String>,
//     pub enabled: bool,
//     pub metadata: Option<HashMap<String, Value>>,
//     pub last_updated: Option<String>,
//     pub created_at: Option<String>,
//     pub tags: Option<Vec<String>>,
// }
//
//
// impl Ord for KeyDetail {
//     fn cmp(&self, other: &Self) -> Ordering {
//         self.name.cmp(&other.name).then_with(|| self.value.cmp(&other.value))
//     }
// }
//
// impl PartialOrd for KeyDetail {
//     fn partial_cmp(&self, other: &Self) -> Option<Ordering> {
//         Some(self.cmp(other))
//     }
// }
//
// /// `KeyValue` represents a simple key-value pair.
// #[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, PartialOrd, Ord)]
// pub struct KeyValue {
//     pub name: String,
//     pub value: String,
// }
//
// /// `Key` is an enum that can hold different types of key representations.
// #[derive(Debug, Clone, Serialize, Deserialize, PartialEq, Eq, PartialOrd, Ord)]
// #[serde(untagged)]
// pub enum Key {
//     Value(String),
//     KeyDetail(KeyDetail),
//     KeyValue(KeyValue),
// }
//
// impl Key {
//     pub fn key(&self) -> String {
//         match self {
//             Key::Value(value) => value.clone(),
//             Key::KeyDetail(detail) => detail.name.clone(),
//             Key::KeyValue(kv) => kv.name.clone(),
//         }
//     }
//
//     pub fn value(&self) -> String {
//         match self {
//             Key::Value(value) => value.clone(),
//             Key::KeyDetail(detail) => detail.value.clone(),
//             Key::KeyValue(kv) => kv.value.clone(),
//         }
//     }
//
//     pub fn enabled(&self) -> bool {
//         match self {
//             Key::Value(_) => true,
//             Key::KeyDetail(detail) => detail.enabled,
//             Key::KeyValue(_) => true,
//         }
//     }
// }
//
// /// `KeyTransform` is a trait for transforming keys between different representations.
// pub trait KeyTransform {
//     fn to_key_detail(&self, name: Option<&str>) -> KeyDetail;
//     fn to_key_value(&self) -> KeyValue;
//     fn to_value(&self) -> String;
// }
//
// impl KeyTransform for KeyDetail {
//     fn to_key_detail(&self, _name: Option<&str>) -> KeyDetail {
//         self.clone()
//     }
//
//     fn to_key_value(&self) -> KeyValue {
//         KeyValue {
//             name: self.name.clone(),
//             value: self.value.clone(),
//         }
//     }
//
//     fn to_value(&self) -> String {
//         self.value.clone()
//     }
// }
//
// impl KeyTransform for KeyValue {
//     fn to_key_detail(&self, _name: Option<&str>) -> KeyDetail {
//         KeyDetail {
//             name: self.name.clone(),
//             value: self.value.clone(),
//             description: None,
//             enabled: true,
//             metadata: None,
//             last_updated: None,
//             created_at: None,
//             tags: None,
//         }
//     }
//
//     fn to_key_value(&self) -> KeyValue {
//         self.clone()
//     }
//
//     fn to_value(&self) -> String {
//         self.value.clone()
//     }
// }
//
// impl KeyTransform for Key {
//     fn to_key_detail(&self, name: Option<&str>) -> KeyDetail {
//         match self {
//             Key::Value(value) => KeyDetail {
//                 name: name.unwrap_or("").to_string(),
//                 value: value.clone(),
//                 description: None,
//                 enabled: true,
//                 metadata: None,
//                 last_updated: None,
//                 created_at: None,
//                 tags: None,
//             },
//             Key::KeyDetail(detail) => detail.clone(),
//             Key::KeyValue(kv) => kv.to_key_detail(None),
//         }
//     }
//
//     fn to_key_value(&self) -> KeyValue {
//         match self {
//             Key::Value(value) => KeyValue {
//                 name: "".to_string(),
//                 value: value.clone(),
//             },
//             Key::KeyDetail(detail) => KeyValue {
//                 name: detail.name.clone(),
//                 value: detail.value.clone(),
//             },
//             Key::KeyValue(kv) => kv.clone(),
//         }
//     }
//
//     fn to_value(&self) -> String {
//         match self {
//             Key::Value(value) => value.clone(),
//             Key::KeyDetail(detail) => detail.value.clone(),
//             Key::KeyValue(kv) => kv.value.clone(),
//         }
//     }
// }
