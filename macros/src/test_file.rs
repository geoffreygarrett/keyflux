// use async_trait::async_trait;
//
// #[async_trait]
// #[typetag :: serde(tag = "type")]
// pub trait Flux : Sync + Send
// + Debug
// {
//     fn upsert_single(& self, key : & Key) -> Result < Response >
//     {
//         debug!
//         ("Attempting single operation: {}", stringify! (upsert_single)); if
//     self.has_upsert_single_async()
//     {
//         trace!
//         ("{} is available for key: {:?}", stringify! (upsert_single),
//                        key); let runtime = tokio :: runtime :: Runtime :: new() ? ;
//         runtime.block_on(self.upsert_single_async(key))
//     } else if self.has_upsert_many_async()
//     {
//         debug! ("Falling back to async batch version for a single key.");
//         let runtime = tokio :: runtime :: Runtime :: new() ? ;
//         runtime.block_on(self.upsert_many_async(& vec!
//         [key.clone()])).map(| responses |
//         responses.into_iter().next().unwrap())
//     } else if self.has_upsert_many()
//     {
//         debug! ("Falling back to sync batch version for a single key.");
//         let runtime = tokio :: runtime :: Runtime :: new() ? ;
//         runtime.block_on(async
//         {
//             self.upsert_many(& vec! [key.clone()]).await
//         }).map(| responses | responses.into_iter().next().unwrap())
//     } else
//     {
//         error!
//         ("No implementation found for {}", stringify! (upsert_single));
//         Err(Error :: NotImplemented
//         {
//             message : format!
//             ("No implementation or fallback found for {}", stringify!
//             (upsert_single))
//         })
//     }
//     } fn insert_single(& self, key : & Key) -> Result < Response >
// {
//     debug!
//     ("Attempting single operation: {}", stringify! (insert_single)); if
// self.has_insert_single_async()
// {
//     trace!
//     ("{} is available for key: {:?}", stringify! (insert_single),
//                        key); let runtime = tokio :: runtime :: Runtime :: new() ? ;
//     runtime.block_on(self.insert_single_async(key))
// } else if self.has_insert_many_async()
// {
//     debug! ("Falling back to async batch version for a single key.");
//     let runtime = tokio :: runtime :: Runtime :: new() ? ;
//     runtime.block_on(self.insert_many_async(& vec!
//     [key.clone()])).map(| responses |
//     responses.into_iter().next().unwrap())
// } else if self.has_insert_many()
// {
//     debug! ("Falling back to sync batch version for a single key.");
//     let runtime = tokio :: runtime :: Runtime :: new() ? ;
//     runtime.block_on(async
//     {
//         self.insert_many(& vec! [key.clone()]).await
//     }).map(| responses | responses.into_iter().next().unwrap())
// } else
// {
//     error!
//     ("No implementation found for {}", stringify! (insert_single));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation or fallback found for {}", stringify!
//         (insert_single))
//     })
// }
// } fn delete_single(& self, key : & Key) -> Result < Response >
// {
//     debug!
//     ("Attempting single operation: {}", stringify! (delete_single)); if
// self.has_delete_single_async()
// {
//     trace!
//     ("{} is available for key: {:?}", stringify! (delete_single),
//                        key); let runtime = tokio :: runtime :: Runtime :: new() ? ;
//     runtime.block_on(self.delete_single_async(key))
// } else if self.has_delete_many_async()
// {
//     debug! ("Falling back to async batch version for a single key.");
//     let runtime = tokio :: runtime :: Runtime :: new() ? ;
//     runtime.block_on(self.delete_many_async(& vec!
//     [key.clone()])).map(| responses |
//     responses.into_iter().next().unwrap())
// } else if self.has_delete_many()
// {
//     debug! ("Falling back to sync batch version for a single key.");
//     let runtime = tokio :: runtime :: Runtime :: new() ? ;
//     runtime.block_on(async
//     {
//         self.delete_many(& vec! [key.clone()]).await
//     }).map(| responses | responses.into_iter().next().unwrap())
// } else
// {
//     error!
//     ("No implementation found for {}", stringify! (delete_single));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation or fallback found for {}", stringify!
//         (delete_single))
//     })
// }
// } fn select_single(& self, key : & Key) -> Result < Response >
// {
//     debug!
//     ("Attempting single operation: {}", stringify! (select_single)); if
// self.has_select_single_async()
// {
//     trace!
//     ("{} is available for key: {:?}", stringify! (select_single),
//                        key); let runtime = tokio :: runtime :: Runtime :: new() ? ;
//     runtime.block_on(self.select_single_async(key))
// } else if self.has_select_many_async()
// {
//     debug! ("Falling back to async batch version for a single key.");
//     let runtime = tokio :: runtime :: Runtime :: new() ? ;
//     runtime.block_on(self.select_many_async(& vec!
//     [key.clone()])).map(| responses |
//     responses.into_iter().next().unwrap())
// } else if self.has_select_many()
// {
//     debug! ("Falling back to sync batch version for a single key.");
//     let runtime = tokio :: runtime :: Runtime :: new() ? ;
//     runtime.block_on(async
//     {
//         self.select_many(& vec! [key.clone()]).await
//     }).map(| responses | responses.into_iter().next().unwrap())
// } else
// {
//     error!
//     ("No implementation found for {}", stringify! (select_single));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation or fallback found for {}", stringify!
//         (select_single))
//     })
// }
// } fn upsert_many(& self, keys : & [Key]) -> Result < Vec < Response >>
// {
//     debug!
//     ("Attempting batch operation: {}", stringify! (upsert_many_async)); if
// self.has_upsert_many_async()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async { self.upsert_many_async(keys) })
// } else if self.has_upsert_single_async()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async
//     {
//         let tasks =
//             keys.iter().map(| key | self.upsert_single_async(key));
//         futures :: future :: join_all(tasks).await
//     })
// } else if self.has_upsert_single()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async
//     {
//         let tasks =
//             keys.iter().map(| key | async { self.upsert_single(key) });
//         futures :: future :: join_all(tasks).await
//     })
// } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (upsert_many_async));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation found for {}", stringify!
//         (upsert_many_async))
//     })
// }
// } fn insert_many(& self, keys : & [Key]) -> Result < Vec < Response >>
// {
//     debug!
//     ("Attempting batch operation: {}", stringify! (insert_many_async)); if
// self.has_insert_many_async()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async { self.insert_many_async(keys) })
// } else if self.has_insert_single_async()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async
//     {
//         let tasks =
//             keys.iter().map(| key | self.insert_single_async(key));
//         futures :: future :: join_all(tasks).await
//     })
// } else if self.has_insert_single()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async
//     {
//         let tasks =
//             keys.iter().map(| key | async { self.insert_single(key) });
//         futures :: future :: join_all(tasks).await
//     })
// } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (insert_many_async));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation found for {}", stringify!
//         (insert_many_async))
//     })
// }
// } fn delete_many(& self, keys : & [Key]) -> Result < Vec < Response >>
// {
//     debug!
//     ("Attempting batch operation: {}", stringify! (delete_many_async)); if
// self.has_delete_many_async()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async { self.delete_many_async(keys) })
// } else if self.has_delete_single_async()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async
//     {
//         let tasks =
//             keys.iter().map(| key | self.delete_single_async(key));
//         futures :: future :: join_all(tasks).await
//     })
// } else if self.has_delete_single()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async
//     {
//         let tasks =
//             keys.iter().map(| key | async { self.delete_single(key) });
//         futures :: future :: join_all(tasks).await
//     })
// } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (delete_many_async));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation found for {}", stringify!
//         (delete_many_async))
//     })
// }
// } fn select_many(& self, keys : & [Key]) -> Result < Vec < Response >>
// {
//     debug!
//     ("Attempting batch operation: {}", stringify! (select_many_async)); if
// self.has_select_many_async()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async { self.select_many_async(keys) })
// } else if self.has_select_single_async()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async
//     {
//         let tasks =
//             keys.iter().map(| key | self.select_single_async(key));
//         futures :: future :: join_all(tasks).await
//     })
// } else if self.has_select_single()
// {
//     let rt = tokio :: runtime :: Runtime :: new() ? ;
//     rt.block_on(async
//     {
//         let tasks =
//             keys.iter().map(| key | async { self.select_single(key) });
//         futures :: future :: join_all(tasks).await
//     })
// } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (select_many_async));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation found for {}", stringify!
//         (select_many_async))
//     })
// }
// } async fn upsert_single_async(& self, key : & Key) -> Result < Response >
// {
//     debug!
//     ("Attempting async single operation: {}", stringify!
//                    (upsert_single_async)); if self.has_upsert_single()
// {
//     trace!
//     ("{} is available for key: {:?}", stringify!
//                        (upsert_single_async), key); self.upsert_single(key)
// } else if self.has_upsert_many_async()
// { self.upsert_many_async(& vec! [key.clone()]).await } else if
// self.has_upsert_many()
// { self.upsert_many(& vec! [key.clone()]).await } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (upsert_single_async));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation found for {}", stringify!
//         (upsert_single_async))
//     })
// }
// } async fn insert_single_async(& self, key : & Key) -> Result < Response >
// {
//     debug!
//     ("Attempting async single operation: {}", stringify!
//                    (insert_single_async)); if self.has_insert_single()
// {
//     trace!
//     ("{} is available for key: {:?}", stringify!
//                        (insert_single_async), key); self.insert_single(key)
// } else if self.has_insert_many_async()
// { self.insert_many_async(& vec! [key.clone()]).await } else if
// self.has_insert_many()
// { self.insert_many(& vec! [key.clone()]).await } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (insert_single_async));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation found for {}", stringify!
//         (insert_single_async))
//     })
// }
// } async fn delete_single_async(& self, key : & Key) -> Result < Response >
// {
//     debug!
//     ("Attempting async single operation: {}", stringify!
//                    (delete_single_async)); if self.has_delete_single()
// {
//     trace!
//     ("{} is available for key: {:?}", stringify!
//                        (delete_single_async), key); self.delete_single(key)
// } else if self.has_delete_many_async()
// { self.delete_many_async(& vec! [key.clone()]).await } else if
// self.has_delete_many()
// { self.delete_many(& vec! [key.clone()]).await } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (delete_single_async));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation found for {}", stringify!
//         (delete_single_async))
//     })
// }
// } async fn select_single_async(& self, key : & Key) -> Result < Response >
// {
//     debug!
//     ("Attempting async single operation: {}", stringify!
//                    (select_single_async)); if self.has_select_single()
// {
//     trace!
//     ("{} is available for key: {:?}", stringify!
//                        (select_single_async), key); self.select_single(key)
// } else if self.has_select_many_async()
// { self.select_many_async(& vec! [key.clone()]).await } else if
// self.has_select_many()
// { self.select_many(& vec! [key.clone()]).await } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (select_single_async));
//     Err(Error :: NotImplemented
//     {
//         message : format!
//         ("No implementation found for {}", stringify!
//         (select_single_async))
//     })
// }
// } async fn upsert_many_async(& self, keys : & [Key]) -> Result < Vec <
//     Response >>
// {
//     debug!
//     ("Attempting async batch operation: {}", stringify!
//                    (upsert_many_async)); if self.has_upsert_many()
// { self.upsert_many(keys).await } else if
// self.has_upsert_single_async()
// {
//     futures :: future ::
//     join_all(keys.iter().map(| key |
//     self.upsert_single_async(key))).await
// } else if self.has_upsert_single()
// {
//     futures :: future ::
//     join_all(keys.iter().map(| key | self.upsert_single(key))).await
// } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (upsert_many_async)); Err(Error :: NotImplemented)
// }
// } async fn insert_many_async(& self, keys : & [Key]) -> Result < Vec <
//     Response >>
// {
//     debug!
//     ("Attempting async batch operation: {}", stringify!
//                    (insert_many_async)); if self.has_insert_many()
// { self.insert_many(keys).await } else if
// self.has_insert_single_async()
// {
//     futures :: future ::
//     join_all(keys.iter().map(| key |
//     self.insert_single_async(key))).await
// } else if self.has_insert_single()
// {
//     futures :: future ::
//     join_all(keys.iter().map(| key | self.insert_single(key))).await
// } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (insert_many_async)); Err(Error :: NotImplemented)
// }
// } async fn delete_many_async(& self, keys : & [Key]) -> Result < Vec <
//     Response >>
// {
//     debug!
//     ("Attempting async batch operation: {}", stringify!
//                    (delete_many_async)); if self.has_delete_many()
// { self.delete_many(keys).await } else if
// self.has_delete_single_async()
// {
//     futures :: future ::
//     join_all(keys.iter().map(| key |
//     self.delete_single_async(key))).await
// } else if self.has_delete_single()
// {
//     futures :: future ::
//     join_all(keys.iter().map(| key | self.delete_single(key))).await
// } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (delete_many_async)); Err(Error :: NotImplemented)
// }
// } async fn select_many_async(& self, keys : & [Key]) -> Result < Vec <
//     Response >>
// {
//     debug!
//     ("Attempting async batch operation: {}", stringify!
//                    (select_many_async)); if self.has_select_many()
// { self.select_many(keys).await } else if
// self.has_select_single_async()
// {
//     futures :: future ::
//     join_all(keys.iter().map(| key |
//     self.select_single_async(key))).await
// } else if self.has_select_single()
// {
//     futures :: future ::
//     join_all(keys.iter().map(| key | self.select_single(key))).await
// } else
// {
//     error!
//     ("No implementation found for {}", stringify!
//                        (select_many_async)); Err(Error :: NotImplemented)
// }
// } fn has_upsert_single(& self) -> bool { false } fn
// has_insert_single(& self) -> bool { false } fn has_delete_single(& self)
//                                                                  -> bool { false } fn has_select_single(& self) -> bool { false } fn
// has_upsert_many(& self) -> bool { false } fn has_insert_many(& self) ->
// bool { false } fn has_delete_many(& self) -> bool { false } fn
// has_select_many(& self) -> bool { false } fn
// has_upsert_single_async(& self) -> bool { false } fn
// has_insert_single_async(& self) -> bool { false } fn
// has_delete_single_async(& self) -> bool { false } fn
// has_select_single_async(& self) -> bool { false } fn
// has_upsert_many_async(& self) -> bool { false } fn
// has_insert_many_async(& self) -> bool { false } fn
// has_delete_many_async(& self) -> bool { false } fn
// has_select_many_async(& self) -> bool { false }
// }
//
