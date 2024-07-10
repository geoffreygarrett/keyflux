use regex::Regex;

fn tokenize_handlebars(input: &str) -> (String, Vec<(usize, String)>) {
    let mut tokens = vec![];
    let re = Regex::new(r"\{\{.*?\}\}").unwrap();
    let mut tokenized_string = String::new();
    let mut last_end = 0;

    for mat in re.find_iter(input) {
        tokens.push((tokenized_string.len(), mat.as_str().to_string()));
        tokenized_string.push_str(&input[last_end..mat.start()]);
        tokenized_string.push_str("{{TOKEN}}");
        last_end = mat.end();
    }
    tokenized_string.push_str(&input[last_end..]);

    (tokenized_string, tokens)
}

fn detokenize_handlebars(tokenized_input: &str, tokens: &[(usize, String)]) -> String {
    let mut result = String::new();
    let mut last_pos = 0;

    for (pos, tok) in tokens {
        result.push_str(&tokenized_input[last_pos..*pos]);
        result.push_str(tok);
        last_pos = *pos + 8; // Length of "{{TOKEN}}"
    }
    result.push_str(&tokenized_input[last_pos..]);

    result
}

#[cfg(test)]
#[cfg(feature = "handlebars_support")]
#[cfg(feature = "reqwest_support")]
mod handlebars_tests {
    use keyflux_curl::{HttpRequest, use_handlebars};
    use serde_json::json;
    use crate::tokenize_handlebars;

    #[test]
    fn test_render_with_required_fields() {
        let curl = r#"curl -L \
        -H "Accept: application/vnd.github+json" \
        -H "Authorization: Bearer {{arg token required=true}}" \
        -H "X-GitHub-Api-Version: 2022-11-28" \
        https://api.github.com/repos/{{arg owner required=true}}/{{arg repo required=true}}/environments/{{arg environment_name required=true}}/secrets{{#if arg secret_name}}/{{arg secret_name}}{{/if}}?x=1
        "#;
        // let (tokenized, tokens) = tokenize_handlebars(curl);
        // let request: HttpRequest = tokenized.parse().expect("Failed to parse cURL command");
        // // let parsed_command = parse_curl_command(&tokenized).expect("Should parse without error");

        let request: HttpRequest = curl.parse().expect("Failed to parse cURL command");
        let args = json!({
            "token": "your_token",
            "owner": "your_owner",
            "repo": "your_repo",
            "environment_name": "your_environment_name",
            "secret_name": "your_secret_name"
        });

        println!("{:#?}", request);
        // let builder: reqwest::RequestBuilder = curl.into();
        }

}
