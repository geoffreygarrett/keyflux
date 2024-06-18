mod upsert;
mod select;
mod delete;

use serde::Serialize;
pub use upsert::VercelEnvironmentUpsert;

// pub use upsert::VercelEnvironmentCheck;


pub static VERCEL_ACCESS_TOKEN: &str = "VERCEL_ACCESS_TOKEN";

#[derive(Serialize, Debug)]
#[serde(rename_all = "lowercase")]
pub enum VariableType {
    System,
    Secret,
    Encrypted,
    Plain,
    Sensitive,
}
