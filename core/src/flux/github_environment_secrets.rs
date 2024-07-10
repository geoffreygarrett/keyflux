use std::collections::HashMap;
use std::sync::Arc;

use anyhow::Context;
use futures::{stream, StreamExt};
use futures::future::{join_all, try_join_all};
use lazy_static::lazy_static;
use log::{debug, trace};
use reqwest::{Client, ClientBuilder, Method, RequestBuilder, Response, StatusCode};
use reqwest::header::HeaderMap;
use serde::{Deserialize, Serialize};
use serde_json::{json, Value};
use sodiumoxide::crypto::box_::PublicKey;
use tokio::sync::Mutex;
use typetag::serde;

use keyflux_common::prelude::*;

#[derive(Debug, Default, Serialize, Deserialize)]
struct GitHubPublicKey {
    key_id: String,
    key: String,
}
#[derive(Default, Serialize, Deserialize, Debug)]
// #[derive(Default, Serialize, Deserialize, Flux, Debug)]
// #[flux(name = "github_environment_secrets")]
struct GitHubEnvironmentSecretsFlux {
    owner: String,
    repo: String,
    environment_name: String,
    token: String,
    #[serde(skip)]
    public_key: GitHubPublicKey,
    #[serde(skip)]
    client: Client,
}

fn secret_url(owner: &str, repo: &str, environment_name: &str,
              secret_name: Option<&str>) -> String {
    let base_url = format!(
        "https://api.github.com/repos/{}/{}/environments/{}/secrets",
        owner,
        repo,
        environment_name,
    );
    secret_name.map_or(base_url.clone(), |name| format!("{}/{}", base_url, name))
}


lazy_static!(
    static ref GITHUB_BASE_HEADERS: HeaderMap = {
        let mut headers = HeaderMap::new();
        headers.insert("Accept", "application/vnd.github.v3+json".parse().unwrap());
        headers.insert("X-GitHub-Api-Version", "2022-11-28".parse().unwrap());
        headers.insert("User-Agent", "keyflux".parse().unwrap());
        headers
    };
);

static HEADER_NAMES: &[&str] = &[
    "content-type",
    "content-length",
    "x-ratelimit-limit",
    "x-ratelimit-remaining",
];

impl GitHubEnvironmentSecretsFlux {
    pub fn new(owner: String, repo: String, environment_name: String, token: String) -> Self {
        Self {
            owner,
            repo,
            environment_name,
            token,
            public_key: GitHubPublicKey::default(),
            client: ClientBuilder::new().build().unwrap(),
        }
    }
}

static USER_AGENT: &str = env!("CARGO_PKG_NAME");
static API_VERSION: &str = "2022-11-28";
static ACCEPT: &str = "application/vnd.github.v3+json";

impl GitHubEnvironmentSecretsFlux {
    fn secret_url(context: &dyn FluxContext, owner: &str, repo: &str, environment_name: &str,
                  secret_name: Option<&str>) -> String {
        let base_url = format!(
            "https://api.github.com/repos/{}/{}/environments/{}/secrets",
            context.render_string(&owner),
            context.render_string(&repo),
            context.render_string(&environment_name),
        );
        secret_name.map_or(base_url.clone(), |name| format!("{}/{}", base_url, name))
    }

    async fn get_public_key(&self, context: &dyn FluxContext) -> Result<GitHubPublicKey> {
        trace!("Getting public key");
        let url = Self::secret_url(context, &self.owner, &self.repo, &self.environment_name, Some("public-key"));
        debug!("URL: {}", url);
        let client = &self.client;
        let response = client
            .get(&url)
            .headers(GITHUB_BASE_HEADERS.clone())
            .bearer_auth(context.render_string(&self.token))
            .send()
            .context(RequestSnafu {
                message: "Failed to send request".to_string(),
            }).await?;


        match response.status() {
            StatusCode::OK => Ok(response.json::<GitHubPublicKey>().context(JsonResponseSnafu { message: "Failed to parse JSON response".to_string() }).await?),
            StatusCode::NOT_FOUND => Err(Error::General {
                message: "Either the token is wrong and the repo is private or the repo does not exist".to_string()
            }.into()),
            StatusCode::UNAUTHORIZED => Err(Error::UnauthorizedError {
                message: "Unauthorized access while getting public key".to_string(),
            }.into()),
            status if status.is_client_error() || status.is_server_error() => Err(Error::General {
                message: format!("Failed to get public key, status: {}", status),
            }.into()),
            _ => Err(Error::General {
                message: "Unexpected status code while getting public key".to_string(),
            }.into()),
        }
    }
}

