use serde::{Deserialize, Serialize};
use serde_yaml::from_reader;
use std::fs::File;
use std::collections::HashMap;
use reqwest::Client;

#[derive(Debug, Deserialize, Serialize)]
struct SecretConfig {
    env: String,
    github: GithubConfig,
    secrets: HashMap<String, SecretDetail>,
}

#[derive(Debug, Deserialize, Serialize)]
struct GithubConfig {
    owner: String,
    repo: String,
    branch: String,
    path: String,
}

#[derive(Debug, Deserialize, Serialize)]
struct SecretDetail {
    value: String,
    rename: Option<String>,
    condition: Option<String>,
}

pub async fn manage_secrets(env_file: String, config_file: String) {
    dotenv::from_filename(env_file).ok();

    let file = File::open(config_file).expect("Could not open config file.");
    let configs: Vec<SecretConfig> = from_reader(file).expect("Could not parse config file.");

    for config in configs.into_iter() {
        process_secret(config).await;
    }
}

async fn process_secret(config: SecretConfig) {
    let client = Client::new();
    for (key, secret_detail) in config.secrets {
        if let Ok(secret_value) = std::env::var(&secret_detail.value) {
            let secret_key = secret_detail.rename.unwrap_or(key);
            set_secret(&client, &config.github, &secret_key, &secret_value).await;
        }
    }
}

async fn set_secret(client: &Client, github: &GithubConfig, key: &str, value: &str) {
    let url = format!(
        "https://api.github.com/repos/{}/{}/actions/secrets/{}",
        github.owner, github.repo, key
    );

    let body = serde_json::json!({
        "encrypted_value": value,
        "key_id": "YOUR_KEY_ID"
    });

    let res = client
        .put(&url)
        .json(&body)
        .send()
        .await
        .expect("Failed to set secret.");

    println!("Set secret {}: {:?}", key, res.status());
}
