use keyflux::{cli::Cli, KeyManager};
use keyflux::config::{ConfigHolder, KeyFluxConfig};
use log::{error, info, warn, trace};
use tokio;
use std::path::{Path, PathBuf};
use sodiumoxide;
use std::collections::HashMap;
use std::{env, io};
use std::fs;
use env_logger::WriteStyle;
use keyflux::config::env::EnvConfig;
// use keyflux::flux::file::FileFlux;
// use keyflux::flux::vercel::VercelEnvironmentFlux;
// use keyflux::flux::supabase_vault::SupabaseVaultFlux;
// use keyflux::flux::supabase::SupabaseFlux;
// use keyflux::flux::github::GitHubFlux;
use keyflux::_rust_i18n_translate;
use keyflux::cli::Commands;
use keyflux::flux::register_all_fluxes;
use clap::{Args, Command, CommandFactory, Parser, Subcommand, ValueHint};
use clap_complete::{generate, Generator, Shell};

#[macro_use]
extern crate rust_i18n;

// fn load_env_from_json(file: &str) {
//     info!("{}", t!("loading.file", file = file));
//     let data = fs::read_to_string(file).expect(&t!("error.unable_read_file"));
//     let vars: HashMap<String, String> = serde_json::from_str(&data).expect(&t!("error.json_format"));
//     for (key, value) in vars {
//         env::set_var(key, value);
//     }
// }
//
// fn load_env_from_yaml(file: &str) {
//     info!("{}", t!("loading.file", file = file));
//     let data = fs::read_to_string(file).expect(&t!("error.unable_read_file"));
//     let vars: HashMap<String, String> = serde_yaml::from_str(&data).expect(&t!("error.yaml_format"));
//     for (key, value) in vars {
//         env::set_var(key, value);
//     }
// }
//
// fn load_env_from_toml(file: &str) {
//     info!("{}", t!("loading.file", file = file));
//     let data = fs::read_to_string(file).expect(&t!("error.unable_read_file"));
//     let vars: HashMap<String, String> = toml::from_str(&data).expect(&t!("error.toml_format"));
//     for (key, value) in vars {
//         env::set_var(key, value);
//     }
// }

// if let Some(env_files) = cli.env_files {
// for env_file in env_files.split(',') {
// trace!("{}", t!("trace.loading_env_file", file = env_file));
// match Path::new(env_file).extension().and_then(|s| s.to_str()) {
// Some("json") => load_env_from_json(env_file),
// Some("yaml") | Some("yml") => load_env_from_yaml(env_file),
// Some("toml") => load_env_from_toml(env_file),
// Some("env") => {
// if dotenv::from_filename(env_file).is_err() {
// error!("{}", t!("error.failed_load_dotenv", file = env_file));
// std::process::exit(1);
// }
// }
// _ => warn!("{}", t!("warn.unsupported_file_format", file = env_file)),
// }
// }
// }


// fn get_key_collection_from_env_config(env_config: &EnvConfig, config_path: &PathBuf) -> KeyCollection {
//     let manager = FormatManager::instance_read();
//     match env_config {
//         EnvConfig::Variable { name, value } => {
//             info!("{}", t!("info.setting_env_var", name = name));
//             KeyCollection::new().add(name, value)
//         }
//         EnvConfig::File(file) => {
//             let file_path = if file.is_absolute() {
//                 file
//             } else {
//                 &config_path.parent().unwrap().join(file)
//             };
//
//             trace!("{}: {}", "trace.loading_env_file", file_path.display());
//
//             trace!("{}", t!("trace.loading_env_file", file = file_path.display()));
//             manager.load_keys(&file_path, None).unwrap_or_else(|err| {
//                 error!("{}: {}", t!("error.loading_env_file"), err.to_string());
//                 std::process::exit(1);
//             })
//         }
//     }
// }

use keyflux::key::Key;

async fn process_env_config(env_config: &EnvConfig, config_path: &PathBuf) {
    trace!("{}", t!("trace.env_config", env_config = format!("{:?}", env_config)));
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
            trace!("{}", t!("trace.loading_env_file", file = file_path.display()));
            let new_keys = manager.load_keys(&file_path, None).unwrap_or_else(|err| {

                error!("{}: {}", t!("error.loading_env_file"), err.to_string());
                std::process::exit(1);
            });
            for key in new_keys.iter() {
                std::env::set_var(key.name(), key.value());
            }
            keys.merge(new_keys);
        }
    }
}


use keyflux::command::diff::diff;
use keyflux::command::sort::sort;
use keyflux::command::sync::sync;
use keyflux::command::convert::convert;
use keyflux::file::format_manager::FormatManager;
use keyflux::file::key_collection::KeyCollection;
use keyflux::key::KeyDetail;
// use keyflux::file::format_manager::FormatManager;


// #[derive(Parser, Debug, PartialEq)]
// #[command(name = "completion-derive")]
// struct Opt {
//     // If provided, outputs the completion file for given shell
//     #[arg(long = "generate", value_enum)]
//     generator: Option<Shell>,
//     #[command(subcommand)]
//     command: Option<Commands>,
// }

fn print_completions<G: Generator>(gen: G, cmd: &mut Command) {
    generate(gen, cmd, cmd.get_name().to_string(), &mut io::stdout());
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
    register_all_fluxes();

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
    trace!("{}", t!("trace.parsed_cli_args", cli = format!("{:?}", cli)));

    //////////////////////////
    // KEYFLUX CONFIG
    //////////////////////////
    trace!("{}", t!("trace.loading_config_file", file = format!("{:?}", cli.config_file)));

    // Attempt to load the configuration using the provided path or default locations
    let config_manager = ConfigHolder::load_config(cli.config_file).unwrap_or_else(|err| {
        error!("{}: {}", t!("error.loading_config_file"), err.to_string()); // Print the localized error message
        trace!("{}", t!("trace.exiting")); // Print the localized trace message
        std::process::exit(1); // Exit the program
    });

    // Once the configuration is successfully loaded, process it
    // config_manager.process(); // Assuming `process` does not return a Result, otherwise handle errors accordingly
    if let Some(env_configs) = config_manager.config().env() {
        for env_config in env_configs {
            process_env_config(env_config, config_manager.path()).await;
        }
    }

    trace!("{}", t!("trace.loaded_config"));
    let mut manager = KeyManager::new(config_manager.config);

    // Check if command is None and handle it
    match cli.command {
        None => {
            eprintln!("No command specified.");
            std::process::exit(1);
        }
        Some(command) => {
            match command {
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
                    if let Err(e) = convert(&file, &fmt).await {
                        eprintln!("Error converting file: {}", e);
                        std::process::exit(1);
                    }
                }
                Commands::Sub { input, output } => {
                    if let Err(e) = keyflux::command::sub(input, output) {
                        eprintln!("Error subbing files: {}", e);
                        std::process::exit(1);
                    }
                }
            }
        }
    }
}