#[async_trait]
impl FluxInitialize for GitHubEnvironmentSecretsFlux {
    async fn initialize(&mut self, context: &dyn FluxContext) -> Result<()> {
        trace!("Initializing GitHubEnvironmentSecretsFlux");
        self.public_key = self.get_public_key(context).await?;
        Ok(())
    }
}
fn extract_headers(headers: &HeaderMap) -> HashMap<String, Value> {
    let mut extracted_headers = HashMap::new();

    for &header_name in HEADER_NAMES.iter() {
        if let Some(header_value) = headers.get(header_name) {
            if let Ok(header_str) = header_value.to_str() {
                extracted_headers.insert(header_name.to_string(), Value::String(header_str.to_string()));
            }
        }
    }

    extracted_headers
}


#[async_trait]
#[typetag::serde(name = "github_environment_secrets")]
impl Flux for GitHubEnvironmentSecretsFlux {
    async fn select_single_async(&self, key: &dyn Key) -> Result<KeyResponse> {
        let client = &self.client;
        let url = secret_url(&self.owner, &self.repo, &self.environment_name, Some(&key.name()));
        let response = client.get(url)
            .headers(GITHUB_BASE_HEADERS.clone())
            .bearer_auth(&self.token)
            .send()
            .context(RequestSnafu { message: "Failed to send request".to_string() })
            .await?;
        let mut extra: HashMap<String, Value> = HashMap::new();
        let status_code = response.status();
        let headers = response.headers();
        for name in HEADER_NAMES {
            if let Some(value) = headers.get(*name) {
                debug!("Header {}: {}", name, value.to_str().unwrap());
                extra.insert(name.to_string(), Value::String(value.to_str().unwrap().to_string()));
            }
        }

        match response.status() {
            status if status.is_success() => {
                extra.insert("status_code".to_string(), Value::String(status.as_u16().to_string()));
                let body_json: Value = response.json().context(JsonResponseSnafu { message: "Failed to parse JSON response".to_string() }).await?;
                Ok(KeyResponse::success(&key.name(), "select", Some(extra)))
            }
            StatusCode::NOT_FOUND => {
                extra.insert("message".to_string(), "Either the token is wrong and the repo is private or the repo does not exist".parse().unwrap());
                Ok(KeyResponse::failure(&key.name(), "select", Some(extra)))
            }
            StatusCode::UNAUTHORIZED => {
                extra.insert("message".to_string(), "Unauthorized access while selecting".parse().unwrap());
                Ok(KeyResponse::failure(&key.name(), "select", Some(extra)))
            }
            status if status.is_client_error() || status.is_server_error() => {
                extra.insert("message".to_string(), format!("Failed to select, status: {}", status).parse().unwrap());
                Ok(KeyResponse::failure(&key.name(), "select", Some(extra)))
            }
            _ => {
                extra.insert("message".to_string(), "Unexpected status code while selecting".parse().unwrap());
                Ok(KeyResponse::failure(&key.name(), "select", Some(extra)))
            }
        }
    }
    async fn delete_single_async(&self, key: &dyn Key) -> Result<KeyResponse> {
        let client = &self.client;
        let url = secret_url(&self.owner, &self.repo, &self.environment_name, Some(&key.name()));
        let response = client.delete(url)
            .headers(GITHUB_BASE_HEADERS.clone())
            .bearer_auth(&self.token)
            .send()
            .context(RequestSnafu { message: "Failed to send request".to_string() })
            .await?;
        let mut extra: HashMap<String, Value> = HashMap::new();
        let mut content_type: Option<String> = None;
        let mut status = response.status();

        content_type = response.headers().get("content-type").map(|v| v.to_str().unwrap().to_string());

        match response.status() {
            status if status.is_success() => { // 204, success but no return
                let status_code: Value = json!(status.as_u16());
                extra.insert("status_code".to_string(), status_code);
                Ok(KeyResponse::success(&key.name(), "delete", Some(extra)))
            }
            StatusCode::NOT_FOUND => {
                extra.insert("message".to_string(), "Either the token is wrong and the repo is private or the repo does not exist".parse().unwrap());
                Ok(KeyResponse::failure(&key.name(), "delete", Some(extra)))
            }
            StatusCode::UNAUTHORIZED => {
                extra.insert("message".to_string(), "Unauthorized access while deleting".parse().unwrap());
                Ok(KeyResponse::failure(&key.name(), "delete", Some(extra)))
            }
            status if status.is_client_error() || status.is_server_error() => {
                extra.insert("message".to_string(), format!("Failed to delete, status: {}", status).parse().unwrap());
                Ok(KeyResponse::failure(&key.name(), "delete", Some(extra)))
            }
            _ => {
                extra.insert("message".to_string(), "Unexpected status code while deleting".parse().unwrap());
                Ok(KeyResponse::failure(&key.name(), "delete", Some(extra)))
            }
        }
    }
    fn has_delete_single_async(&self) -> bool { true }
    async fn upsert_single_async(&self, key: &dyn Key) -> Result<KeyResponse> {
        let client = &self.client;
        let url = secret_url(&self.owner, &self.repo, &self.environment_name, Some(&key.name()));
        let payload = json!({
            "encrypted_value": encrypt_and_base64_encode(key.value(), &self.public_key.key).unwrap(),
            "key_id": self.public_key.key_id,
        });
        let response = client.put(url)
            .json(&payload)
            .headers(GITHUB_BASE_HEADERS.clone())
            .bearer_auth(&self.token)
            .send()
            .context(RequestSnafu { message: "Failed to send request".to_string() })
            .await?;
        let mut extra: HashMap<String, Value> = HashMap::new();
        match response.status() {
            status if status.is_success() => { // 204, success but no return
                let status_code: Value = json!(status.as_u16());
                extra.insert("status_code".to_string(), status_code);
                Ok(KeyResponse::success(&key.name(), "upsert", Some(extra)))
            }
            StatusCode::NOT_FOUND => {
                // let body: String = response.text().context(JsonResponseSnafu { message: "Failed to parse JSON response".to_string() }).await?;
                let status_code: Value = json!(response.status().as_u16());
                extra.insert("message".to_string(), "Either the token is wrong and the repo is private or the repo does not exist".parse().unwrap());
                // extra.insert("response_body".to_string(), body.parse().unwrap());
                extra.insert("status_code".to_string(), status_code);
                Ok(KeyResponse::failure(&key.name(), "upsert", Some(extra)))
            }
            StatusCode::UNAUTHORIZED => {
                // let body: String = response.text().context(JsonResponseSnafu { message: "Failed to parse JSON response".to_string() }).await?;
                let status_code: Value = json!(response.status().as_u16());
                extra.insert("message".to_string(), "Unauthorized access while upserting".parse().unwrap());
                // extra.insert("response_body".to_string(), body.parse().unwrap());
                extra.insert("status_code".to_string(), status_code);
                Ok(KeyResponse::failure(&key.name(), "upsert", Some(extra)))
            }
            status if status.is_client_error() || status.is_server_error() => {
                // let body: String = response.text().context(JsonResponseSnafu { message: "Failed to parse JSON response".to_string() }).await?;
                let status_code: Value = json!(response.status().as_u16());
                extra.insert("message".to_string(), format!("Failed to upsert, status: {}", status).parse().unwrap());
                // extra.insert("response_body".to_string(), body.parse().unwrap());
                extra.insert("status_code".to_string(), status_code);
                Ok(KeyResponse::failure(&key.name(), "upsert", Some(extra)))
            }
            _ => {
                // let body: String = response.text().context(JsonResponseSnafu { message: "Failed to parse JSON response".to_string() }).await?;
                let status_code: Value = json!(response.status().as_u16());
                extra.insert("message".to_string(), "Unexpected status code while upserting".parse().unwrap());
                // extra.insert("response_body".to_string(), body.parse().unwrap());
                extra.insert("status_code".to_string(), status_code);
                Ok(KeyResponse::failure(&key.name(), "upsert", Some(extra)))
            }
        }
    }
    fn has_upsert_single_async(&self) -> bool { true }

