#[macro_export]
macro_rules! define_api_request {
    (
        $struct_name:ident {
            $( $field_name:ident: $field_type:ty $( = $default:expr )? ),* $(,)?
        },
        endpoint: $endpoint:expr,
        method: $method:expr,
        token_field: $token_field:ident,
        body: { $($body_key:expr => $body_val:ident),* $(,)? },
        query: { $($query_key:expr => $query_val:ident),* $(,)? }
    ) => {
        #[derive(serde::Serialize, serde::Deserialize)]
        pub struct $struct_name {
            $(
                $( #[serde(default = $default)] )?
                pub $field_name: $field_type,
            )*
            pub token: String,
        }

        impl $struct_name {
            // Constructor to easily create a new instance of this request
            pub fn new($($field_name: $field_type),*, token: String) -> Self {
                Self {
                    $($field_name),*,
                    token,
                }
            }
        }

        impl crate::http::ApiRequest for $struct_name {
            fn endpoint(&self) -> String {
                format!("{}", $endpoint)
            }

            fn method(&self) -> reqwest::Method {
                $method
            }

            fn headers(&self) -> reqwest::header::HeaderMap {
                let mut headers = reqwest::header::HeaderMap::new();
                headers.insert(
                    reqwest::header::AUTHORIZATION,
                    reqwest::header::HeaderValue::from_str(&format!("Bearer {}", self.token)).unwrap(),
                );
                headers.insert(
                    reqwest::header::CONTENT_TYPE,
                    reqwest::header::HeaderValue::from_static("application/json"),
                );
                headers
            }

            fn body(&self) -> Option<String> {
                Some(serde_json::json!({
                    $( $body_key: self.$body_val, )*
                }).to_string())
            }

            fn query(&self) -> std::collections::HashMap<String, String> {
                construct_query!(
                    $(
                        $query_key => self.$query_val, ""
                    ),*
                )
            }
        }
    };
}
