#[cfg(test)]
mod tests {
    use keyflux_curl::{parse_curl_command, HttpMethod};

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
    fn parse_curl_with_custom_method_should_work() {
        let input = "curl -X CUSTOM http://example.com";
        let request = parse_curl_command(input).expect("Failed to parse input");

        assert_eq!(request.method.as_str(), "CUSTOM");
        assert_eq!(request.url, "http://example.com");
    }
}
