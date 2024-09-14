use std::collections::{BTreeMap, HashMap};
use std::path::PathBuf;

use serde::{Deserialize, Serialize};

#[derive(Deserialize, Debug, Serialize)]
pub struct KeyFluxConfigV1 {
    #[serde(default = "default_version_v1")]
    pub version: i32,
    pub env: Option<EnvConfig>,
    pub groups: Vec<GroupConfig>,
}

#[derive(Deserialize, Debug, Serialize)]
#[serde(untagged)]
enum ConfigOr<T, C = HashMap<String, String>> {
    Value(T),
    Config(C),
}

#[derive(Deserialize, Debug, Serialize)]
pub struct EnvConfig {
    files: Option<Vec<PathBuf>>,
    #[serde(flatten)]
    pub vars: BTreeMap<String, ConfigOr<String>>,
}

#[derive(Deserialize, Debug, Serialize)]
pub struct Variable {
    pub name: String,
    pub value: String,
}

#[derive(Deserialize, Debug, Serialize)]
pub struct GroupConfig {
    pub name: String,
    pub keys: Vec<String>,
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
