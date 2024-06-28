#[cfg(test)]
mod complex_tests {
    use super::*;
    use keyflux_curl::{HttpRequest, parse_curl_command, HttpMethod, RequestBody, FormDataField};
    use std::collections::HashMap;

    #[test]
    fn parse_complex_curl_request_1() {
        let input = "curl -X PUT http://example.com/resource -H 'Accept: application/json' -H 'Authorization: Bearer token' -d '{\"key\":\"value\"}' -d 'field1=value1' -G -d 'query1=1' --compressed";
        let request = parse_curl_command(input).expect("Failed to parse input");
        println!("{:#?}", request);
        assert_eq!(request.method, HttpMethod::Put);
        assert_eq!(request.url, "http://example.com/resource");
        assert_eq!(request.headers.headers.get("Accept").unwrap(), "application/json");
        assert_eq!(request.headers.headers.get("Authorization").unwrap(), "Bearer token");

        // Check the form data
        if let Some(RequestBody::FormData(form_data)) = &request.body {
            let expected_form_data: HashMap<String, String> = [
                ("field1".to_string(), "value1".to_string()),
                ("query1".to_string(), "1".to_string())
            ].iter().cloned().collect();
            let parsed_form_data: HashMap<String, String> = form_data.iter().filter_map(|field| match field {
                FormDataField::Text(key, value) => Some((key.clone(), value.clone())),
                _ => None,
            }).collect();
            assert_eq!(parsed_form_data, expected_form_data);
        } else {
            panic!("Form data was not parsed correctly");
        }

        // Check the JSON body
        if let Some(RequestBody::Text(body)) = &request.body {
            assert_eq!(body, "{\"key\":\"value\"}");
        } else {
            panic!("JSON body was not parsed correctly");
        }
    }

    #[test]
    fn parse_complex_curl_request_2() {
        let input = "curl -X DELETE 'http://example.com/resource?id=123&force=true' -H \"User-Agent: custom-agent\" -H 'Accept: */*' -H 'Authorization: Bearer token'";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Delete);
        assert_eq!(request.url, "http://example.com/resource?id=123&force=true");
        assert_eq!(request.headers.headers.get("User-Agent").unwrap(), "custom-agent");
        assert_eq!(request.headers.headers.get("Accept").unwrap(), "*/*");
        assert_eq!(request.headers.headers.get("Authorization").unwrap(), "Bearer token");
    }

    #[test]
    fn parse_complex_curl_request_with_multipart_form_data() {
        let input = "curl -X POST http://example.com/upload -H 'Content-Type: multipart/form-data' -F 'file=@/path/to/file' -F 'description=Test file upload'";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Post);
        assert_eq!(request.url, "http://example.com/upload");
        assert_eq!(request.headers.headers.get("Content-Type").unwrap(), "multipart/form-data");
        if let Some(RequestBody::FormData(form_data)) = request.body {
            let expected: HashMap<String, String> = [
                ("file".to_string(), "@/path/to/file".to_string()),
                ("description".to_string(), "Test file upload".to_string())
            ].iter().cloned().collect();
            let parsed: HashMap<String, String> = form_data.iter().filter_map(|field| match field {
                FormDataField::Text(key, value) => Some((key.clone(), value.clone())),
                _ => None,
            }).collect();
            assert_eq!(parsed, expected);
        } else {
            panic!("Form data was not parsed correctly");
        }
    }
}
