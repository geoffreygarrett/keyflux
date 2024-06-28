// use crate::error::FluxError;
// use crate::file::key_collection::KeyCollection;
// use crate::flux::{merge, merge_and_return_json, replace_vars_in_json};
// use crate::key::Key;
// use crate::traits::Flux;
// use crate::FluxContext;
// use async_trait::async_trait;
// use futures::future::join_all;
// use futures::FutureExt;
// use log::{error, info};
// use reqwest::header::USER_AGENT;
// use reqwest::Client;
// use serde::{Deserialize, Serialize};
// use serde_json::Value;
// use sodiumoxide::base64::{self, Variant};
// use sodiumoxide::crypto::box_::PublicKey;
// use sodiumoxide::crypto::{box_, sealedbox};
//
// /// Represents a GitHub Flux for managing environment secrets.
// ///
// /// This structure encapsulates the necessary parameters for making API requests to GitHub
// /// to create, update, and manage environment secrets in a specified repository.
// ///
// /// # Fields
// ///
// /// * `owner` - The account owner of the repository.
// /// * `repo` - The name of the repository.
// /// * `environment_name` - The name of the environment.
// /// * `token_env_key` - An optional environment variable key for the GitHub token.
// #[derive(Serialize, Deserialize, Debug, Clone)]
// pub struct GitHubVariables {
//     pub owner: String,
//     pub repo: String,
//     pub environment_name: String,
//     pub token: Option<String>,
// }
//
// #[flux_define]
// pub struct GitHubFlux {
//     pub input: Option<Value>,
// }
//
// static GITHUB_ACCESS_TOKEN: &str = "GITHUB_ACCESS_TOKEN";
//
// impl GitHubFlux {
//     fn get_token(&self) -> Result<String, FluxError> {
//         // let key_input = key.input().clone();
//         let mut raw_input = self.input.clone().unwrap();
//         replace_vars_in_json(&mut raw_input);
//         let input: GitHubVariables = serde_json::from_value(raw_input).unwrap();
//
//         // let token_key = self.token_env_key.clone().unwrap_or_else(|| "GITHUB_TOKEN".to_string());
//         // std::env::var(&token_key).map_err(|_| FluxError::Unauthorized(format!("GitHub token not found in environment variable '{}'", token_key)))
//         if let Some(token) = &input.token {
//             Ok(token.clone())
//         } else {
//             std::env::var(GITHUB_ACCESS_TOKEN).map_err(|_| {
//                 FluxError::Unauthorized(format!(
//                     "GitHub token not found in environment variable '{}'",
//                     GITHUB_ACCESS_TOKEN
//                 ))
//             })
//         }
//     }
//
//     async fn get_public_key(
//         &self,
//         client: &Client,
//         token: &str,
//     ) -> Result<(String, box_::PublicKey), FluxError> {
//         let mut raw_input = self.input.clone().unwrap();
//         replace_vars_in_json(&mut raw_input);
//         let input: GitHubVariables = serde_json::from_value(raw_input).unwrap();
//
//         let url = format!(
//             "https://api.github.com/repos/{}/{}/environments/{}/secrets/public-key",
//             input.owner, input.repo, input.environment_name
//         );
//
//         // format url
//         info!("Fetching public key from {}", url);
//
//         let res = client
//             .get(&url)
//             .bearer_auth(token)
//             .header(USER_AGENT, "keyflux-cli")
//             .header("Accept", "application/vnd.github+json")
//             .send()
//             .await?;
//
//         if res.status().is_success() {
//             let json: serde_json::Value = res.json().await?;
//             let key_id = json["key_id"]
//                 .as_str()
//                 .ok_or_else(|| FluxError::InvalidKeyId("Invalid key ID".to_string()))?;
//             let key = json["key"]
//                 .as_str()
//                 .ok_or_else(|| FluxError::InvalidKey("Invalid key".to_string()))?;
//             let decoded_key = base64::decode(key, Variant::Original)
//                 .map_err(|_| FluxError::DecodeKeyError("Failed to decode key".to_string()))?;
//             let public_key = box_::PublicKey::from_slice(&decoded_key).ok_or_else(|| {
//                 FluxError::CreatePublicKeyError("Failed to create public key".to_string())
//             })?;
//             info!("Public key: {:?}", public_key);
//             Ok((key_id.to_string(), public_key))
//         } else {
//             let status = res.status();
//             let error_text = res
//                 .text()
//                 .await
//                 .unwrap_or_else(|_| "Unknown error".to_string());
//             Err(FluxError::GetPublicKeyError(format!(
//                 "Failed to get public key: {} - {}",
//                 status, error_text
//             )))
//         }
//     }
//
//     // fn encrypt_secret(public_key: &box_::PublicKey, secret: &str) -> Result<String, FluxError> {
//     //     let secret_box = box_::seal(secret.as_bytes(), &box_::gen_nonce(), &public_key, &box_::SecretKey::from_slice(&[0u8; box_::SECRETKEYBYTES]).unwrap());
//     //     Ok(base64::encode(&secret_box, Variant::Original))
//     // }
//
//     fn encrypt_secret(public_key: &PublicKey, secret: &str) -> Result<String, FluxError> {
//         // Convert the secret to bytes
//         let secret_bytes = secret.as_bytes();
//
//         // Encrypt the secret using the public key
//         let encrypted_secret = sealedbox::seal(secret_bytes, public_key);
//
//         // Encode the encrypted secret to Base64
//         let encoded_secret = base64::encode(&encrypted_secret, Variant::Original);
//
//         Ok(encoded_secret)
//     }
// }
//
// #[async_trait]
// #[flux_config(name = "github")]
// impl Flux for GitHubFlux {
//     async fn initialize(&mut self, _context: &FluxContext) -> Result<(), FluxError> {
//         Ok(())
//     }
//
//     async fn finalize(&self, _context: &FluxContext) -> Result<(), FluxError> {
//         Ok(())
//     }
//
//     async fn single(&self, key: &Key) -> Result<(), FluxError> {
//         let client = Client::new();
//         let token = self.get_token()?;
//
//         let mut raw_input = self.input.clone().unwrap();
//         replace_vars_in_json(&mut raw_input);
//         let input: GitHubVariables = serde_json::from_value(raw_input).unwrap();
//
//         // let mut raw_input = self.input.clone();
//         // replace_vars_in_json(&mut raw_input);
//         // let input : GitHubVariables = serde_json::from_value(raw_input).unwrap();
//
//         // Fetch the public key for the environment
//         let (key_id, public_key) = self.get_public_key(&client, &token).await?;
//
//         // Encrypt the secret value
//         let encrypted_value = Self::encrypt_secret(&public_key, &key.value())?;
//         let url = format!(
//             "https://api.github.com/repos/{}/{}/environments/{}/secrets/{}",
//             input.owner,
//             input.repo,
//             input.environment_name,
//             key.name()
//         );
//
//         let body = serde_json::json!({
//             "encrypted_value": encrypted_value,
//             "key_id": key_id});
//
//         let res = client
//             .put(&url)
//             .bearer_auth(token)
//             .header("Accept", "application/vnd.github+json")
//             .header(USER_AGENT, "keyflux-cli")
//             .json(&body)
//             .send()
//             .await?;
//
//         if !res.status().is_success() {
//             let status = res.status();
//             let error_text = res
//                 .text()
//                 .await
//                 .unwrap_or_else(|_| "Unknown error".to_string());
//             match status {
//                 reqwest::StatusCode::FORBIDDEN => {
//                     error!(
//                         "Unauthorized access for secret {}: {} - {}",
//                         key.name(),
//                         status,
//                         error_text
//                     );
//                     return Err(FluxError::Unauthorized(format!(
//                         "Unauthorized access for secret {}: {}",
//                         key.name(),
//                         error_text
//                     )));
//                 }
//                 reqwest::StatusCode::BAD_REQUEST => {
//                     error!(
//                         "Bad request for secret {}: {} - {}",
//                         key.name(),
//                         status,
//                         error_text
//                     );
//                     return Err(FluxError::BadRequest(format!(
//                         "Bad request for secret {}: {}",
//                         key.name(),
//                         error_text
//                     )));
//                 }
//                 reqwest::StatusCode::PAYMENT_REQUIRED => {
//                     error!(
//                         "Payment required for secret {}: {} - {}",
//                         key.name(),
//                         status,
//                         error_text
//                     );
//                     return Err(FluxError::PaymentRequired(format!(
//                         "Payment required for secret {}: {}",
//                         key.name(),
//                         error_text
//                     )));
//                 }
//                 reqwest::StatusCode::CONFLICT => {
//                     error!(
//                         "Conflict for secret {}: {} - {}",
//                         key.name(),
//                         status,
//                         error_text
//                     );
//                     return Err(FluxError::Conflict(format!(
//                         "Conflict for secret {}: {}",
//                         key.name(),
//                         error_text
//                     )));
//                 }
//                 reqwest::StatusCode::NOT_FOUND => {
//                     error!(
//                         "Secret not found {}: {} - {}",
//                         key.name(),
//                         status,
//                         error_text
//                     );
//                     return Err(FluxError::NotFound(format!(
//                         "Secret not found {}: {}",
//                         key.name(),
//                         error_text
//                     )));
//                 }
//                 _ => {
//                     error!(
//                         "Failed to set GitHub secret {}: {} - {}",
//                         key.name(),
//                         status,
//                         error_text
//                     );
//                     return Err(FluxError::NotFound(format!(
//                         "Failed to set GitHub secret {}: {}",
//                         key.name(),
//                         error_text
//                     )));
//                 }
//             }
//         }
//
//         info!("Set GitHub secret {}: {}", key.name(), res.status());
//         Ok(())
//     }
//
//     async fn batch(&self, context: &FluxContext) -> Result<(), FluxError> {
//         let client = Client::new();
//         let token = self.get_token()?;
//         // Fetch the public key for the environment
//         let (key_id, public_key) = self.get_public_key(&client, &token).await?;
//         let tasks = context.keys().iter().map(|key| {
//             let encrypted_value = match Self::encrypt_secret(&public_key, &key.value()) {
//                 Ok(val) => val,
//                 Err(err) => return async { Err(err) }.boxed(),
//             };
//             let key_input = key.input().clone();
//             let mut raw_input = self.input.clone();
//             let mut combined = merge_and_return_json(raw_input, key_input).unwrap();
//             replace_vars_in_json(&mut combined);
//             // info!("Key value: {:?}", key.value());
//             let input: GitHubVariables = serde_json::from_value(combined).unwrap();
//             // info!("Setting GitHub secret {}, url: {}, value: {}", key.name(), input.owner, encrypted_value);
//             let url = format!(
//                 "https://api.github.com/repos/{}/{}/environments/{}/secrets/{}",
//                 input.owner,
//                 input.repo,
//                 input.environment_name,
//                 key.name()
//             );
//
//             // info!("Setting GitHub secret {}, url: {}", key.name(), url);
//
//             let body = serde_json::json!({
//                 "encrypted_value": encrypted_value,
//                 "key_id": key_id
//             });
//
//             let client = client.clone();
//             let token = token.clone();
//             async move {
//                 let res = client
//                     .put(&url)
//                     .header("Authorization", format!("Bearer {}", token))
//                     .header("Accept", "application/vnd.github+json")
//                     .header(USER_AGENT, "keyflux-cli")
//                     .json(&body)
//                     .send()
//                     .await?;
//
//                 if !res.status().is_success() {
//                     let status = res.status();
//                     let error_text = res
//                         .text()
//                         .await
//                         .unwrap_or_else(|_| "Unknown error".to_string());
//                     match status {
//                         reqwest::StatusCode::FORBIDDEN => {
//                             error!(
//                                 "Unauthorized access for secret {}: {} - {}",
//                                 key.name(),
//                                 status,
//                                 error_text
//                             );
//                             return Err(FluxError::Unauthorized(format!(
//                                 "Unauthorized access for secret {}: {}",
//                                 key.name(),
//                                 error_text
//                             )));
//                         }
//                         reqwest::StatusCode::BAD_REQUEST => {
//                             error!(
//                                 "Bad request for secret {}: {} - {}",
//                                 key.name(),
//                                 status,
//                                 error_text
//                             );
//                             return Err(FluxError::BadRequest(format!(
//                                 "Bad request for secret {}: {}",
//                                 key.name(),
//                                 error_text
//                             )));
//                         }
//                         reqwest::StatusCode::PAYMENT_REQUIRED => {
//                             error!(
//                                 "Payment required for secret {}: {} - {}",
//                                 key.name(),
//                                 status,
//                                 error_text
//                             );
//                             return Err(FluxError::PaymentRequired(format!(
//                                 "Payment required for secret {}: {}",
//                                 key.name(),
//                                 error_text
//                             )));
//                         }
//                         reqwest::StatusCode::CONFLICT => {
//                             error!(
//                                 "Conflict for secret {}: {} - {}",
//                                 key.name(),
//                                 status,
//                                 error_text
//                             );
//                             return Err(FluxError::Conflict(format!(
//                                 "Conflict for secret {}: {}",
//                                 key.name(),
//                                 error_text
//                             )));
//                         }
//                         reqwest::StatusCode::NOT_FOUND => {
//                             error!(
//                                 "Secret not found {}: {} - {}",
//                                 key.name(),
//                                 status,
//                                 error_text
//                             );
//                             return Err(FluxError::NotFound(format!(
//                                 "Secret not found {}: {}",
//                                 key.name(),
//                                 error_text
//                             )));
//                         }
//                         _ => {
//                             error!(
//                                 "Failed to set GitHub secret {}: {} - {}",
//                                 key.name(),
//                                 status,
//                                 error_text
//                             );
//                             return Err(FluxError::NotFound(format!(
//                                 "Failed to set GitHub secret {}: {}",
//                                 key.name(),
//                                 error_text
//                             )));
//                         }
//                     }
//                 }
//
//                 info!("Set GitHub secret {}: {}", key.name(), res.status());
//                 Result::<(), FluxError>::Ok(())
//             }
//             .boxed()
//         });
//
//         let results = join_all(tasks).await;
//         info!("Set {:?} GitHub secrets", results);
//
//         // for (i, result) in results.into_iter().enumerate() {
//         //     if let Err(err) = result {
//         //         error!("Failed to set secret for key {}: {:?}", keys[i].name(), err);
//         //     }
//         // }
//         // for (index, key) in keys.iter().enumerate() {
//         //     error!("Failed to set secret for key {}: {:?}", key.name(), results[index]);
//         // }
//
//         Ok(())
//     }
//
//     async fn check(&self, _key: &Key) -> Result<Option<String>, FluxError> {
//         Ok(None)
//     }
//
//     async fn revert(&self, _key: &Key) -> Result<(), FluxError> {
//         Ok(())
//     }
// }
//
// // #[async_trait]
// // impl Fetch for GitHubFlux {
// //     async fn fetch(&self, client: &Client) -> Result<Response, FluxError> {
// //         let token = self.get_token()?;
// //         let url = format!("https://api.github.com/repos/{}/{}/environments/{}/secrets/public-key", self.owner, self.repo, self.environment_name);
// //
// //         let res = client.get(&url)
// //             .header("Authorization", format!("Bearer {}", token))
// //             .header("Accept", "application/vnd.github+json")
// //             .send()
// //             .await?;
// //
// //         if res.status().is_success() {
// //             Ok(res)
// //         } else {
// //             Err(FluxError::ReqwestError(res.error_for_status().unwrap_err()))
// //         }
// //     }
// // }
