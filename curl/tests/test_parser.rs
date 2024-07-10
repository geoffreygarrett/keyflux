#[cfg(test)]
mod tests {
    use std::collections::HashMap;

    use keyflux_curl::{FormDataField, HttpMethod, parse_curl_command, RequestBody};

    #[test]
    fn parse_curl_get_should_work() {
        let input = "curl -X GET http://example.com";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Get);
        assert_eq!(request.url, "http://example.com");
    }

    #[test]
    fn parse_curl_post_should_work() {
        let input = "curl -X POST http://example.com";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Post);
        assert_eq!(request.url, "http://example.com");
    }

    #[test]
    fn parse_curl_with_headers_should_work() {
        let input = "curl -X GET http://example.com -H 'Accept: application/json' -H 'Authorization: Bearer token'";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Get);
        assert_eq!(request.url, "http://example.com");
        assert_eq!(
            request.headers.headers.get("Accept").unwrap(),
            "application/json"
        );
        assert_eq!(
            request.headers.headers.get("Authorization").unwrap(),
            "Bearer token"
        );
    }

    #[test]
    fn parse_curl_with_body_should_work() {
        let input = "curl -X POST http://example.com -d '{\"key\":\"value\"}'";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Post);
        assert_eq!(request.url, "http://example.com");
        if let Some(RequestBody::Text(body)) = request.body {
            assert_eq!(body, "{\"key\":\"value\"}");
        } else {
            panic!("Body was not parsed correctly");
        }
    }

    #[test]
    fn parse_curl_with_multiple_body_fields_should_work() {
        let input = "curl -X POST http://example.com -d 'field1=value1' -d 'field2=value2'";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Post);
        assert_eq!(request.url, "http://example.com");
        if let Some(RequestBody::FormData(form_data)) = request.body {
            let expected: HashMap<String, String> = [
                ("field1".to_string(), "value1".to_string()),
                ("field2".to_string(), "value2".to_string()),
            ]
                .iter()
                .cloned()
                .collect();
            let parsed: HashMap<String, String> = form_data
                .iter()
                .filter_map(|field| match field {
                    FormDataField::Text(key, value) => Some((key.clone(), value.clone())),
                    FormDataField::File(_, _) => None,
                })
                .collect();

            assert_eq!(parsed, expected);
        } else {
            panic!("Body was not parsed correctly");
        }
    }

    #[test]
    fn parse_curl_with_query_params_should_work() {
        let input = "curl -X GET 'http://example.com?param1=value1&param2=value2'";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Get);
        assert_eq!(
            request.url,
            "http://example.com?param1=value1&param2=value2"
        );
    }

    #[test]
    fn parse_curl_with_custom_method_should_work() {
        let input = "curl -X CUSTOM http://example.com";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method.as_str(), "CUSTOM");
        assert_eq!(request.url, "http://example.com");
    }
}
