use crate::error::FluxError;
use async_trait::async_trait;
use reqwest::{Client, Response};

#[async_trait]
pub trait Fetch {
    async fn fetch(&self, _client: &Client) -> Result<Response, FluxError>;
}

#[async_trait]
pub trait BearerToken {
    fn bearer_token(&self) -> Option<String>;
}
