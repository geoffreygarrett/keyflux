#[cfg(test)]
mod github_api_tests {
    use keyflux_curl::{HttpMethod, HttpRequest, parse_curl_command};

    //     curl -L \
    //     -X POST \
    //     -H "Accept: application/vnd.github+json" \
    //     -H "Authorization: Bearer your_token_here" \
    //     -H "X-GitHub-Api-Version: 2022-11-28" \
    //     https://api.github.com/orgs/ORG/actions/variables \
    //     -d '{
    // "name":"your_name_here",
    // "value":"your_value_here",
    // "visibility":"selected",
    // "selected_repository_ids":["repo_id_1","repo_id_2"]
    // }'
    #[test]
    fn parse_github_post_variable_request() {
        let input = r#"curl -L \
          -X POST \
          -H 'Content-Type: application/json' \
          -H "Accept: application/vnd.github+json" \
          -H "Authorization: Bearer your_token_here" \
          -H "X-GitHub-Api-Version: 2022-11-28" \
            https://api.github.com/orgs/ORG/actions/variables \
            -d '{
            "name":"your_name_here",
            "value":"your_value_here",
            "visibility":"selected",
            "selected_repository_ids":["repo_id_1","repo_id_2"]
            }'"#;

        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Post);
        assert_eq!(request.url, "https://api.github.com/orgs/ORG/actions/variables");
        assert_eq!(request.headers.get("Accept").unwrap(), "application/vnd.github+json");
        assert_eq!(request.headers.get("Authorization").unwrap(), "Bearer your_token_here");
        assert_eq!(request.headers.get("X-GitHub-Api-Version").unwrap(), "2022-11-28");
        println!("{:?}", request.body);

        let json_body = request.body.unwrap().json().unwrap();
        assert_eq!(json_body["name"], "your_name_here");
        assert_eq!(json_body["value"], "your_value_here");
        assert_eq!(json_body["visibility"], "selected");
        assert_eq!(json_body["selected_repository_ids"][0], "repo_id_1");
        assert_eq!(json_body["selected_repository_ids"][1], "repo_id_2");
    }


    #[test]
    fn parse_github_delete_variable_request() {
        let input = r#"curl -L \
          -X DELETE \
          -H "Accept: application/vnd.github+json" \
          -H "Authorization: Bearer your_token" \
          -H "X-GitHub-Api-Version: 2022-11-28" \
          https://api.github.com/repos/owner_name/repo_name/actions/variables/variable_name"#;

        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Delete);
        assert_eq!(request.url, "https://api.github.com/repos/owner_name/repo_name/actions/variables/variable_name");
        assert_eq!(request.headers.get("Accept").unwrap(), "application/vnd.github+json");
        assert_eq!(request.headers.get("Authorization").unwrap(), "Bearer your_token");
        assert_eq!(request.headers.get("X-GitHub-Api-Version").unwrap(), "2022-11-28");
    }

    #[test]
    fn verify_token_parsing_in_header() {
        let input = r#"curl -L \
          -H "Accept: application/vnd.github+json" \
          -H "Authorization: Bearer dynamic_token" \
          https://api.github.com/repos/owner_name/repo_name/actions/variables"#;

        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.headers.get("Authorization").unwrap(), "Bearer dynamic_token");
    }

    #[test]
    fn check_proper_url_construction_with_parameters() {
        let input = r#"curl -L \
          -H "Accept: application/vnd.github+json" \
          -H "Authorization: Bearer your_token" \
          https://api.github.com/repos/owner_name/repo_name/actions/variables?per_page=10&page=2"#;

        let request = parse_curl_command(input).expect("Failed to parse input");

        assert!(request.url.contains("per_page=10"));
        assert!(request.url.contains("page=2"));
    }

    #[test]
    fn test_delete_variable() {
        let input = r#"curl -X DELETE \
            -H "Accept: application/vnd.github+json" \
            -H "Authorization: Bearer token123" \
            https://api.github.com/repos/owner/repo/actions/variables/var_name"#;

        let request = parse_curl_command(input).expect("Failed to parse cURL command");
        assert_eq!(request.method, HttpMethod::Delete);
        assert_eq!(request.url, "https://api.github.com/repos/owner/repo/actions/variables/var_name");
        assert_eq!(request.headers.get("Accept").unwrap(), "application/vnd.github+json");
        assert_eq!(request.headers.get("Authorization").unwrap(), "Bearer token123");
    }

    #[test]
    fn test_post_variable() {
        let input = r#"curl -X POST \
            -H "Content-Type: application/json" \
            -H "Authorization: Bearer token123" \
            -d '{"name":"TEST_VAR","value":"12345"}' \
            https://api.github.com/repos/owner/repo/actions/variables"#;

        let request = parse_curl_command(input).expect("Failed to parse cURL command");
        assert_eq!(request.method, HttpMethod::Post);
        assert_eq!(request.headers.get("Content-Type").unwrap(), "application/json");
        assert!(request.body.unwrap().contains(r#"{"name":"TEST_VAR","value":"12345"}"#));
    }

    #[test]
    fn test_patch_variable() {
        let input = r#"curl -X PATCH \
            -H "Content-Type: application/json" \
            -H "Authorization: Bearer token123" \
            -d '{"value":"67890"}' \
            https://api.github.com/repos/owner/repo/actions/variables/TEST_VAR"#;

        let request = parse_curl_command(input).expect("Failed to parse cURL command");
        assert_eq!(request.method, HttpMethod::Patch);
        assert_eq!(request.url, "https://api.github.com/repos/owner/repo/actions/variables/TEST_VAR");
        assert_eq!(request.headers.get("Content-Type").unwrap(), "application/json");
        assert!(request.body.unwrap().contains(r#"{"value":"67890"}"#));
    }

    #[test]
    fn test_get_variable() {
        let input = r#"curl -X GET \
            -H "Accept: application/vnd.github+json" \
            -H "Authorization: Bearer token123" \
            https://api.github.com/repos/owner/repo/actions/variables/TEST_VAR"#;

        // let request = parse_curl_command(input).expect("Failed to parse cURL command");
        let request: HttpRequest = input.parse().expect("Failed to parse cURL command");
        assert_eq!(request.method, HttpMethod::Get);
        assert_eq!(request.url, "https://api.github.com/repos/owner/repo/actions/variables/TEST_VAR");
        assert_eq!(request.headers.get("Accept").unwrap(), "application/vnd.github+json");
    }

    #[test]
    fn test_query_parameters() {
        let input = r#"curl -X GET \
            -H "Accept: application/vnd.github+json" \
            -H "Authorization: Bearer token123" \
            "https://api.github.com/repos/owner/repo/actions/variables?per_page=10&page=2""#;

        let request = parse_curl_command(input).expect("Failed to parse cURL command");
        assert_eq!(request.method, HttpMethod::Get);
        assert!(request.url.contains("per_page=10"));
        assert!(request.url.contains("page=2"));
    }

    // #[test]
    // fn test_error_handling_invalid_token() {
    //     let input = r#"curl -X GET \
    //         -H "Accept: application/vnd.github+json" \
    //         -H "Authorization: Bearer " \
    //         https://api.github.com/repos/owner/repo/actions/variables/TEST_VAR"#;
    //
    //     let result = parse_curl_command(input);
    //     println!("{:?}", result);
    //     // TODO: Should be error
    //     assert!(result.is_err(), "Expected an error due to missing token");
    // }
}
