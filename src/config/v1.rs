use serde::{Deserialize, Serialize};
use std::collections::HashMap;
use std::path::PathBuf;
use crate::config::env::{EnvConfig, EnvConfigList};
use crate::config::group::GroupConfig;

#[derive(Deserialize, Debug, Serialize)]
#[serde(tag = "version")]
pub struct KeyFluxConfigV1 {
    #[serde(default = "default_version_v1")]
    pub version: i32,
    pub env: Option<EnvConfigList>,
    pub groups: Vec<GroupConfig>,
}

impl KeyFluxConfigV1 {
    pub fn default() -> Self {
        KeyFluxConfigV1 {
            version: 1,
            env: None,
            groups: Vec::new(),
        }
    }
}

impl KeyFluxConfigV1 {
    pub fn env(&self) -> Option<&EnvConfigList> {
        self.env.as_ref()
    }
}

fn default_version_v1() -> i32 {
    1
}
