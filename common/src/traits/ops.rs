// use async_trait::async_trait;
// use reqwest::Response;
// use snafu::futures::TryFutureExt;
//
// use crate::prelude::{Key, KeyResponse, Result};
// use crate::traits::new::Flux;
//
// pub trait UpsertSingle: Flux {
//     fn upsert_single(&self, key: &Key) -> Result<KeyResponse>;
//     fn has_upsert_single(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait UpsertSingleAsync: Flux {
//     async fn upsert_single_async(&self, key: &Key) -> Result<KeyResponse>;
//     fn has_upsert_single_async(&self) -> bool { true }
// }
//
// pub trait UpsertMany: Flux {
//     async fn upsert_many(&self, keys: &[Key]) -> Result<Vec<KeyResponse>>;
//     fn has_upsert_many(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait UpsertManyAsync: Flux {
//     async fn upsert_many_async(&self, keys: &[Key]) -> Result<Vec<KeyResponse>>;
//     fn has_upsert_many_async(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait InsertSingle: Flux {
//     async fn insert_single_async(&self, key: &Key) -> Result<KeyResponse>;
//     fn has_insert_single(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait InsertSingleAsync: Flux {
//     async fn insert_single_async(&self, key: &Key) -> Result<KeyResponse>;
//     fn has_insert_single_async(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait InsertMany: Flux {
//     async fn insert_many_async(&self, keys: &[Key]) -> Result<Vec<KeyResponse>>;
//     fn has_insert_many(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait InsertManyAsync: Flux {
//     async fn insert_many_async(&self, keys: &[Key]) -> Result<Vec<KeyResponse>>;
//     fn has_insert_many_async(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait DeleteSingle: Flux {
//     async fn delete_single_async(&self, key: &Key) -> Result<KeyResponse>;
//     fn has_delete_single(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait DeleteSingleAsync: Flux {
//     async fn delete_single_async(&self, key: &Key) -> Result<KeyResponse>;
//     fn has_delete_single_async(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait DeleteMany: Flux {
//     async fn delete_many_async(&self, keys: &[Key]) -> Result<Vec<KeyResponse>>;
//     fn has_delete_many(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait DeleteManyAsync: Flux {
//     async fn delete_many_async(&self, keys: &[Key]) -> Result<Vec<KeyResponse>>;
//     fn has_delete_many_async(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait SelectSingle: Flux {
//     async fn select_single_async(&self, key: &Key) -> Result<KeyResponse>;
//     fn has_select_single(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait SelectSingleAsync: Flux {
//     async fn select_single_async(&self, key: &Key) -> Result<KeyResponse>;
//     fn has_select_single_async(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait SelectMany: Flux {
//     async fn select_many_async(&self, keys: &[Key]) -> Result<Vec<KeyResponse>>;
//     fn has_select_many(&self) -> bool { true }
// }
//
// #[async_trait]
// pub trait SelectManyAsync: Flux {
//     async fn select_many_async(&self, keys: &[Key]) -> Result<Vec<KeyResponse>>;
//     fn has_select_many_async(&self) -> bool { true }
// }