    async fn list_async(&self, value: Value) -> Result<Vec<KeyResponse>> {
        let client = &self.client;
        let url = secret_url(&self.owner, &self.repo, &self.environment_name, None);
        let response = client.get(url)
            .headers(GITHUB_BASE_HEADERS.clone())
            .bearer_auth(&self.token)
            .send()
            .context(RequestSnafu { message: "Failed to send request".to_string() })
            .await?;


        let mut extra: HashMap<String, Value> = HashMap::new();
        match response.status() {
            status if status.is_success() => {
                let status_code: Value = json!(status.as_u16());
                extra.insert("status_code".to_string(), status_code);
                let body = response.json::<Value>().context(JsonResponseSnafu { message: "Failed to parse JSON response".to_string() }).await?;
                println!("Body: {:#?}", body);
                // let body_json: Value = response.json().context(JsonResponseSnafu { message: "Failed to parse JSON response".to_string() }).await?;
                Ok(vec![KeyResponse::success("all", "select", Some(extra))])
            }
            StatusCode::NOT_FOUND => {
                extra.insert("message".to_string(), "Either the token is wrong and the repo is private or the repo does not exist".parse().unwrap());
                Ok(vec![KeyResponse::failure("all", "select", Some(extra))])
            }
            StatusCode::UNAUTHORIZED => {
                extra.insert("message".to_string(), "Unauthorized access while selecting".parse().unwrap());
                Ok(vec![KeyResponse::failure("all", "select", Some(extra))])
            }
            status if status.is_client_error() || status.is_server_error() => {
                extra.insert("message".to_string(), format!("Failed to select, status: {}", status).parse().unwrap());
                Ok(vec![KeyResponse::failure("all", "select", Some(extra))])
            }
            _ => {
                extra.insert("message".to_string(), "Unexpected status code while selecting".parse().unwrap());
                Ok(vec![KeyResponse::failure("all", "select", Some(extra))])
            }
        }
    }
    fn has_list_async(&self) -> bool { true }
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};
    use std::sync::{Mutex, Once};

    use dotenv::dotenv;
    use env_logger::WriteStyle;
    use lazy_static::lazy_static;
    use tokio::test;

    use super::*;

    lazy_static! {
        static ref INIT: Once = Once::new();
        static ref TEST_SETUP: Mutex<(GitHubEnvironmentSecretsFlux, MyContext)> = Mutex::new(setup());
    }

    struct MyContext;

    impl FluxContext for MyContext {
        fn config_dir(&self) -> Option<&Path> {
            todo!()
        }

        fn config_path(&self) -> &PathBuf {
            todo!()
        }

        fn render_value(&self, value: &Value) -> Value {
            value.clone() // Placeholder for actual implementation
        }

        fn render_string(&self, value: &str) -> String {
            value.to_string()
        }
    }

    fn initialize_logging() {
        dotenv().ok(); // Load .env file if exists
        let _ = env_logger::builder()
            .is_test(true)
            .write_style(WriteStyle::Always)
            .filter_level(log::LevelFilter::Trace)
            .try_init();
    }

    fn setup() -> (GitHubEnvironmentSecretsFlux, MyContext) {
        initialize_logging();
        let owner = std::env::var("GITHUB_OWNER").expect("Missing GITHUB_OWNER");
        let repo = std::env::var("GITHUB_REPO").expect("Missing GITHUB_REPO");
        let environment = std::env::var("GITHUB_ENVIRONMENT").expect("Missing GITHUB_ENVIRONMENT");
        let token = std::env::var("GITHUB_TOKEN").expect("Missing GITHUB_TOKEN");

        let flux = GitHubEnvironmentSecretsFlux::new(
            owner,
            repo,
            environment,
            token,
        );
        let context = MyContext;

        (flux, context)
    }

    #[tokio::test]
    async fn test_initialize_flux() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");
    }

    #[tokio::test]
    async fn test_upsert_secret() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        let key = KeyStruct::new("test_key".to_string(), "test_value".to_string(), None);
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");
        let result = flux.upsert_single_async(&key).await;
        assert!(result.is_ok(), "Failed to upsert key");
        println!("Upsert result: {:?}", result.unwrap());
    }

    #[tokio::test]
    async fn test_delete_secret() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        let key = KeyStruct::new("test_key".to_string(), "test_value".to_string(), None);
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");
        assert!(flux.upsert_single_async(&key).await.is_ok(), "Failed to upsert key before deletion");
        let delete_result = flux.delete_single_async(&key).await;
        assert!(delete_result.is_ok(), "Failed to delete key");
        println!("Delete result: {:?}", delete_result.unwrap());
    }

    #[tokio::test]
    async fn test_select_secret() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        let key = KeyStruct::new("test_key".to_string(), "test_value".to_string(), None);
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");
        assert!(flux.upsert_single_async(&key).await.is_ok(), "Failed to upsert key before selecting");
        let select_result = flux.select_single_async(&key).await;
        assert!(select_result.is_ok(), "Failed to select key");
        println!("Select result: {:?}", select_result.unwrap());
    }

    #[tokio::test]
    async fn test_list_secrets() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        assert!(flux.initialize(context).await.is_ok(), "Initialization failed");
        let list_result = flux.list_async(json!({})).await;
        assert!(list_result.is_ok(), "Failed to list secrets");
        println!("List result: {:?}", list_result.unwrap());
    }

    #[tokio::test]
    async fn test_deselect_secret() {
        let (ref mut flux, ref context) = *TEST_SETUP.lock().unwrap();
        let value = json!({
            "type": "github_environment_secrets",
            "owner": "test_owner",
            "repo": "test_repo",
            "environment_name": "test_environment",
            "token": "test_token",
        });

        let flux = GitHubEnvironmentSecretsFlux::deserialize(&value).unwrap();
        println!("Deserialized flux: {:?}", flux);
    }
}
