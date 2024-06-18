use std::collections::HashMap;
use std::path::PathBuf;
use async_trait::async_trait;
use colored::Colorize;
use log::info;
use crate::error::FluxError;
use crate::file::format_manager::FormatAdapter;
use crate::file::key::{Key, KeyDetail};
use crate::file::key_collection::{KeyCollection, KeyCollectionMap};
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


#[async_trait]
impl FormatAdapter for EnvAdapter {
    fn default_file_name(&self) -> &str {
        ".env"
    }
    fn path_valid(&self, path: &str) -> bool {
        PathBuf::from(path).file_name().map_or(false, |name| name == ".env")
    }
    fn load_keys(&self, path: &str) -> Result<KeyCollection, FluxError> {
        let contents = std::fs::read_to_string(path)?;
        let file_name = PathBuf::from(path).file_name().unwrap().to_str().unwrap().to_string();
        let parser = EnvParser::parse(&contents);
        let mut map = KeyCollectionMap::new();
        for entry in parser.entries {
            match entry {
                LineContent::KeyValue(key, value, comment) => {
                    let key_detail = KeyDetail {
                        name: key.clone(),
                        value,
                        description: comment,
                        enabled: true,
                        metadata: Some(HashMap::from([("path".to_string(), path.to_string())])),
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
                                metadata: Some(HashMap::from([("path".to_string(), path.to_string())])),
                                last_updated: None,
                                created_at: None,
                                tags: Some(vec![file_name.clone()]),
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
    fn save_keys(&self, path: &str, keys: &KeyCollection) -> Result<(), FluxError> {
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
