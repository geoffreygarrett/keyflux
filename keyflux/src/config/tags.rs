use log::{error, info, warn};
use serde::{Deserialize, Serialize};
use serde_yaml::{Mapping, Value};
use std::{fs, path::Path};

pub fn include_file(path: &str, base_path: &Path, depth: usize) -> Result<Value, String> {
    if depth > 10 {
        // Prevent too deep recursion
        warn!("Recursion depth exceeded for path: {}", path);
        return Err("Recursion depth exceeded".to_string());
    }

    let path = base_path.join(path);
    info!("Including file: {}", path.display());

    match fs::read_to_string(&path) {
        Ok(content) => match serde_yaml::from_str::<Value>(&content) {
            Ok(value) => {
                if let Value::Mapping(map) = value {
                    process_mapping(map, &path.parent().unwrap(), depth + 1)
                } else {
                    Ok(value)
                }
            }
            Err(e) => {
                error!(
                    "Failed to parse YAML content from file {}: {}",
                    path.display(),
                    e
                );
                Err(e.to_string())
            }
        },
        Err(e) => {
            error!("Failed to read file {}: {}", path.display(), e);
            Err(e.to_string())
        }
    }
}

pub fn process_mapping(map: Mapping, base_path: &Path, depth: usize) -> Result<Value, String> {
    let mut result_map = Mapping::new();
    for (k, v) in map {
        if let Value::String(tag) = k {
            if let Value::String(value) = v {
                if tag == "include" {
                    match process_custom_tag(Enum::Newtype(value), base_path, depth) {
                        Ok(result) => {
                            result_map.insert(Value::String(tag), result);
                        }
                        Err(e) => {
                            error!("Failed to process custom tag {}: {}", tag, e);
                            return Err(e);
                        }
                    }
                } else {
                    result_map.insert(Value::String(tag), Value::String(value));
                }
            } else {
                result_map.insert(Value::String(tag), v);
            }
        } else {
            result_map.insert(k, v);
        }
    }
    Ok(Value::Mapping(result_map))
}

// #[derive(Serialize, Deserialize, PartialEq, Debug)]
// pub enum CustomTag {
//     Include(String),
// }

#[derive(Serialize, Deserialize, PartialEq, Debug)]
pub enum Enum {
    Unit,
    Newtype(String),
    Tuple(usize, usize, usize),
    Struct { x: f64, y: f64 },
}

pub fn process_custom_tag(value: Enum, base_path: &Path, depth: usize) -> Result<Value, String> {
    match value {
        Enum::Newtype(path) => {
            info!("Processing custom tag include for path: {}", path);
            include_file(&path, base_path, depth)
        }
        _ => {
            warn!("Unsupported custom tag: {:?}", value);
            Err("Unsupported custom tag".to_string())
        }
    }
}
