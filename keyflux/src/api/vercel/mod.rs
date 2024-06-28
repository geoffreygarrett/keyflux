mod delete;
mod select;
mod upsert;

use serde::{Deserialize, Serialize};
// pub use upsert::VercelEnvironmentUpsert;

// pub use upsert::VercelEnvironmentCheck;

pub static VERCEL_ACCESS_TOKEN: &str = "VERCEL_ACCESS_TOKEN";

#[derive(Serialize, Debug, Clone, PartialEq, Eq, PartialOrd, Ord, Deserialize)]
#[serde(rename_all = "lowercase")]
pub enum VariableType {
    System,
    Secret,
    Encrypted,
    Plain,
    Sensitive,
}
