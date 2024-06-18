use std::fs;
use std::io::{self, BufRead};
use std::collections::HashSet;
use std::path::PathBuf;
use colored::*;

pub struct Redactor {
    searcher: Searcher,
    redaction_strategy: RedactionStrategy,
}

enum RedactionStrategy {
    ReplaceWithPlaceholder,
    RemoveLine,
}

impl Redactor {
    pub fn new(sensitive_keys: HashSet<String>) -> Self {
        Redactor {
            searcher: Searcher::new(sensitive_keys),
            redaction_strategy: RedactionStrategy::ReplaceWithPlaceholder,
        }
    }

    pub fn set_redaction_strategy(&mut self, strategy: RedactionStrategy) {
        self.redaction_strategy = strategy;
    }

    pub fn redact(&self, text: &str) -> String {
        let matches = self.searcher.find_matches(text);

        let mut redacted_content = String::new();
        for (key, value) in matches {
            match self.redaction_strategy {
                RedactionStrategy::ReplaceWithPlaceholder => {
                    redacted_content.push_str(&format!(
                        "{}\n{} {}\n{} {}",
                        key.cyan().bold(),
                        "-".red(),
                        value.red(),
                        "+".green(),
                        "[REDACTED]".green()
                    ));
                }
                RedactionStrategy::RemoveLine => {
                    // Implement removal strategy
                }
            }
        }

        redacted_content
    }
}

fn main() {
    let file_path = PathBuf::from("path/to/your/text_file.txt");

    // Initialize redactor with sensitive keys
    let sensitive_keys = vec!["SECRET".to_string()].into_iter().collect();
    let mut redactor = Redactor::new(sensitive_keys);

    // Customize redaction options
    redactor.set_redaction_strategy(RedactionStrategy::ReplaceWithPlaceholder);

    // Read content from file
    match fs::read_to_string(&file_path) {
        Ok(content) => {
            // Perform redaction
            let redacted_content = redactor.redact(&content);
            println!("{}", redacted_content);
        }
        Err(e) => eprintln!("Error reading file: {}", e),
    }
}
