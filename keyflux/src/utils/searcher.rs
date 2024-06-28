use std::collections::HashSet;
use std::io::{BufRead, Result};
use regex::Regex;

pub struct Searcher {
    sensitive_keys: HashSet<String>,
}

impl Searcher {
    pub fn new(sensitive_keys: HashSet<String>) -> Self {
        Searcher { sensitive_keys }
    }

    pub fn find_matches<R>(&self, reader: R) -> Result<Vec<(String, String)>>
    where
        R: BufRead,
    {
        let mut matches = Vec::new();
        let regex = self.build_regex_pattern();

        for line in reader.lines() {
            let line = line?;
            if let Some((key, value)) = self.extract_key_value(&line, &regex) {
                matches.push((key, value));
            }
        }

        Ok(matches)
    }

    fn build_regex_pattern(&self) -> Regex {
        let keys_pattern = self.sensitive_keys.iter().map(|k| regex::escape(k)).collect::<Vec<_>>().join("|");
        Regex::new(&format!(r"\b({})\b", keys_pattern)).unwrap()
    }

    fn extract_key_value(&self, line: &str, regex: &Regex) -> Option<(String, String)> {
        if let Some((key, value)) = line.split_once('=') {
            if regex.is_match(key) {
                return Some((key.to_string(), value.to_string()));
            }
        }
        None
    }
}
