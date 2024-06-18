use std::collections::HashMap;
use std::fs;
use std::os::unix::fs::PermissionsExt;
use std::path::PathBuf;
use std::time::{Duration, SystemTime, UNIX_EPOCH};
use async_trait::async_trait;
use chrono::{DateTime, Utc};
use colored::Colorize;
use log::info;
use regex::Regex;
use serde_json::{json, Value};
use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key::{Key, KeyDetail};
use crate::file::key_collection::{KeyCollection, KeyCollectionMap};
use crate::file::metadata::extract_file_metadata;
use crate::file::parser::env::{LineContent, EnvParser, parse_line, format_line};

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
            EnvParseError::MalformedLine(line) => FluxError::ParseError(format!("Malformed line: {}", line)),
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
    datetime.format("%Y-%m-%d %H:%M:%S UTC").to_string()  // Include UTC to clarify timezone
}

#[async_trait]
impl FormatAdapter for EnvAdapter {
    fn format_tag(&self) -> &str {
        "env"
    }

    fn default_file_name(&self) -> &str {
        ".env.{{name}}"
    }
    fn path_valid(&self, path: &PathBuf) -> bool {
        // Compile the regex to match ".env", ".env.<ANY NAME>", and "<ANY NAME>.env"
        let re = Regex::new(r"^(.+\.)?\.env(\.[\w-]+)?$|^\w+\.env$|^\.env$").unwrap();

        // Extract the file name from the path and check if it matches the regex
        re.is_match(path.file_name().and_then(|n| n.to_str()).unwrap_or(""))
    }

    fn load_keys(&self, path: &PathBuf) -> Result<KeyCollection, FluxError> {
        let contents = std::fs::read_to_string(path)?;
        let parser = EnvParser::parse(&contents);
        let mut map = KeyCollectionMap::new();
        // let file_metadata = extract_file_metadata(path)?;
        // let mut metadata = HashMap::new();
        // metadata.insert("file".to_string(), file_metadata);
        for entry in parser.entries {
            match entry {
                LineContent::KeyValue(key, value, comment) => {
                    let key_detail = KeyDetail {
                        name: key.clone(),
                        value,
                        description: comment,
                        enabled: true,
                        metadata: None,
                        last_updated: None,
                        created_at: None,
                        tags: None,
                    };
                    map.insert(key.clone(), Key::KeyDetail(key_detail));
                }
                LineContent::Comment(comment) => {
                    match parse_line(&comment, None) {
                        Ok(LineContent::KeyValue(key, value, comment)) => {
                            let key_detail = KeyDetail {
                                name: key.clone(),
                                value,
                                description: comment,
                                enabled: false,
                                metadata: None,
                                last_updated: None,
                                created_at: None,
                                tags: None,
                            };
                            map.insert(key.clone(), Key::KeyDetail(key_detail));
                        }
                        Err(_) | Ok(_) => {}
                    }
                }
                LineContent::BlankLine => {}
            }
        }
        Ok(KeyCollection::Map(map))
    }
    fn save_keys(&self, path: &PathBuf, keys: &KeyCollection) -> Result<(), FluxError> {
        let mut lines: Vec<LineContent> = vec![];
        // log each key
        for (k, key) in keys.iter() {
            info!("Key: {} => {} [{}]", k.to_string().cyan(),
                redact_value(&key.value()).yellow()
                , key.enabled().to_string().yellow());
        }
        keys
            .iter()
            .for_each(|(k, key)| match key {
                Key::Value(value) => {
                    lines.push(LineContent::KeyValue(k.clone(), value.clone(), None))
                }
                Key::KeyDetail(detail) => {
                    if !detail.enabled {
                        lines.push(LineContent::Comment(format_line(&LineContent::KeyValue(detail.name.clone(), detail.value.clone(), detail.description.clone()))))
                    } else {
                        lines.push(
                            LineContent::KeyValue(
                                detail.name.clone(),
                                detail.value.clone(),
                                detail.description.clone(),
                            )
                        )
                    }
                }
                Key::KeyValue(kv) => {
                    lines.push(LineContent::KeyValue(kv.name.clone(), kv.value.clone(), None))
                }
            });
        std::fs::write(path, lines.iter().map(format_line).collect::<String>().as_bytes()).map_err(FluxError::from)
    }
}
