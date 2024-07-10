use std::path::{Path, PathBuf};

use handlebars::Handlebars;
use serde_json::Value;

use keyflux_common::prelude::*;

#[derive(Debug, Serialize, Deserialize)]
pub struct Context<'a> {
    config_path: PathBuf,
    handlebars: Handlebars<'a>,
    data: Value,
}

impl FluxContext for Context<'_> {
    fn config_dir(&self) -> Option<&Path> {
        self.config_path.parent()
    }

    fn config_path(&self) -> &PathBuf {
        &self.config_path
    }

    fn render_value(&self, value: &Value) -> Value {
        self.handlebars.render_template(serde_json::to_string(value).unwrap().as_str(), &self.data).unwrap().parse().unwrap()
    }

    fn render_string(&self, value: &str) -> String {
        self.handlebars.render_template(value, &self.data).unwrap()
    }
}
