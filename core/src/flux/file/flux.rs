use std::path::PathBuf;

use keyflux_common::prelude::*;

#[derive(Serialize, Deserialize, Clone, Debug)]
pub struct FileFlux {
    #[serde(default = "default_format")]
    pub format: String,
    // #[proxy_name = "path"]
    pub path: PathBuf,
    // #[serde(default = "default_strategy")]
    // pub save_strategy: SaveStrategy,
    // #[serde(default = "default_verbosity")]
    // pub verbosity: Verbosity,
    #[serde(skip)]
    pub config_dir: PathBuf,
}


fn default_format() -> String {
    "env".to_string()
}