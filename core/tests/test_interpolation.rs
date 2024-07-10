#[cfg(test)]
mod tests {
    use regex::Regex;

    use keyflux::utils::interpolation::*;

    #[test]
    fn test_shell_var_to_capturing_regex() {
        let shell_var = "${HOME}".to_string();
        assert_eq!(
            shell_var.shell_var_to_capturing_regex().as_str(),
            "(?P<HOME>.*)"
        );
    }

    #[test]
    fn test_template_to_capturing_regex() {
        let template = "{{username}}".to_string();
        assert_eq!(
            template.template_to_capturing_regex().as_str(),
            "(?P<username>.*)"
        );
    }

    #[test]
    fn test_regex_to_shell_var() {
        let regex = Regex::new(r"(?P<HOME>.*)").unwrap();
        assert_eq!(String::regex_to_shell_var(&regex), "${HOME}");
    }

    #[test]
    fn test_regex_to_template() {
        let regex = Regex::new(r"(?P<username>.*)").unwrap();
        assert_eq!(String::regex_to_template(&regex), "{{username}}");
    }

    // #[test]
    // fn test_multiple_shell_vars_to_capturing_regex() {
    //     let shell_vars = "Path: ${PATH}, Home: ${HOME}".to_string();
    //     let regex = shell_vars.shell_var_to_capturing_regex();
    //     assert!(regex.is_match("Path: /usr/bin, Home: /home/user"));
    //     assert_eq!(regex.captures("Path: /usr/bin, Home: /home/user").unwrap().name("PATH").map(|m| m.as_str()), Some("/usr/bin"));
    //     assert_eq!(regex.captures("Path: /usr/bin, Home: /home/user").unwrap().name("HOME").map(|m| m.as_str()), Some("/home/user"));
    // }
    //
    // #[test]
    // fn test_multiple_templates_to_capturing_regex() {
    //     let templates = "User: {{username}}, Server: {{server}}".to_string();
    //     let regex = templates.template_to_capturing_regex();
    //     assert!(regex.is_match("User: john_doe, Server: server01"));
    //     assert_eq!(regex.captures("User: john_doe, Server: server01").unwrap().name("username").map(|m| m.as_str()), Some("john_doe"));
    //     assert_eq!(regex.captures("User: john_doe, Server: server01").unwrap().name("server").map(|m| m.as_str()), Some("server01"));
    // }
    //
    // #[test]
    // fn test_empty_shell_var_to_regex() {
    //     let empty_var = "${}".to_string();
    //     assert_eq!(empty_var.shell_var_to_capturing_regex().as_str(), "(?P<empty>.*)");
    // }
    //
    // #[test]
    // fn test_empty_template_to_regex() {
    //     let empty_template = "{{}}".to_string();
    //     assert_eq!(empty_template.template_to_capturing_regex().as_str(), "(?P<empty>.*)");
    // }
    //
    // #[test]
    // fn test_regex_to_shell_var_with_no_match() {
    //     let regex = Regex::new(r"\$\{(?P<var>.*)\}").unwrap();
    //     assert_eq!(String::regex_to_shell_var(&regex), "${var}");
    // }
    //
    // #[test]
    // fn test_regex_to_template_with_no_match() {
    //     let regex = Regex::new(r"\{{(?P<tpl>.*)\}}").unwrap();
    //     assert_eq!(String::regex_to_template(&regex), "{{tpl}}");
    // }
}
