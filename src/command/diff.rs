// use std::collections::{BTreeSet};
// use std::io::{self};
// use std::path::PathBuf;
// use colored::*;
// use crate::error::FluxError;
// use crate::file::format_manager::{FormatManager};
// use crate::file::key_collection::KeyCollection;
// //
// // Assuming `diff` is now an async function
// pub async fn diff(file1: &PathBuf, file2: &PathBuf) -> Result<(), io::Error> {
//     let keys1 = match load_keys_from_file(&file1).await {
//         Ok(keys) => keys,
//         Err(e) => return Err(convert_flux_error_to_io_error(e)),
//     };
//     let keys2 = match load_keys_from_file(&file2).await {
//         Ok(keys) => keys,
//         Err(e) => return Err(convert_flux_error_to_io_error(e)),
//     };
//
//     let all_keys: BTreeSet<_> = keys1.keys().into_iter().chain(keys2.keys().into_iter()).collect();
//
//     println!("{}", "Differences in environment files:".bold().underline());
//
//     for key in &all_keys {
//         match (keys1.get(key.as_str()), keys2.get(key.as_str())) {
//             (Some(key1), Some(key2)) if key1.value() == key2.value() => {
//                 // Common key-value pair, no need to display.
//             }
//             (Some(key1), Some(key2)) => {
//                 let value1 = key1.value(); // Now calling .value() on &Key, not Option<&Key>
//                 let value2 = key2.value(); // Same here
//                 println!(
//                     "{}\n{} {}\n{} {}",
//                     key.cyan().bold(),
//                     "-".red(),
//                     value1.red(),
//                     "+".green(),
//                     value2.green()
//                 );
//             }
//             (Some(key1), None) => {
//                 let value1 = key1.value(); // Now calling .value() on &Key, not Option<&Key>
//                 println!(
//                     "{}\n{} {}\n{} {}",
//                     key.cyan().bold(),
//                     "-".red(),
//                     value1.red(),
//                     "+".green(),
//                     "<missing>".yellow()
//                 );
//             }
//             (None, Some(key2)) => {
//                 let value2 = key2.value(); // Same as above
//                 println!(
//                     "{}\n{} {}\n{} {}",
//                     key.cyan().bold(),
//                     "-".red(),
//                     "<missing>".yellow(),
//                     "+".green(),
//                     value2.green()
//                 );
//             }
//             (None, None) => unreachable!(),
//         }
//     }
//
//     Ok(())
// }
//
// // Updated to be async and to use the global format manager
// async fn load_keys_from_file(file: &PathBuf) -> Result<KeyCollection, FluxError> {
//     let manager = FormatManager::instance_read().await;
//     manager.load_keys(&file, None)
// }
//
// fn convert_flux_error_to_io_error(error: FluxError) -> io::Error {
//     io::Error::new(io::ErrorKind::Other, format!("FluxError: {:?}", error))
// }
//
// use std::collections::BTreeSet;
// use std::io::{self};
// use std::path::PathBuf;
// use colored::*;
// use cli_table::{Table, Cell, print_stdout, format::{Justify, Border}, Style};
// use crate::error::FluxError;
// use crate::file::format_manager::{FormatManager};
// use crate::file::key_collection::KeyCollection;
//
// pub async fn diff(file1: &PathBuf, file2: &PathBuf) -> Result<(), io::Error> {
//     let keys1 = match load_keys_from_file(&file1).await {
//         Ok(keys) => keys,
//         Err(e) => return Err(convert_flux_error_to_io_error(e)),
//     };
//     let keys2 = match load_keys_from_file(&file2).await {
//         Ok(keys) => keys,
//         Err(e) => return Err(convert_flux_error_to_io_error(e)),
//     };
//
//     // let all_keys: BTreeSet<_> = keys1.keys().chain(keys2.keys()).collect();
//     let all_keys: BTreeSet<_> = keys1.keys().into_iter().chain(keys2.keys().into_iter()).collect();
//
//     let mut rows = vec![];
//
//     for key in all_keys {
//         let status = match (keys1.get(key.as_str()), keys2.get(key.as_str())) {
//             (Some(key1), Some(key2)) => {
//                 if key1.value() == key2.value() {
//                     "✔ Present in both".green() // Same value in both files
//                 } else {
//                     "≠ Varies".yellow() // Value differs in both files
//                 }
//             }
//             (Some(_), None) => "✘ Only in file1".red(), // Present in file1, absent in file2
//             (None, Some(_)) => "✘ Only in file2".red(), // Absent in file1, present in file2
//             (None, None) => unreachable!(), // Unreachable because we are iterating over all keys
//         };
//
//         rows.push(vec![key.cyan().cell().bold(true), status.cell().bold(true)]);
//     }
//
//     let table = rows.table()
//         .title(vec![
//             "Key".cell().bold(true),
//             "Status".cell().bold(true),
//         ])
//         .bold(true)
//         .border(Border::builder().build());
//
//     assert!(print_stdout(table).is_ok());
//
//     Ok(())
// }

