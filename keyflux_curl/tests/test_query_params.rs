#[cfg(test)]
mod complex_tests {
    use super::*;
    use keyflux_curl::{HttpRequest, parse_curl_command, HttpMethod, RequestBody, FormDataField};
    use std::collections::HashMap;

    #[test]
    fn parse_curl_with_query_params_should_work() {
        let input = "curl -X GET 'http://example.com?param1=value1&param2=value2'";
        let request = parse_curl_command(input).expect("Failed to parse input");
        println!("{:#?}", request);
        assert_eq!(request.method, HttpMethod::Get);
        assert_eq!(request.url, "http://example.com?param1=value1&param2=value2");

        let query_params = &request.query_params.params;
        assert_eq!(query_params.get("param1").unwrap(), &vec!["value1".to_string()]);
        assert_eq!(query_params.get("param2").unwrap(), &vec!["value2".to_string()]);
    }

    #[test]
    fn parse_curl_with_encoded_query_params_should_work() {
        let input = "curl -X GET 'http://example.com?param1=value%201&param2=value%202'";
        let request = parse_curl_command(input).expect("Failed to parse input");
        println!("{:#?}", request);

        assert_eq!(request.method, HttpMethod::Get);
        assert_eq!(request.url, "http://example.com?param1=value%201&param2=value%202");

        let query_params = &request.query_params.params;
        assert_eq!(query_params.get("param1").unwrap(), &vec!["value 1".to_string()]);
        assert_eq!(query_params.get("param2").unwrap(), &vec!["value 2".to_string()]);
    }
}
