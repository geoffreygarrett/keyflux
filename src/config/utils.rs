use regex::Regex;
use lazy_static::lazy_static;
use log::warn;

lazy_static! {
    static ref RE: Regex = Regex::new(r"\$\{([^}]+)}").unwrap();
}

/// Replaces all occurrences of environment variables in the given string.
pub fn replace_env_vars(input: &str) -> String {
    RE.replace_all(input, |caps: &regex::Captures| {
        std::env::var(&caps[1]).unwrap_or_else(|_| {
            warn!("Environment variable {} not found", &caps[1]);
            caps[0].to_string()
        })
    }).to_string()
}
