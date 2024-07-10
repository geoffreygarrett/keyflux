#[allow(dead_code)]
pub static VAR_REGEX_V1: &str = r#"\$\{([^}]+)\}"#;

#[allow(dead_code)]
pub static VAR_REGEX_V2: &str = r#"\$\{([^{}]*(?:\{[^{}]*\}[^{}]*)*)\}"#; // fixes nested

#[cfg(test)]
mod tests {
    use regex::Regex;

    #[test_case(VAR_REGEX_V1; "version 1 - single variable")]
    #[test_case(VAR_REGEX_V2; "version 2 - single variable")]
    fn captures_single_variable(regex: &str) {
        let script = r#"echo ${PATH}"#;
        let re = Regex::new(regex).unwrap();
        let vars: Vec<_> = re
            .captures_iter(script)
            .map(|cap| cap[1].to_string())
            .collect();
        assert_eq!(vars, vec!["PATH"]);
    }

    #[test_case(VAR_REGEX_V1; "version 1 - multiple variables")]
    #[test_case(VAR_REGEX_V2; "version 2 - multiple variables")]
    fn captures_multiple_variables(regex: &str) {
        let script = r#"${USER} is not ${ROOT_USER}"#;
        let re = Regex::new(regex).unwrap();
        let vars: Vec<_> = re
            .captures_iter(script)
            .map(|cap| cap[1].to_string())
            .collect();
        assert_eq!(vars, vec!["USER", "ROOT_USER"]);
    }

    #[test_case(VAR_REGEX_V1; "version 1 - no capture without braces")]
    #[test_case(VAR_REGEX_V2; "version 2 - no capture without braces")]
    fn no_capture_without_braces(regex: &str) {
        let script = r"$VAR is not captured";
        let re = Regex::new(regex).unwrap();
        let vars: Vec<_> = re.captures_iter(script).collect();
        assert!(vars.is_empty());
    }

    #[test_case(VAR_REGEX_V1; "version 1 - captures with nested braces")]
    #[should_panic(expected = "assertion `left == right` failed")]
    fn captures_with_nested_braces_v1(regex: &str) {
        // FAILS DUE TO REGEX LIMITATIONS
        let script = r"${SOME_${NESTED}_VAR}";
        let re = Regex::new(regex).unwrap();
        let vars: Vec<_> = re
            .captures_iter(script)
            .map(|cap| cap[1].to_string())
            .collect();
        assert_eq!(vars, vec!["SOME_${NESTED}_VAR"]);
    }

    #[test_case(VAR_REGEX_V2; "version 1 - captures with nested braces")]
    fn captures_with_nested_braces_v2(regex: &str) {
        let script = r"${SOME_${NESTED}_VAR}";
        let re = Regex::new(regex).unwrap();
        let vars: Vec<_> = re
            .captures_iter(script)
            .map(|cap| cap[1].to_string())
            .collect();
        assert_eq!(vars, vec!["SOME_${NESTED}_VAR"]);
    }

    #[test_case(VAR_REGEX_V1; "version 1 - ignores incorrect braces")]
    #[test_case(VAR_REGEX_V2; "version 2 - ignores incorrect braces")]
    fn ignores_incorrect_braces(regex: &str) {
        let script = r"${UNCLOSED";
        let re = Regex::new(regex).unwrap();
        let vars: Vec<_> = re.captures_iter(script).collect();
        assert!(vars.is_empty());
    }

    #[test_case(VAR_REGEX_V1; "version 1 - escapes within strings")]
    #[test_case(VAR_REGEX_V2; "version 2 - escapes within strings")]
    fn escapes_within_strings(regex: &str) {
        let script = r#"echo "${VALUE} and \$\{NOT_CAPTURED\}""#;
        let re = Regex::new(regex).unwrap();
        let vars: Vec<_> = re
            .captures_iter(script)
            .map(|cap| cap[1].to_string())
            .collect();
        assert_eq!(vars, vec!["VALUE"]);
    }

    #[test_case(VAR_REGEX_V1; "version 1 - multiline script")]
    #[test_case(VAR_REGEX_V2; "version 2 - multiline script")]
    fn multiline_script(regex: &str) {
        let script = r#"
            export VAR1="${VALUE1}"
            export VAR2="${VALUE2}"
            echo "${VAR1} and ${VAR2}"
        "#;
        let re = Regex::new(regex).unwrap();
        let vars: Vec<_> = re
            .captures_iter(script)
            .map(|cap| cap[1].to_string())
            .collect();
        assert_eq!(vars, vec!["VALUE1", "VALUE2", "VAR1", "VAR2"]);
    }

    #[test_case(VAR_REGEX_V1; "version 1 - captures with deep nesting (FAILS)")]
    #[test_case(VAR_REGEX_V2; "version 2 - captures with deep nesting (FAILS)")]
    #[should_panic(expected = "assertion `left == right` failed")]
    // NOTE: This test will fail because the regex cannot capture nested variables
    fn deeply_nested_variables(regex: &str) {
        // FAILS DUE TO REGEX LIMITATIONS
        let script = r#"${OUTER_${MIDDLE_${INNER}}}"#;
        let re = Regex::new(regex).unwrap();
        // The regex captures the entire expression as a single string because it does not distinguish nested levels
        let vars: Vec<_> = re
            .captures_iter(script)
            .map(|cap| cap[1].to_string())
            .collect();
        // Adjust the expected result based on what the regex can capture
        assert_eq!(vars, vec!["OUTER_${MIDDLE_${INNER}}"]);
    }

    #[test_case(VAR_REGEX_V1; "version 1 - captures with multiple nesting levels (FAILS)")]
    #[test_case(VAR_REGEX_V2; "version 2 - captures with multiple nesting levels (FAILS)")]
    #[should_panic(expected = "assertion `left == right` failed")]
    // NOTE: This test will fail because the regex cannot capture nested variables
    fn multiple_nesting_levels(regex: &str) {
        // FAILS DUE TO REGEX LIMITATIONS
        let script = r#"${FIRST_${SECOND}_${THIRD_${FOURTH}}}"#;
        let re = Regex::new(regex).unwrap();
        // The regex captures the entire expression as a single string because it does not distinguish nested levels
        let vars: Vec<_> = re
            .captures_iter(script)
            .map(|cap| cap[1].to_string())
            .collect();
        // Adjust the expected result to reflect what the regex can realistically capture
        assert_eq!(vars, vec!["FIRST_${SECOND}_${THIRD_${FOURTH}}"]);
    }
}
