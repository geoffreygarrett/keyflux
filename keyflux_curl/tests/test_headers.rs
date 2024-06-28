#[cfg(test)]
mod tests {
    use super::*;
    use keyflux_curl::{HttpRequest, parse_curl_command, HttpMethod, RequestBody, QueryParams};

    #[test]
    fn parse_curl_with_headers_should_work() {
        let input = "curl -X GET http://example.com -H 'Accept: application/json' -H 'Authorization: Bearer token'";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method, HttpMethod::Get);
        assert_eq!(request.url, "http://example.com");
        assert_eq!(request.headers.headers.get("Accept").unwrap(), "application/json");
        assert_eq!(request.headers.headers.get("Authorization").unwrap(), "Bearer token");
    }

    #[test]
    fn parse_curl_with_multiple_headers_should_work() {
        let input = "curl -X GET http://example.com -H 'Accept: application/json' -H 'Authorization: Bearer token' -H 'User-Agent: custom-agent'";
        let request = parse_curl_command(input).expect("Failed to parse input");
        assert_eq!(request.method, HttpMethod::Get);
        assert_eq!(request.url, "http://example.com");
        assert_eq!(request.headers.headers.get("Accept").unwrap(), "application/json");
        assert_eq!(request.headers.headers.get("Authorization").unwrap(), "Bearer token");
        assert_eq!(request.headers.headers.get("User-Agent").unwrap(), "custom-agent");
    }
}
