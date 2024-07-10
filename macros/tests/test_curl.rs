use keyflux_curl::use_handlebars;
use keyflux_common::prelude::Deserialize;
use keyflux_common::prelude::Serialize;
use reqwest::Response;

use keyflux_macros::curl;

struct MyStruct;
struct MyError;
// #[curl("POST", url = "http://api.example.com/data", type = "application/json")]
// fn process_api_response(response: Response) -> Result<MyStruct, MyError> {
//     // The body of this function could post-process the response,
//     // e.g., converting JSON to a Rust data structure
//
//     // serde_json::from_str(&response).map_err(|e| MyError::new(e))
//     Ok(MyStruct)
// }

#[curl(inline = r#"curl -L \
    -H "Accept: application/vnd.github+json" \
    -H "Authorization: Bearer {{arg input.token required=true}}" \
    -H "X-GitHub-Api-Version: 2022-11-28" \
    https://api.github.com/repos/{{arg input.owner required=true}}/{{arg input.repo required=true}}/environments/{{arg input.environment_name required=true}}/secrets{{#if key.name}}/{{arg key.name}}{{/if}}"#)]
fn fetch_environment_vars(response: Response) -> Result<(), reqwest::Error> {
    println!("{:#?}", response);
    // Process the curl command response here
    Ok(())
}


#[cfg(test)]
mod tests {
    use serde_json::json;
    use super::*;

    #[tokio::test]
    async fn test_curl() {
        let response = reqwest::get("http://example.com").await.unwrap();
        println!("{:?}", response);
        // let response = process_api_response().unwrap();
        // // assert_eq!(response, MyStruct { /* ... */ });
    }

    #[tokio::test]
    async fn test_curl_with_file() {
        let input = FetchEnvironmentVarsInput {
            key: Some(json!({
                "name": "my-name",
                "value": "my-value",
            })),
            input: json!({
                "token": "my-token",
                "owner": "my-owner",
                "repo": "my-repo",
                "environment_name": "my-environment-name",
            }),
        };
        let response = fetch_environment_vars(&input).await.unwrap();
        println!("{:?}", response);
        // assert_eq!(response, ());
    }

    // #[tokio::test]
    // fn test_curl_with_file() {
    //     let response = handle_external_command().unwrap();
    //     assert_eq!(response, ());
    // }
}
