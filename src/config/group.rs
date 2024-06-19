use std::collections::HashMap;
use std::fmt;
use serde::{Deserialize, Serialize};
use crate::config::env::EnvConfig;
use crate::config::KeyEnum;
use crate::file::key_collection::KeyCollection;
use crate::traits::Flux;

#[derive(Deserialize, Serialize)]
pub struct GroupConfig {
    pub env: Option<EnvConfig>,
    pub fluxes: Vec<Box<dyn Flux>>,
    pub keys: KeyCollection,
}

impl fmt::Debug for GroupConfig {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        f.debug_struct("EnvironmentConfig")
            .field("env", &self.env)
            .field("fluxes", &format!("[{} fluxes]", self.fluxes.len()))
            .field("keys", &self.keys)
            .finish()
    }
}
