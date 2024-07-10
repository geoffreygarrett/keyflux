use std::collections::HashMap;

use async_trait::async_trait;
use log::trace;
use reqwest::{Client, StatusCode};
use serde::Serialize;
use serde_json::{json, Value};

use keyflux_common::prelude::*;

use crate::flux::vercel_projects::models;
use crate::flux::vercel_projects::models::EnvironmentVariable;

#[typetag::serde(name = "vercel_projects")]
impl Key for EnvironmentVariable {
    fn name(&self) -> &str {
        &self.key
    }

    fn value(&self) -> &str {
        &self.value
    }

    fn get(&self, key: &str) -> Option<Value> {
        match key {
            "target" => Some(serde_json::to_value(&self.target).unwrap()),
            "type" => Some(serde_json::to_value(&self.var_type).unwrap()),
            "sunset_secret_id" => self.sunset_secret_id.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "id" => Some(serde_json::to_value(&self.id).unwrap()),
            "configuration_id" => self.configuration_id.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "created_at" => Some(serde_json::to_value(&self.created_at).unwrap()),
            "updated_at" => Some(serde_json::to_value(&self.updated_at).unwrap()),
            "created_by" => self.created_by.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "updated_by" => self.updated_by.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "git_branch" => self.git_branch.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "edge_config_id" => self.edge_config_id.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "edge_config_token_id" => self.edge_config_token_id.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "content_hint" => self.content_hint.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "internal_content_hint" => self.internal_content_hint.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "decrypted" => self.decrypted.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "comment" => self.comment.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "custom_environment_ids" => self.custom_environment_ids.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "vsm_value" => self.vsm_value.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            "system" => self.system.as_ref().map(|v| serde_json::to_value(v).unwrap()),
            _ => None,
        }
    }
}

#[macro_export]
macro_rules! extract_response_details {
    ($response:expr, $key:expr, $operation:expr, {
        $($status:pat => $message:expr),* $(,)?
    }) => {{
        let mut extra: HashMap<String, Value> = HashMap::new();
        let status_code: Value = json!($response.status().as_u16());
        extra.insert("status_code".to_string(), status_code.clone());

        match $response.status() {
            status if status.is_success() => {
                Ok(KeyResponse::success(&$key.name(), $operation, Some(extra)))
            }
            $(
                $status => {
                    // let body: String = $response.text().await?;
                    // extra.insert("message".to_string(), $message.parse().unwrap());
                    // extra.insert("response_body".to_string(), body.parse().unwrap());
                    Ok(KeyResponse::failure(&$key.name(), $operation, Some(extra)))
                }
            )*
            status if status.is_client_error() || status.is_server_error() => {
                // let body: String = $response.text().await?;
                // extra.insert("message".to_string(), format!("Failed to {}, status: {}", $operation, status).parse().unwrap());
                // extra.insert("response_body".to_string(), body.parse().unwrap());
                Ok(KeyResponse::failure(&$key.name(), $operation, Some(extra)))
            }
            _ => {
                // let body: String = $response.text().await?;
                // extra.insert("message".to_string(), format!("Unexpected status code while {}: {}", $operation, $response.status()).parse().unwrap());
                // extra.insert("response_body".to_string(), body.parse().unwrap());
                Ok(KeyResponse::failure(&$key.name(), $operation, Some(extra)))
            }
        }
    }};
}

#[derive(Debug, Serialize, Deserialize, Clone)]
#[serde(rename_all = "camelCase")]
pub enum VariableType {
    System,
    Secret,
    Encrypted,
    Plain,
    Sensitive,
}

#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct VercelProjectsFlux {
    pub id_or_name: String,
    pub token: Option<String>,
    #[serde(rename = "type")]
    pub var_type: VariableType,
    pub target: Vec<String>,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub git_branch: Option<String>,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub comment: Option<String>,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub slug: Option<String>,
    #[serde(skip_serializing_if = "Option::is_none")]
    pub team_id: Option<String>,
    pub upsert: bool,
    // #[serde(skip, default)]
    // pub client: Client,
}

// fn coalesce<T: Clone>(values: &[Option<T>]) -> Option<T> {
//     values.iter().filter_map(|v| v.clone()).next()
// }


#[derive(Debug, Clone)]
enum ConfigValue<T> {
    Raw(Value),
    Parsed(T),
}

impl<T: for<'a> TryFrom<&'a Value, Error=serde_json::Error>> ConfigValue<T> {
    fn into_parsed(self) -> Option<T> {
        match self {
            ConfigValue::Parsed(parsed) => Some(parsed),
            ConfigValue::Raw(value) => T::try_from(&value).ok(),
        }
    }
}



