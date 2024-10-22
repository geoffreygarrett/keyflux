use std::collections::HashMap;
use std::fs;
use std::os::unix::fs::PermissionsExt;
use std::path::PathBuf;
use std::time::{Duration, SystemTime, UNIX_EPOCH};

use async_trait::async_trait;
use chrono::{DateTime, Utc};
use colored::Colorize;
use lazy_static::lazy_static;
use log::{info, trace};
use regex::Regex;
use serde_json::{json, Value};

use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key_collection::KeyCollection;
use crate::file::metadata::extract_file_metadata;
use crate::file::parser::env::{EnvParser, format_line, LineContent, parse_line};
use crate::key::{Key, KeyDetail};

pub struct EnvAdapter;

/// Custom error types for parsing .env files
#[derive(Debug)]
enum EnvParseError {
    IoError(std::io::Error),
    MalformedLine(String),
}

impl From<std::io::Error> for EnvParseError {
    fn from(error: std::io::Error) -> Self {
        EnvParseError::IoError(error)
    }
}

// Implement conversion from `EnvParseError` to `FluxError`
impl From<EnvParseError> for FluxError {
    fn from(error: EnvParseError) -> Self {
        match error {
            EnvParseError::IoError(err) => FluxError::ReadError(err.to_string()),
            EnvParseError::MalformedLine(line) => {
                FluxError::ParseError(format!("Malformed line: {}", line))
            }
        }
    }
}

pub fn redact_value(value: &str) -> String {
    // take first two and last two, and place 5 stars in between
    let mut redacted = String::new();
    redacted.push_str(&value[..2]);
    redacted.push_str("*****");
    redacted.push_str(&value[value.len() - 2..]);
    redacted
}

// Adjust function to accept Option<u64> representing UNIX timestamps
fn format_system_time(time: SystemTime) -> String {
    let datetime: DateTime<Utc> = DateTime::<Utc>::from(time);
    datetime.format("%Y-%m-%d %H:%M:%S UTC").to_string() // Include UTC to clarify timezone
}


struct NamedPattern {
    name: &'static str,
    pattern: &'static Regex,
}

impl NamedPattern {
    fn new(name: &'static str, pattern: &'static Regex) -> Self {
        NamedPattern { name, pattern }
    }
}

lazy_static! {
    static ref FILENAME_PATTERN1: NamedPattern = NamedPattern::new(
        "segment_before_env",
        &Regex::new(r"^(.*)\.env$").unwrap()
    );
    static ref FILENAME_PATTERN2: NamedPattern = NamedPattern::new(
        "exact_env",
        &Regex::new(r"^\.env$").unwrap()
    );
    static ref FILENAME_PATTERN3: NamedPattern = NamedPattern::new(
        "segment_after_env",
        &Regex::new(r"^\.env\.(.*)$").unwrap()
    );
}

#[async_trait]
impl FormatAdapter for EnvAdapter {
    fn default_file_name(&self) -> &str {
        ".env.{{name}}"
    }

    fn filename_patterns(&self) -> Vec<&'static NamedPattern> {
        vec![&*FILENAME_PATTERN1, &*FILENAME_PATTERN2, &*FILENAME_PATTERN3]
    }

    fn format_tag(&self) -> &str {
        "env"
    }
    fn is_valid_path(&self, path: &PathBuf) -> bool {
        self.filename_patterns()
            .iter()
            .any(|pattern| pattern.pattern.is_match(path.to_str().unwrap()))
    }

    fn content_valid(&self, content: &str) -> bool {
        // Check if the content is a valid .env file
        EnvParser::parse(content).is_ok()
    }

    fn load_keys(&self, path: &PathBuf) -> Result<KeyCollection, FluxError> {
        trace!("Loading keys from file: {:?}", path);
        let contents = std::fs::read_to_string(path)?;
        let parser = EnvParser::parse(&contents);
        let mut collection = KeyCollection::new();
        for entry in parser.entries {
            match entry {
                LineContent::KeyValue(name, value, comment) => {
                    trace!("Key: {} => {}", name.cyan(), redact_value(&value).yellow());
                    let key_detail = KeyDetail {
                        name,
                        value,
                        description: comment,
                        enabled: true,
                        input: None,
                        metadata: None,
                        last_updated: None,
                        created_at: None,
                        tags: None,
                    };
                    collection.insert(Key::KeyDetail(key_detail));
                }
                LineContent::Comment(comment) => match parse_line(&comment, None) {
                    Ok(LineContent::KeyValue(name, value, comment)) => {
                        let key_detail = KeyDetail {
                            name,
                            value,
                            description: comment,
                            enabled: false,
                            input: None,
                            metadata: None,
                            last_updated: None,
                            created_at: None,
                            tags: None,
                        };
                        collection.insert(Key::KeyDetail(key_detail));
                    }
                    Err(_) | Ok(_) => {}
                },
                LineContent::BlankLine => {}
            }
        }
        Ok(collection)
    }
    fn save_keys(&self, path: &PathBuf, keys: &KeyCollection) -> Result<(), FluxError> {
        let mut lines: Vec<LineContent> = vec![];
        // log each key
        for key in keys.iter() {
            info!(
                "Key: {} => {} [enabled={}]",
                key.name().to_string().cyan(),
                redact_value(&key.value()).yellow(),
                key.enabled().to_string().yellow()
            );
        }
        keys.iter().for_each(|key| match key {
            Key::Value(value) => lines.push(LineContent::KeyValue(
                key.value().clone(),
                value.clone(),
                None,
            )),
            Key::KeyDetail(detail) => {
                if !detail.enabled {
                    lines.push(LineContent::Comment(format_line(&LineContent::KeyValue(
                        detail.name.clone(),
                        detail.value.clone(),
                        detail.description.clone(),
                    ))))
                } else {
                    lines.push(LineContent::KeyValue(
                        detail.name.clone(),
                        detail.value.clone(),
                        detail.description.clone(),
                    ))
                }
            }
            Key::KeyValue(kv) => lines.push(LineContent::KeyValue(
                kv.name.clone(),
                kv.value.clone(),
                None,
            )),
        });
        std::fs::write(
            path,
            lines.iter().map(format_line).collect::<String>().as_bytes(),
        )
            .map_err(FluxError::from)
    }
}
