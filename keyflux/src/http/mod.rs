// use std::collections::HashMap;
// // src/http.rs
// use reqwest::{Client, Method, Url, Response, Error as ReqwestError};
// use reqwest::header::HeaderMap;
// use serde::Serialize;
// use async_trait::async_trait;
//
// pub mod vercel;
// mod r#macro;  // Assuming this submodule defines specific Vercel API requests
//
// /// Trait for defining properties of an API request.
// pub trait ApiRequest {
//     fn endpoint(&self) -> String;
//     fn method(&self) -> Method;
//     fn headers(&self) -> HeaderMap;  // Returns default headers necessary for the request
//     fn body(&self) -> Option<String>;
//     /// Query parameters
//     fn query(&self) -> HashMap<String, String>;
// }
//
// /// Trait for sending API requests.
// #[async_trait]
// pub trait SendRequest: ApiRequest + Sized {
//     async fn send(&self, client: &Client) -> Result<Response, ReqwestError> {
//         let base_url = Url::parse(&self.endpoint())?;
//         let url = base_url.join(&self.method().as_str())?;
//         let mut request_builder = client.request(self.method(), url);
//         request_builder = request_builder.headers(self.headers());
//
//         // Apply query parameters
//         let query_params = self.query();
//         if !query_params.is_empty() {
//             request_builder = request_builder.query(&query_params);
//         }
//
//         if let Some(body) = self.body() {
//             request_builder = request_builder.body(body);
//         }
//
//         request_builder.send().await
//     }
// }
//
// /// Builder for constructing API requests, allows adding or modifying headers.
// pub struct ApiRequestBuilder<T: ApiRequest> {
//     inner: T,
//     extra_headers: HeaderMap,
// }
//
// impl<T: ApiRequest> ApiRequestBuilder<T> {
//     /// Creates a new ApiRequestBuilder with a given inner API request.
//     pub fn new(inner: T) -> Self {
//         ApiRequestBuilder { inner, extra_headers: HeaderMap::new() }
//     }
//
//     /// Adds or updates headers for the request.
//     pub fn set_headers(mut self, headers: HeaderMap) -> Self {
//         self.extra_headers.extend(headers);
//         self
//     }
//
//     /// Builds the final API request, merging additional headers with those defined by the API request.
//     pub fn build(self) -> T {
//         let mut combined_headers = self.inner.headers();
//         combined_headers.extend(self.extra_headers);
//         // Here we assume that there is a method or logic within the `ApiRequest` to update headers.
//         self.inner.update_headers(combined_headers);  // This line assumes you add such a method to `ApiRequest`
//         self.inner
//     }
// }
