#[cfg(test)]
mod tests {
    use std::env;

    use keyflux::config::utils::replace_env_vars;

    #[test]
    fn replaces_single_valid_variable() {
        env::set_var("TEST_VAR", "World");
        let input = "Hello ${TEST_VAR}!";
        assert_eq!(replace_env_vars(input), "Hello World!");
        env::remove_var("TEST_VAR");
    }

    #[test]
    fn leaves_single_invalid_variable() {
        let input = "Hello ${UNKNOWN_VAR}!";
        assert_eq!(replace_env_vars(input), "Hello ${UNKNOWN_VAR}!");
    }

    #[test]
    fn replaces_multiple_variables() {
        env::set_var("VAR1", "First");
        env::set_var("VAR2", "Second");
        let input = "${VAR1} and ${VAR2}";
        assert_eq!(replace_env_vars(input), "First and Second");
        env::remove_var("VAR1");
        env::remove_var("VAR2");
    }

    #[test]
    fn handles_mixed_valid_and_invalid_variables() {
        env::set_var("VALID_VAR", "Valid");
        let input = "${VALID_VAR} and ${INVALID_VAR}";
        assert_eq!(replace_env_vars(input), "Valid and ${INVALID_VAR}");
        env::remove_var("VALID_VAR");
    }

    #[test]
    fn works_with_no_variables() {
        let input = "Just a regular string.";
        assert_eq!(replace_env_vars(input), "Just a regular string.");
    }

    #[test]
    fn handles_empty_strings() {
        assert_eq!(replace_env_vars(""), "");
    }

    #[test]
    fn handles_strings_without_placeholders() {
        let input = "No placeholders here.";
        assert_eq!(replace_env_vars(input), "No placeholders here.");
    }

    #[test]
    fn replaces_multiple_occurrences_of_same_variable() {
        env::set_var("REPEAT_VAR", "Repeated");
        let input = "${REPEAT_VAR} ${REPEAT_VAR} ${REPEAT_VAR}";
        assert_eq!(replace_env_vars(input), "Repeated Repeated Repeated");
        env::remove_var("REPEAT_VAR");
    }

    #[test]
    fn replaces_variables_adjacent_to_each_other() {
        env::set_var("FIRST", "1st");
        env::set_var("SECOND", "2nd");
        let input = "${FIRST}${SECOND} combined";
        assert_eq!(replace_env_vars(input), "1st2nd combined");
        env::remove_var("FIRST");
        env::remove_var("SECOND");
    }
}
