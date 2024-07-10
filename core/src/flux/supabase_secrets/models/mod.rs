use serde::{Deserialize, Serialize};

#[derive(Debug, Serialize, Deserialize)]
pub struct PgsodiumConfig {
    pub root_key: String,
}

#[derive(Debug, Serialize, Deserialize)]
pub struct ApiKey {
    pub name: String,
    pub api_key: String,
}

#[derive(Debug, Serialize, Deserialize)]
pub struct Secret {
    pub name: String,
    pub value: String,
    pub description: Option<String>,
}


#[derive(Debug, Serialize, Deserialize)]
pub struct DeletePayload {
    pub names: Vec<String>,
}
