use reqwest::{Client, Response};
use async_trait::async_trait;
use crate::error::FluxError;

#[async_trait]
pub trait Fetch {
    async fn fetch(&self, _client: &Client) -> Result<Response, FluxError>;
}


#[async_trait]
pub trait BearerToken {
    fn bearer_token(&self) -> Option<String>;
}
