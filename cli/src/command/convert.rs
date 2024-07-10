
use std::path::PathBuf;
use tokio::io::{self, AsyncReadExt};
use log::{error, info, trace};
use keyflux::file::format_manager::FormatManager;

pub async fn convert(file: Option<&PathBuf>, fmt: &str) -> Result<(), Box<dyn std::error::Error>> {
    trace!("Starting the conversion process.");
    let manager = FormatManager::read().await;

    // Decide the source of keys based on the presence of the file path.
    let keys = if let Some(file_path) = file {
        manager.load_keys(file_path, None).map_err(|e| {
            let error_message = format!("Failed to load keys from '{}': {:?}", file_path.to_str().unwrap(), e);
            error!("{}", error_message);
            e
        })?
    } else {
        // Read from stdin if no file path is provided
        let mut buffer = String::new();
        io::stdin().read_to_string(&mut buffer).await?;
        manager.parse_keys(&buffer).map_err(|e| {
            let error_message = format!("Failed to load keys from stdin: {:?}", e);
            error!("{}", error_message);
            e
        })?
    };

    println!("{:?}", keys);

    let output_path = if let Some(file) = file {
        let file_name = file.file_name().unwrap().to_str().unwrap();
        let new_file_name = manager.get_new_file_name(fmt, Some(file_name));
        file.with_file_name(new_file_name)
    } else {
        // If input is from stdin, specify a default output name or ask user
        PathBuf::from(format!("output.{}", fmt))
    };

    info!("Output path: {}", output_path.to_str().unwrap());

    // Attempt to save the keys into the new format.
    manager.save_keys(&output_path, &keys, Some(fmt)).map_err(|e| {
        let error_message = format!("Failed to save keys to '{}': {:?}", output_path.to_str().unwrap(), e);
        error!("{}", error_message);
        e
    })?;

    info!("Successfully converted and synced secrets.");
    Ok(())
}

