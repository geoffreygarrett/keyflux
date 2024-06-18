use crate::Configs;
use crate::error::ActionError;
use crate::action::Action;
use log::{info, trace, warn};
use std::env;
use crate::config::SecretConfig;
use colored::*;

pub struct SecretManager {
    configs: Configs,
}

impl SecretManager {
    pub fn new(configs: Configs) -> Self {
        SecretManager {
            configs,
        }
    }

    pub async fn sync_secrets(&mut self) -> Result<(), ActionError> {
        for config in &self.configs.configs {
            for action_config in &config.actions {
                let action: Box<dyn Action> = action_config.to_action()?;
                action.initialize().await?;

                let mut secrets_to_sync = Vec::new();

                for (key, secret_config) in &config.secrets {
                    if let Some(value) = self.resolve_secret_value(key, secret_config) {
                        info!("🔑 Syncing key: {} with value: {}", key.green(), "******".blue());
                        secrets_to_sync.push((key.clone(), value));
                    } else {
                        warn!("⚠️  Key '{}' could not be resolved.", key.yellow());
                    }
                }

                if !secrets_to_sync.is_empty() {
                    action.batch(&secrets_to_sync).await?;
                }

                action.finalize().await?;
            }
        }
        Ok(())
    }

    pub fn resolve_secret_value(&self, key: &str, secret_config: &SecretConfig) -> Option<String> {
        match secret_config {
            SecretConfig::Direct(value) => {
                match env::var(value) {
                    Ok(env_value) => {
                        info!("{}", format!("🌿 Env var '{}' for key '{}' found.", value.green(), key));
                        Some(env_value)
                    }
                    Err(_) => {
                        warn!("{}", format!("🔍 Env var '{}' for key '{}' not found, using direct value.", value.yellow(), key));
                        Some(value.clone())
                    }
                }
            }
            SecretConfig::Structured { value, key: env_key, .. } => {
                if let Some(v) = value {
                    trace!("{}", format!("🏷️ Using provided direct value for key '{}'.", key));
                    Some(v.clone())
                } else if let Some(k) = env_key {
                    trace!("{}", format!("🔍 Trying to retrieve value for key '{}' from env var '{}'.", key, k));
                    match env::var(k) {
                        Ok(env_value) => {
                            info!("{}", format!("🌿 Env var '{}' for key '{}' found.", k.green(), key));
                            Some(env_value)
                        }
                        Err(_) => {
                            warn!("{}", format!("🔍 Env var '{}' for key '{}' not found.", k.yellow(), key));
                            None
                        }
                    }
                } else {
                    warn!("{}", format!("⚠️  No value or key provided in structured config for key '{}'.", key));
                    None
                }
            }
        }
    }
}
