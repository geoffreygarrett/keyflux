use std::path::{PathBuf};
use log::{error, info, trace};
use crate::file::format_manager::FormatManager;

/// Converts the keys from one file format to another.
///
/// # Arguments
///
/// * `file` - The path to the input file containing the keys.
/// * `format` - The target format to which the keys should be converted.
///
/// # Returns
///
/// A `Result` indicating the success or failure of the operation. On success, `Ok(())` is returned.
/// On failure, a boxed error is returned, encapsulating the cause of the failure.
///
/// ```
pub async fn convert(file: &PathBuf, fmt: &str) -> Result<(), Box<dyn std::error::Error>> {
    trace!("Starting the conversion process.");
    let manager = FormatManager::instance_read().await;

    // Load the keys from the input file.
    let keys = match manager.load_keys(file, None) {
        Ok(keys) => keys,
        Err(e) => {
            let error_message = format!("Failed to load keys from '{}': {:?}", file.to_str().unwrap(), e);
            error!("{}", error_message);
            return Err(Box::new(e));
        }
    };

    let file_name = file.file_name().unwrap().to_str().unwrap();

    // Generate the output path by changing the extension of the input file.
    let new_file_name = manager.get_new_file_name(fmt, Some(file_name));
    // let output_path = file.with_extension(fmt);

    let output_path = file.with_file_name(new_file_name);
    // let adapter = manager.get_adapter_by_tag(fmt).unwrap();

    // log the output path
    info!("Output path: {}", output_path.to_str().unwrap());

    // Attempt to save the keys into the new format.
    if let Err(e) = manager.save_keys(&output_path, &keys, Some(fmt)) {
        let error_message = format!("Failed to save keys to '{}': {:?}", output_path.to_str().unwrap(), e);
        error!("{}", error_message);
        return Err(Box::new(e));
    }

    info!("Successfully converted and synced secrets.");
    Ok(())
}