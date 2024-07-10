#![allow(warnings)]

#[macro_use]
extern crate rust_i18n;
use std::{env, io};
use std::collections::HashMap;
use std::fs;
use std::path::{Path, PathBuf};

use clap::{Args, Command, CommandFactory, Parser, Subcommand, ValueHint};
use clap_complete::{generate, Generator, Shell};
use env_logger::WriteStyle;
use log::{error, info, trace, warn};
use sodiumoxide;
use tokio;

use keyflux::_rust_i18n_translate;
use crate::command::convert::convert;
use crate::command::diff::diff;
use crate::command::sort::sort;
use crate::command::sync::sync;
use keyflux::config::{ConfigHolder, KeyFluxConfig};
use keyflux::config::env::EnvConfig;
use keyflux::file::format_manager::FormatManager;
use keyflux::file::key_collection::{KeyCollection, KeyCollectionTransform};
use keyflux::key::Key;
// use keyflux::flux::register_all_fluxes;
use keyflux::key::KeyDetail;
use keyflux::KeyManager;

use crate::models::cli::{Cli, Commands};

mod command;
mod models;

async fn process_env_config(env_config: &EnvConfig, config_path: &PathBuf) {
    trace!(
        "{}",
        t!("trace.env_config", env_config = format!("{:?}", env_config))
    );
    let manager = FormatManager::read().await;
    let mut keys = KeyCollection::new();
    match env_config {
        EnvConfig::Variable { name, value } => {
            info!("{}", t!("info.setting_env_var", name = name));
            std::env::set_var(name, value);
        }
        EnvConfig::File(file) => {
            let file_path = if file.is_absolute() {
                file
            } else {
                &config_path.parent().unwrap().join(file)
            };
            trace!("{}: {}", "trace.loading_env_file", file_path.display());
            trace!(
                "{}",
                t!("trace.loading_env_file", file = file_path.display())
            );
            let new_keys = manager.load_keys(&file_path, None).unwrap_or_else(|err| {
                error!("{}: {}", t!("error.loading_env_file"), err.to_string());
                std::process::exit(1);
            });
            new_keys.to_key_detail_collection().iter().for_each(|key| {
                std::env::set_var(key.name(), key.value());
            });
            keys.merge(new_keys);
        }
    }
}

#[tokio::main]
async fn main() {
    //////////////////////////
    // CLI
    //////////////////////////
    let mut cli = Cli::parse();

    if let Some(generator) = cli.generator {
        let mut cmd = Cli::command();
        let name = cmd.get_name().to_string();
        generate(generator, &mut cmd, &name, &mut std::io::stdout());
        return;
    }

    // inventory::collect!(Box<dyn Flux>);

    //////////////////////////
    // FORMAT MANAGER
    //////////////////////////
    // let format_manager = FormatManager::new();

    //////////////////////////
    // I18N
    //////////////////////////
    rust_i18n::set_locale(cli.locale.clone().into());

    //////////////////////////
    // FLUX
    //////////////////////////
    // register_all_fluxes();

    //////////////////////////
    // LOGGING
    //////////////////////////
    env_logger::Builder::new()
        .write_style(WriteStyle::Always)
        .filter_level(cli.log_level.clone().into())
        .init();

    //////////////////////////
    // SODIUM OXIDE
    //////////////////////////
    sodiumoxide::init().expect(&t!("error.sodiumoxide_init"));

    //////////////////////////
    // CLI LOG
    //////////////////////////
    trace!(
        "{}",
        t!("trace.parsed_cli_args", cli = format!("{:?}", cli))
    );

    //////////////////////////
    // KEYFLUX CONFIG
    //////////////////////////
    trace!(
        "{}",
        t!(
            "trace.loading_config_file",
            file = format!("{:?}", cli.config_file)
        )
    );

    // Attempt to load the configuration using the provided path or default locations
    let mut config_manager = ConfigHolder::load_config(cli.config_file).unwrap_or_else(|err| {
        error!("{}: {}", t!("error.loading_config_file"), err.to_string()); // Print the localized error message
        trace!("{}", t!("trace.exiting")); // Print the localized trace message
        std::process::exit(1); // Exit the program
    });

    // First, retrieve the path with an immutable borrow
    let path = config_manager.path().to_owned();

    // Once the configuration is successfully loaded, process it
    // config_manager.process(); // Assuming `process` does not return a Result, otherwise handle errors accordingly
    if let Some(env_configs) = config_manager.config().env() {
        for env_config in env_configs {
            process_env_config(env_config, &path).await;
        }
    }

    // Then, retrieve the mutable config
    let mut config = config_manager.config_mut();

    // Now, create the KeyManager
    let mut manager = KeyManager::new(config, &path);

    // Check if command is None and handle it
    match cli.command {
        None => {
            eprintln!("No command specified.");
            std::process::exit(1);
        }
        Some(command) => match command {
            Commands::Sort { file } => {
                if let Err(e) = sort(&file).await {
                    eprintln!("Error sorting file: {}", e);
                    std::process::exit(1);
                }
            }
            Commands::Diff { file1, file2 } => {
                if let Err(e) = diff(&file1, &file2).await {
                    eprintln!("Error diffing files: {}", e);
                    std::process::exit(1);
                }
            }
            Commands::Sync => {
                if let Err(e) = sync(&mut manager).await {
                    eprintln!("Error syncing environment: {}", e);
                    std::process::exit(1);
                }
            }
            Commands::Convert { file, fmt } => {
                if let Err(e) = convert(file.as_ref(), &fmt).await {
                    eprintln!("Error converting file: {}", e);
                    std::process::exit(1);
                }
            }
            Commands::Sub { input, output } => {
                if let Err(e) = crate::command::sub(input, output) {
                    eprintln!("Error subbing files: {}", e);
                    std::process::exit(1);
                }
            }
        },
    }
}
