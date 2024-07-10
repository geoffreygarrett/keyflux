
use std::collections::BTreeSet;
use std::io::{self};
use std::path::PathBuf;
use keyflux::error::FluxError;
use keyflux::file::format_manager::FormatManager;
use keyflux::file::key_collection::KeyCollection;
use prettytable::{Attr, Cell, color, Row, row, Table};


// use crate::cli::Commands::Diff;

/// Load keys from the specified environment file.
///
/// # Arguments
/// * `file` - A reference to the `PathBuf` of the file to be loaded.
///
/// # Returns
/// Returns a `Result` containing the `KeyCollection` on success, or a `FluxError` on failure.
async fn load_keys_from_file(file: &PathBuf) -> Result<KeyCollection, FluxError> {
    let manager = FormatManager::read().await;
    manager.load_keys(file, None)
}

/// Converts a `FluxError` into a more generic `io::Error` to fit function signatures that expect standard IO errors.
///
/// # Arguments
/// * `error` - The `FluxError` to be converted.
///
/// # Returns
/// Returns an `io::Error` representing the original `FluxError`.
fn convert_flux_error_to_io_error(error: FluxError) -> io::Error {
    io::Error::new(io::ErrorKind::Other, format!("FluxError: {:?}", error))
}

/// Compares the keys in two specified environment files and prints the differences.
///
/// # Arguments
/// * `file1` - A reference to the `PathBuf` for the first file.
/// * `file2` - A reference to the `PathBuf` for the second file.
///
/// # Returns
/// Returns an `Ok(())` if the differences were successfully calculated and printed,
/// or an `IoError` if there was a problem accessing the files or reading their contents.
pub async fn diff(file1: &PathBuf, file2: &PathBuf) -> Result<(), std::io::Error> {
    let keys1 = load_keys_from_file(file1)
        .await
        .map_err(convert_flux_error_to_io_error)?;
    let keys2 = load_keys_from_file(file2)
        .await
        .map_err(convert_flux_error_to_io_error)?;

    let all_keys: BTreeSet<_> = keys1
        .keys()
        .into_iter()
        .chain(keys2.keys().into_iter())
        .collect();
    let mut table = Table::new();
    table.add_row(row![bFw => t!("cli.diff.key"), t!("cli.diff.status")]);
    // table.add_row(row![bFw => "🔑 Key", "Status"]);

    // let base = KeyCollection::new();
    // let diff = keys1.diff(&keys2);
    // info!("Differences in environment files: {:?}", diff);

    for key in all_keys {
        let status = match (keys1.get(key.as_str()), keys2.get(key.as_str())) {
            (Some(key1), Some(key2)) => {
                if key1.value() == key2.value() {
                    Cell::new(&t!("cli.diff.identical"))
                        .with_style(Attr::ForegroundColor(color::GREEN))
                    // Cell::new("✔ Identical").with_style(Attr::ForegroundColor(color::GREEN))
                } else {
                    Cell::new(&t!("cli.diff.varies"))
                        .with_style(Attr::ForegroundColor(color::YELLOW))
                    // Cell::new("≠ Varies").with_style(Attr::ForegroundColor(color::YELLOW))
                }
            }
            (Some(_), None) => Cell::new(&t!("cli.diff.only_in_file1"))
                .with_style(Attr::ForegroundColor(color::RED)),
            // (Some(_), None) => Cell::new("✘ Only in file1").with_style(Attr::ForegroundColor(color::RED)),
            (None, Some(_)) => Cell::new(&t!("cli.diff.only_in_file2"))
                .with_style(Attr::ForegroundColor(color::RED)),
            // (None, Some(_)) => Cell::new("✘ Only in file2").with_style(Attr::ForegroundColor(color::RED)),
            (None, None) => unreachable!(),
        };

        table.add_row(Row::new(vec![
            Cell::new(&key)
                .with_style(Attr::Bold)
                .with_style(Attr::ForegroundColor(color::CYAN)),
            status,
        ]));
    }

    table.printstd(); // Print the table to stdout

    Ok(())
}
