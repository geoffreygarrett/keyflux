use std::fmt::Display;

use regex::{escape, Regex};

pub trait VariableInterpolation {
    fn shell_var_to_capturing_regex(&self) -> Regex;
    fn template_to_capturing_regex(&self) -> Regex;
    fn regex_to_shell_var(regex: &Regex) -> String;
    fn regex_to_template(regex: &Regex) -> String;
}

impl VariableInterpolation for String {
    /// Converts a shell variable string like `${VAR}` into a regex with a named capturing group.
    fn shell_var_to_capturing_regex(&self) -> Regex {
        let clean_var = self.trim_matches(|c: char| c == '$' || c == '{' || c == '}');
        Regex::new(&format!(r"(?P<{}>.*)", escape(clean_var))).unwrap()
    }

    /// Converts a template variable string like `{{var}}` into a regex with a named capturing group.
    fn template_to_capturing_regex(&self) -> Regex {
        let clean_template = self.trim_matches(|c: char| c == '{' || c == '}');
        Regex::new(&format!(r"(?P<{}>.*)", escape(clean_template))).unwrap()
    }

    /// Extracts the shell variable name from a regex pattern and returns it in the format `${var}`.
    fn regex_to_shell_var(regex: &Regex) -> String {
        let pattern = regex.as_str();
        let var_name = pattern
            .trim_start_matches(r"(?P<")
            .trim_end_matches(r">.*)");
        format!("${{{}}}", var_name)
    }

    /// Extracts the template variable name from a regex pattern and returns it in the format `{{var}}`.
    fn regex_to_template(regex: &Regex) -> String {
        let pattern = regex.as_str();
        let placeholder_name = pattern
            .trim_start_matches(r"(?P<")
            .trim_end_matches(r">.*)");
        format!("{{{{{}}}}}", placeholder_name)
    }
}