macro_rules! coalesce {
    ($val:expr, $default:expr) => {{
        match $val {
            Some(v) => match serde_json::from_value(v.clone()) {
                Ok(converted) => converted,
                Err(_) => $default,
            },
            None => $default,
        }
    }};
}
macro_rules! coalesce_value {
    ($val:expr, $default:expr) => {{
        $val.unwrap_or($default.into())
    }};
}

impl VercelProjectsFlux {
    pub fn new(
        id_or_name: String,
        token: Option<String>,
        var_type: VariableType,
        target: Vec<String>,
        git_branch: Option<String>,
        comment: Option<String>,
        slug: Option<String>,
        team_id: Option<String>,
        upsert: bool,
    ) -> Self {
        Self {
            id_or_name,
            token,
            var_type,
            target,
            git_branch,
            comment,
            slug,
            team_id,
            upsert,
        }
    }
    fn build_upsert_query_params(&self) -> HashMap<String, String> {
        let mut query_params = HashMap::new();
        // let upsert = coalesce(&[Some(self.upsert)]);
        query_params.insert("upsert".to_string(), self.upsert.to_string());
        if let Some(team_id) = &self.team_id {
            query_params.insert("teamId".to_string(), team_id.clone());
        }
        if let Some(slug) = &self.slug {
            query_params.insert("slug".to_string(), slug.clone());
        }
        query_params
    }

    fn build_upsert_payload(&self, key: &dyn Key) -> Value {
        let comment = coalesce!(key.get("comment"), self.comment.clone());
        let var_type = coalesce!(key.get("type"), self.var_type.clone());

        let mut body = json!({
            "key": key.name(),
            "value": key.value(),
            "type": serde_json::to_value(&var_type).unwrap(),
        });

        if !self.target.is_empty() {
            body["target"] = self.target.clone().into();
        }
        if let Some(git_branch) = &self.git_branch {
            body["gitBranch"] = git_branch.clone().into();
        }
        if let Some(comment) = &comment {
            body["comment"] = comment.clone().into();
        }

        body
    }
}

#[async_trait]
impl FluxInitialize for VercelProjectsFlux {
    async fn initialize(&mut self, context: &dyn FluxContext) -> Result<()> {
        trace!("Initializing VercelProjectsFlux");
        // Assuming there's some initialization logic specific to VercelProjectsFlux
        Ok(())
    }
}

#[async_trait]
#[typetag::serde(name = "vercel_projects")]
impl Flux for VercelProjectsFlux {
    fn has_list_async(&self) -> bool { true }
    async fn list_async(&self, value: Value) -> Result<Vec<KeyResponse>> {
        let client = Client::new();
        let team_id = coalesce!(value.get("team_id"), self.team_id.clone());
        let slug = coalesce!(value.get("slug"), self.slug.clone());
        let git_branch = coalesce!(value.get("git_branch"), self.git_branch.clone());
        let url = format!("https://api.vercel.com/v9/projects/{}/env", self.id_or_name);
        let parsed = crate::flux::vercel_projects::actions::get_environment_variables(
            &client,
            &self.id_or_name,
            &self.token.clone().unwrap_or_default(),
            team_id.as_deref(),
            slug.as_deref(),
            git_branch.as_deref(),
            None,
            None,
        ).await?;
        let mut responses: Vec<KeyResponse> = vec![];
        for env_var in parsed.envs {
            let mut extra: HashMap<String, Value> = HashMap::new();
            let flux_key_data = serde_json::to_value(&env_var).unwrap();
            extra.insert("flux_key_data".to_string(), flux_key_data);
            responses.push(KeyResponse::success(&env_var.key, "list", Some(extra)));
        }
        Ok(responses)
    }

    async fn select_single_async(&self, key: &dyn Key) -> Result<KeyResponse> {
        let client = Client::new();
        let url = format!("https://api.vercel.com/v9/projects/{}/env/{}", self.id_or_name, key.name());
        let response = client.get(&url)
            .bearer_auth(self.token.clone().unwrap_or_default())
            .send()
            .await
            .context(RequestSnafu { message: "Failed to send request".to_string() })?;

        extract_response_details!(response, key, "select", {
            StatusCode::NOT_FOUND => "Either the token is wrong and the repo is private or the repo does not exist",
            StatusCode::UNAUTHORIZED => "Unauthorized access while selecting"
        })
    }

    fn has_select_single_async(&self) -> bool { true }

    async fn delete_single_async(&self, key: &dyn Key) -> Result<KeyResponse> {
        let client = Client::new();
        let url = format!("https://api.vercel.com/v9/projects/{}/env/{}", self.id_or_name, key.name());
        let parsed = crate::flux::vercel_projects::actions::delete_environment_variable(
            &client,
            &self.id_or_name,
            &key.name(),
            &self.token.clone().unwrap_or_default(),
        ).await?;
        let mut extra: HashMap<String, Value> = HashMap::new();
        let flux_key_data = serde_json::to_value(&parsed).unwrap();
        extra.insert("flux_key_data".to_string(), flux_key_data);
        Ok(KeyResponse::success(&key.name(), "delete", Some(extra)))
    }

