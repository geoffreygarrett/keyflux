// use std::collections::HashMap;
// use serde::{Deserialize, Serialize};
// use serde_json::Value;
// use crate::models::key::Key;
//
// #[derive(Debug)]
// pub enum SelectInput {
//     Keys(Vec<Key>),
//     All(HashMap<String, Value>),
// }
//
// impl SelectInput {
//
//     pub fn new(keys: Option<Vec<Key>>, all: Option<HashMap<String, Value>>) -> Self {
//         match (keys, all) {
//             (Some(keys), None) => SelectInput::Keys(keys),
//             (None, Some(all)) => SelectInput::All(all),
//             _ => panic!("SelectInput must have either keys or all"),
//         }
//     }
//
//     pub fn keys(&self) -> Option<Vec<String>> {
//         match self {
//             SelectInput::Keys(keys) => Some(keys.iter().map(|key| key.name.clone()).collect()),
//             SelectInput::All(_) => None,
//         }
//     }
// }
//
// #[derive(Debug)]
// pub struct DeleteInput {
//     keys: Vec<Key>,
// }
//
//
// impl DeleteInput {
//
//     pub fn new(keys: Vec<Key>) -> Self {
//         Self { keys }
//     }
//     pub fn keys(&self) -> Vec<Key> {
//         self.keys.clone()
//     }
// }
//
// #[derive(Debug)]
// pub struct UpsertInput(Vec<Key>);
//
// impl UpsertInput {
//
//     pub fn new (keys: Vec<Key>) -> Self {
//         Self(keys)
//     }
//     pub fn keys(&self) -> &Vec<Key> {
//         &self.0
//     }
// }
//
// #[derive(Debug)]
// pub struct UpdateInput(Vec<Key>);
//
// impl UpdateInput {
//     pub fn keys(&self) -> &Vec<Key> {
//         &self.0
//     }
// }
//
// #[derive(Debug)]
// pub struct InsertInput(Vec<Key>);
//
// impl InsertInput {
//     pub fn keys(&self) -> &Vec<Key> {
//         &self.0
//     }
// }
//
// #[derive(Debug, Serialize, Deserialize)]
// pub enum SelectResponse {
//     Success(Vec<Value>),
//     Partial(Vec<Value>),
//     Error(String),
// }
//
// #[derive(Debug, Serialize, Deserialize)]
// pub enum DeleteResponse {
//     Success(Vec<Value>),
//     Error(String),
// }
//
// #[derive(Debug, Serialize, Deserialize)]
// pub enum UpsertResponse {
//     Success(Vec<Value>),
//     Error(String),
// }
//
// #[derive(Debug, Serialize, Deserialize)]
// pub enum UpdateResponse {
//     Success(Vec<Key>),
//     Error(String),
// }
//
// #[derive(Debug, Serialize, Deserialize)]
// pub enum InsertResponse {
//     Success(Vec<Key>),
//     Error(String),
// }
//
// // Example usage
// // fn main() {
// //     let keys = vec![
// //         Key { name: "key1".to_string(), value: "value1".to_string(), extra: HashMap::new() },
// //         Key { name: "key2".to_string(), value: "value2".to_string(), extra: HashMap::new() },
// //     ];
// //
// //     let select_input = SelectInput::Keys(keys.clone());
// //     let delete_input = DeleteInput::Keys(keys.clone());
// //     let upsert_input = UpsertInput(keys.clone());
// //     let update_input = UpdateInput(keys.clone());
// //     let insert_input = InsertInput(keys);
// //
// //     println!("{:?}", select_input.keys());
// //     println!("{:?}", delete_input.keys());
// //     println!("{:?}", upsert_input.keys());
// //     println!("{:?}", update_input.keys());
// //     println!("{:?}", insert_input.keys());
// // }
