use std::path::PathBuf;
use keyflux::file::format_manager::FormatManager;
use keyflux::error::FluxError;

pub async fn sort(file: &PathBuf) -> Result<(), FluxError> {
    // Assume FormatManager::instance_read() provides a singleton instance for read operations.
    let manager = FormatManager::read().await;

    // Load keys from the file. Ensure load_keys is async and awaited here.
    let mut keys = manager.load_keys(file, None)?;

    // Sort the keys. This assumes your KeyCollection has a sort_by method.
    keys.sort_by();

    // Save the sorted keys back to the file. Ensure save_keys is async and awaited here.
    manager.save_keys(&file, &keys, None).map_err(|e| {
        // Log the error or convert it into a FluxError as needed.
        eprintln!("Failed to save sorted keys: {:?}", e); // Consider using a logging framework.
        e
    })?;

    Ok(())
}