    fn has_delete_single_async(&self) -> bool { true }

    async fn upsert_many_async(&self, keys: &[&dyn Key]) -> Result<Vec<KeyResponse>> {
        let client = Client::new();
        let url = format!("https://api.vercel.com/v10/projects/{}/env", self.id_or_name);
        let query_params = self.build_upsert_query_params();
        let payloads: Vec<Value> = keys.iter().map(|key| self.build_upsert_payload(*key)).collect();
        let builder = client.post(url)
            .bearer_auth(self.token.clone().unwrap_or_default())
            .header("Content-Type", "application/json")
            .query(&query_params)
            .json(&payloads);
        println!("Upsert many request: {:?}", builder);

        let response = builder
            .send()
            .await
            .context(RequestSnafu { message: "Failed to send request".to_string() })?;
        let is_success = response.status().is_success();
        let response = response.json::<models::EnvironmentVariableResponse>().await.context(TextParseSnafu { message: "Failed to parse response body".to_string() })?;
        // iterate through response.created and response.failed
        let mut responses: Vec<KeyResponse> = vec![];
        for created in response.created {
            let mut extra: HashMap<String, Value> = HashMap::new();
            let flux_key_data = serde_json::to_value(&created).unwrap();
            extra.insert("flux_key_data".to_string(), flux_key_data);
            responses.push(KeyResponse::success(&created.key, "upsert", Some(extra)));
        }
        for failed in response.failed {
            let mut extra: HashMap<String, Value> = HashMap::new();
            let error_data = serde_json::to_value(&failed).unwrap();
            extra.insert("error_data".to_string(), error_data);
            responses.push(KeyResponse::failure(&failed.error.code, "upsert", Some(extra)));
        }
        Ok(responses)
    }
    fn has_upsert_many_async(&self) -> bool { true }
}

#[derive(Debug, Serialize, Deserialize)]
struct KeyStruct {
    name: String,
    value: String,
    extra: Option<HashMap<String, Value>>,
}

impl KeyStruct {
    pub fn new(name: String, value: String, extra: Option<HashMap<String, Value>>) -> Self {
        Self {
            name,
            value,
            extra,
        }
    }
}

#[typetag::serde(name = "basic_key")]
impl Key for KeyStruct {
    fn name(&self) -> &str {
        &self.name
    }

    fn value(&self) -> &str {
        &self.value
    }
}

#[cfg(test)]
mod tests {
    use std::path::{Path, PathBuf};
    use std::sync::{Mutex, Once};

    use dotenv::dotenv;
    use lazy_static::lazy_static;
    use serde_json::json;
    use tokio::test;

    use super::*;

    lazy_static! {
        static ref INIT: Once = Once::new();
        static ref TEST_SETUP: Mutex<(VercelProjectsFlux, MyContext)> = Mutex::new(setup());
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
            .write_style(env_logger::WriteStyle::Always)
            .filter_level(log::LevelFilter::Trace)
            .try_init();
    }

    fn setup() -> (VercelProjectsFlux, MyContext) {
        initialize_logging();
        let id_or_name = std::env::var("VERCEL_PROJECT_ID_OR_NAME").expect("Missing VERCEL_PROJECT_ID_OR_NAME");
        let token = std::env::var("VERCEL_ACCESS_TOKEN").ok();
        let var_type = VariableType::Plain; // Adjust as needed
        let target = vec!["preview".to_string()]; // Adjust as needed
        let git_branch = Some("develop".to_string());
        let comment = Some("Test environment variable".to_string());
        let slug = None;
        let team_id = None;
        let flux = VercelProjectsFlux {
            id_or_name,
            token,
            var_type,
            target,
            git_branch,
            comment,
            slug,
            team_id,
            upsert: true,
        };

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
        println!("Upsert result: {:#?}", result.unwrap());
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

    // #[tokio::test]
    // async fn test_deselect_secret() {
    //     let value = json!({
    //         "type": "vercel_projects",
    //         "id_or_name": "test_id_or_name",
    //         "token": "test_token",
    //         "var_type": "plain",
    //         "target": ["preview"],
    //         "git_branch": "feature-branch",
    //         "comment": "Test environment variable",
    //         "slug": "test-slug",
    //         "team_id": "test-team-id",
    //         "upsert": true,
    //     });
    //
    //     let flux: VercelProjectsFlux = serde_json::from_value(value).unwrap();
    //     println!("Deserialized flux: {:?}", flux);
    // }
}
