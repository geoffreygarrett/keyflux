// use std::collections::HashMap;
// use std::future::Future;
// use std::pin::Pin;
// use serde_json::Value;
// use keyflux_common::prelude::*;
//
// #[derive(Debug, Serialize, Deserialize)]
// enum ColumnType {
//     Value,
//     Key,
//     Encrypted,
// }
//
//
// #[derive(Debug, Serialize, Deserialize)]
// #[serde(rename_all = "camelCase")]
// pub struct PostgresTableFlux {
//     table_name: String,
//     schema: String,
//     connection_string: String,
//     column_mapping: Option<HashMap<String, String>>,
// }
// #[typetag::serde(name = "postgres_table")]
// impl Flux for PostgresTableFlux {
//     async fn list_async(&self, value: Value) -> Result<Vec<KeyResponse>> {}
//
//     async fn upsert_many_async(&self, key: &dyn Key) -> Result<Vec<KeyResponse>> {
//         Ok(Value::Null)
//     }
//
//     async fn delete_many_async
//
//     async fn update_many_async
//
//     async fn update_single_async
// }