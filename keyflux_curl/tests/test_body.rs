#[cfg(test)]
mod body_tests {
    use super::*;
    use keyflux_curl::{HttpRequest, parse_curl_command, HttpMethod, RequestBody, FormDataField};

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
            assert_eq!(
                form_data,
                vec![
                    FormDataField::Text("field1".to_string(), "value1".to_string()),
                    FormDataField::Text("field2".to_string(), "value2".to_string())
                ]
            );
        } else {
            panic!("Body was not parsed correctly");
        }
    }

    #[test]
    fn parse_curl_with_complex_body_should_work() {
        let input = "curl -X POST http://example.com -d '{\"key1\":\"value1\",\"key2\":{\"subkey\":\"subvalue\"}}'";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Post);
        assert_eq!(request.url, "http://example.com");
        if let Some(RequestBody::Text(body)) = request.body {
            assert_eq!(body, "{\"key1\":\"value1\",\"key2\":{\"subkey\":\"subvalue\"}}");
        } else {
            panic!("Body was not parsed correctly");
        }
    }

    #[test]
    fn parse_curl_with_url_encoded_body_should_work() {
        let input = "curl -X POST http://example.com -d 'field1=value1&field2=value2'";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Post);
        assert_eq!(request.url, "http://example.com");
        if let Some(RequestBody::Text(body)) = request.body {
            assert_eq!(body, "field1=value1&field2=value2");
        } else {
            panic!("Body was not parsed correctly");
        }
    }
}
