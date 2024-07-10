use std::fs;
use std::os::unix::fs::PermissionsExt;
use std::path::PathBuf;
use std::time::SystemTime;

use chrono::{DateTime, Utc};
use serde_json::json;

pub fn extract_file_metadata(path: &PathBuf) -> Result<serde_json::Value, std::io::Error> {
    let metadata = fs::metadata(path)?;
    let modified = format_system_time(metadata.modified()?)?;
    let created = format_system_time(metadata.created()?)?;

    Ok(json!({
        "modified": modified,
        "created": created,
        "size": metadata.len(),
        "absolute_path": fs::canonicalize(path)?,
        "relative_path": path.to_str().unwrap_or_default(),
        "is_symlink": metadata.file_type().is_symlink(),
        "permissions": format!("{:o}", metadata.permissions().mode())
    }))
}

fn format_system_time(time: SystemTime) -> Result<String, std::io::Error> {
    let datetime: DateTime<Utc> = DateTime::<Utc>::from(time);
    Ok(datetime.format("%Y-%m-%d %H:%M:%S UTC").to_string())
}
