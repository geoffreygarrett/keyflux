use std::collections::{BTreeSet};
use std::io::{self};
use std::path::PathBuf;
use colored::*;
use crate::error::FluxError;
use crate::file::format_manager::{FormatManager};
use crate::file::key_collection::KeyCollection;

// Assuming `diff` is now an async function
pub async fn diff(file1: &PathBuf, file2: &PathBuf) -> Result<(), io::Error> {
    let keys1 = match load_keys_from_file(&file1).await {
        Ok(keys) => keys,
        Err(e) => return Err(convert_flux_error_to_io_error(e)),
    };
    let keys2 = match load_keys_from_file(&file2).await {
        Ok(keys) => keys,
        Err(e) => return Err(convert_flux_error_to_io_error(e)),
    };

    let all_keys: BTreeSet<_> = keys1.keys().into_iter().chain(keys2.keys().into_iter()).collect();

    println!("{}", "Differences in environment files:".bold().underline());

    for key in &all_keys {
        match (keys1.get(key.as_str()), keys2.get(key.as_str())) {
            (Some(key1), Some(key2)) if key1.value() == key2.value() => {
                // Common key-value pair, no need to display.
            }
            (Some(key1), Some(key2)) => {
                let value1 = key1.value(); // Now calling .value() on &Key, not Option<&Key>
                let value2 = key2.value(); // Same here
                println!(
                    "{}\n{} {}\n{} {}",
                    key.cyan().bold(),
                    "-".red(),
                    value1.red(),
                    "+".green(),
                    value2.green()
                );
            }
            (Some(key1), None) => {
                let value1 = key1.value(); // Now calling .value() on &Key, not Option<&Key>
                println!(
                    "{}\n{} {}\n{} {}",
                    key.cyan().bold(),
                    "-".red(),
                    value1.red(),
                    "+".green(),
                    "<missing>".yellow()
                );
            }
            (None, Some(key2)) => {
                let value2 = key2.value(); // Same as above
                println!(
                    "{}\n{} {}\n{} {}",
                    key.cyan().bold(),
                    "-".red(),
                    "<missing>".yellow(),
                    "+".green(),
                    value2.green()
                );
            }
            (None, None) => unreachable!(),
        }
    }

    Ok(())
}

// Updated to be async and to use the global format manager
async fn load_keys_from_file(file: &PathBuf) -> Result<KeyCollection, FluxError> {

    let manager = FormatManager::instance_read().await;
    manager.load_keys(&file)
}
fn convert_flux_error_to_io_error(error: FluxError) -> io::Error {
    io::Error::new(io::ErrorKind::Other, format!("FluxError: {:?}", error))
}