use std::collections::BTreeSet;
use std::io::{self};
use std::path::PathBuf;
// use cli_table::{Table, Cell, print_stdout, format::{Justify, Border}, Style};
use prettytable::{Table, Row, Cell, color, Attr};

use crate::error::FluxError;
use crate::file::format_manager::{FormatManager};
use crate::file::key_collection::KeyCollection;

/// Load keys from the specified environment file.
///
/// # Arguments
/// * `file` - A reference to the `PathBuf` of the file to be loaded.
///
/// # Returns
/// Returns a `Result` containing the `KeyCollection` on success, or a `FluxError` on failure.
async fn load_keys_from_file(file: &PathBuf) -> Result<KeyCollection, FluxError> {
    let manager = FormatManager::instance_read().await;
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
    let keys1 = load_keys_from_file(file1).await.map_err(convert_flux_error_to_io_error)?;
    let keys2 = load_keys_from_file(file2).await.map_err(convert_flux_error_to_io_error)?;

    let all_keys: BTreeSet<_> = keys1.keys().into_iter().chain(keys2.keys().into_iter()).collect();
    let mut table = Table::new();
    table.add_row(row![bFw => t!("cli.diff.key"), t!("cli.diff.status")]);
    // table.add_row(row![bFw => "🔑 Key", "Status"]);

    for key in all_keys {
        let status = match (keys1.get(key.as_str()), keys2.get(key.as_str())) {
            (Some(key1), Some(key2)) => {
                if key1.value() == key2.value() {
                    Cell::new(&t!("cli.diff.identical")).with_style(Attr::ForegroundColor(color::GREEN))
                    // Cell::new("✔ Identical").with_style(Attr::ForegroundColor(color::GREEN))
                } else {
                    Cell::new(&t!("cli.diff.varies")).with_style(Attr::ForegroundColor(color::YELLOW))
                    // Cell::new("≠ Varies").with_style(Attr::ForegroundColor(color::YELLOW))
                }
            }
            (Some(_), None) => Cell::new(&t!("cli.diff.only_in_file1")).with_style(Attr::ForegroundColor(color::RED)),
            // (Some(_), None) => Cell::new("✘ Only in file1").with_style(Attr::ForegroundColor(color::RED)),
            (None, Some(_)) => Cell::new(&t!("cli.diff.only_in_file2")).with_style(Attr::ForegroundColor(color::RED)),
            // (None, Some(_)) => Cell::new("✘ Only in file2").with_style(Attr::ForegroundColor(color::RED)),
            (None, None) => unreachable!(),
        };

        table.add_row(Row::new(vec![Cell::new(&key).with_style(Attr::Bold).with_style(Attr::ForegroundColor(color::CYAN)), status]));
    }

    table.printstd(); // Print the table to stdout

    Ok(())
}