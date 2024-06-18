// use dotenv::dotenv;
use log::info;
use std::fs::File;
use std::io::prelude::*;

/// Loads environment variables from the specified .env files.
pub fn load_env_files(env_files: &[&str]) {
    for env_file in env_files {
        dotenv::from_filename(env_file).ok();
        info!("Loaded environment variables from {}", env_file);
    }
}

/// Reads the content of a file and returns it as a String.
pub fn read_file_to_string(file_path: &str) -> std::io::Result<String> {
    let mut file = File::open(file_path)?;
    let mut content = String::new();
    file.read_to_string(&mut content)?;
    Ok(content)
}

/// Writes a line to the specified file.
pub fn write_to_file(file_path: &str, content: &str) -> std::io::Result<()> {
    let mut file = File::create(file_path)?;
    file.write_all(content.as_bytes())?;
    Ok(())
}
