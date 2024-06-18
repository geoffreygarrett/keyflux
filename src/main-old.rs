use clap::Parser;
use keyflux::{cli::Cli, ConfigError, KeyManager};
use keyflux::config::KeyFluxConfig;
use log::{error, info, warn, trace};
use tokio;
use std::path::Path;
use sodiumoxide;
use std::collections::HashMap;
use std::{env};
use std::fs::{self};
use keyflux::config::EnvConfig;
use keyflux::flux::file::FileFlux;
use keyflux::flux::vercel::VercelEnvironmentFlux;
use keyflux::flux::supabase_vault::SupabaseVaultFlux;
use keyflux::_rust_i18n_translate;

fn load_env_from_json(file: &str) {
    info!("{}", t!("loading.file", file = file));
    let data = fs::read_to_string(file).expect(&t!("error.unable_read_file"));
    let vars: HashMap<String, String> = serde_json::from_str(&data).expect(&t!("error.json_format"));
    for (key, value) in vars {
        std::env::set_var(key, value);
    }
}

fn load_env_from_yaml(file: &str) {
    let data = fs::read_to_string(file).expect(&t!("error.unable_read_file"));
    let vars: HashMap<String, String> = serde_yaml::from_str(&data).expect(&t!("error.yaml_format"));
    for (key, value) in vars {
        std::env::set_var(key, value);
    }
}

fn load_env_from_toml(file: &str) {
    let data = fs::read_to_string(file).expect(&t!("error.unable_read_file"));
    let vars: HashMap<String, String> = toml::from_str(&data).expect(&t!("error.toml_format"));
    for (key, value) in vars {
        std::env::set_var(key, value);
    }
}

#[macro_use]
extern crate rust_i18n;

fn process_env_config(env_config: &EnvConfig) {
    trace!("{}", t!("trace.env_config", env_config = format!("{:?}", env_config)));
    match env_config {
        EnvConfig::Variable { name, value } => {
            info!("{}", t!("info.setting_env_var", name = name));
            env::set_var(name, value);
        }
        EnvConfig::File(file) => {
            trace!("{}", t!("trace.loading_env_file", file = file));
            match Path::new(file).extension().and_then(|s| s.to_str()) {
                Some("json") => load_env_from_json(file),
                Some("yaml") | Some("yml") => load_env_from_yaml(file),
                Some("toml") => load_env_from_toml(file),
                Some("env") => {
                    if dotenv::from_filename(file).is_err() {
                        error!("{}", t!("error.failed_load_dotenv", file = file));
                        std::process::exit(1);
                    }
                }
                _ => warn!("{}", t!("warn.unsupported_file_format", file = file)),
            }
        }
    }
}

use keyflux::flux_registry::FLUX_REGISTRY;

static VERCEL: &str = "vercel";
static FILE: &str = "file";

static SUPABASE: &str = "supabase";

static SUPABASE_VAULT: &str = "supabase_vault";
static GITHUB: &str = "github";

fn register_all_fluxes() {
    let mut registry = FLUX_REGISTRY.lock().unwrap();

    /////////////////////
    // VERCEL FLUX
    /////////////////////
    registry.register(VERCEL, Box::new(|config| {
        trace!("{}", t!("trace.creating_vercel_flux", config = format!("{:?}", config)));
        let flux: VercelEnvironmentFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_vercel_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));
    /////////////////////
    // FILE FLUX
    /////////////////////
    registry.register(FILE, Box::new(|config| {
        trace!("{}", t!("trace.creating_file_flux", config = format!("{:?}", config)));
        let flux: FileFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_file_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));
    /////////////////////
    // SUPABASE FLUX
    /////////////////////
    registry.register(SUPABASE, Box::new(|config| {
        trace!("{}", t!("trace.creating_supabase_flux", config = format!("{:?}", config)));
        let flux: SupabaseFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_supabase_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));
    /////////////////////
    // SUPABASE VAULT
    /////////////////////
    registry.register(SUPABASE_VAULT, Box::new(|config| {
        trace!("{}", t!("trace.creating_supabase_vault_flux", config = format!("{:?}", config)));
        let flux: SupabaseVaultFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_supabase_vault_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));
    /////////////////////
    // GITHUB FLUX
    /////////////////////
    registry.register(GITHUB, Box::new(|config| {
        trace!("{}", t!("trace.creating_github_flux", config = format!("{:?}", config)));
        let flux: GitHubFlux = serde_json::from_value(config.clone())
            .map_err(|e| ConfigError::InvalidConfig(format!("{}", t!("error.parsing_github_flux", error = format!("{:?}", e)))))?;
        Ok(Box::new(flux))
    }));
}

// use spinners::{Spinner, Spinners};
// use std::thread::sleep;


// pub fn log_with_spinner(level: LevelFilter, message: &str, spinner_message: &str, duration: Duration) {
//     // Log the message
//     info!("{}", "TESTTTTT");
//     match level {
//         LevelFilter::Info => info!("{}", message),
//         _ => info!("{}", message), // handle other levels if needed
//     }
//
//     let mut sp = Spinner::with_stream(Spinners::Grenade, spinner_message.into());
//
//
//     sp.stop_with_symbol("✔".into());
//     sleep(Duration::from_secs(1));
//     // // Log the message and run the spinner concurrently
//     // thread::spawn(move || {
//     //     // Simulate some work with a sleep
//     //     thread::sleep(duration);
//     //     sp.stop();
//     // });
// }


use env_logger::fmt::{WriteStyle};
use keyflux::flux::github::GitHubFlux;
use keyflux::flux::supabase::SupabaseFlux;
// use log::{Level, Record};
// use std::io::Write;
// use std::sync::Mutex;
// use std::thread::sleep;
// use std::time::Duration;
// use chrono::Utc;

// lazy_static::lazy_static! {
//     static ref SPINNER: Mutex<Option<Spinner>> = Mutex::new(None);
// }
//
// lazy_static::lazy_static! {
//     static ref SPINNER: Mutex<Option<Spinner>> = Mutex::new(None);
// }


// fn custom_format(buf: &mut Formatter, record: &Record) -> std::io::Result<()> {
//     let ts = Utc::now().format("%Y-%m-%dT%H:%M:%SZ");
//     let level = record.level();
//     let target = record.target();
//     let args = record.args();
//
//     let spinner_symbol = match level {
//         Level::Info => "ℹ️ ",
//         Level::Warn => "⚠️ ",
//         Level::Error => "❌ ",
//         Level::Debug => "🐞 ",
//         Level::Trace => "🔍 ",
//     };
//
//     let spinner_lock = SPINNER.lock().unwrap();
//     let spinner_message = if spinner_lock.is_some() {
//         format!("{} ", spinner_symbol)
//     } else {
//         String::new()
//     };
//
//     writeln!(
//         buf,
//         "[{} {} {}] {}{}",
//         ts,
//         level,
//         target,
//         spinner_message,
//         args
//     )
// }
// fn log_with_spinner(level: log::Level, message: &str, spinner_message: &str, duration: Duration) {
//     {
//         let mut spinner_lock = SPINNER.lock().unwrap();
//         *spinner_lock = Some(Spinner::new(Spinners::Dots9, spinner_message.into()));
//     }
//
//     // Wait for a moment to ensure the spinner is displayed before logging
//     thread::sleep(Duration::from_millis(100));
//
//     log::log!(level, "{}", message);
//     thread::sleep(duration);
//
//     {
//         let mut spinner_lock = SPINNER.lock().unwrap();
//         if let Some(mut spinner) = spinner_lock.take() {
//             spinner.stop_with_symbol("✔️ ".into());
//         }
//     }
//
//     // Print a newline to ensure proper formatting after stopping the spinner
//     println!();
// }

// use indicatif::{ProgressBar, ProgressStyle};

// struct Spinner {
//     progress_bar: ProgressBar,
// }
//
// impl Spinner {
//     pub fn new(message: &str) -> Self {
//         let progress_bar = ProgressBar::new_spinner();
//         progress_bar.set_style(ProgressStyle::default_spinner()
//             .tick_strings(&["-", "\\", "|", "/"])
//             .template("{spinner:.green} {msg}")
//             .unwrap());
//         progress_bar.set_message(message.to_string());
//         progress_bar.enable_steady_tick(Duration::from_millis(100));
//         Spinner { progress_bar }
//     }
//
//     pub fn stop(self) {
//         self.progress_bar.finish_and_clear();
//     }
// }

#[tokio::main]
async fn main() {

    // let spinner = Spinner::new("Loading things into memory...");

    // Simulate async operation
    // sleep(Duration::from_secs(3));

    // spinner.stop();

    /////////////////////
    // CLI
    /////////////////////
    let cli = Cli::parse();

    // log_with_spinner(log::Level::Info, "Starting KeyFlux...", "Starting...", std::time::Duration::from_secs(3));

    /////////////////////
    // I18N
    /////////////////////
    rust_i18n::set_locale(cli.locale.clone().into());

    /////////////////////
    // FLUX
    /////////////////////
    register_all_fluxes();

    /////////////////////
    // LOGGING
    /////////////////////
    env_logger::Builder::new()
        .write_style(WriteStyle::Always)
        .filter_level(cli.log_level.clone().into())
        .init();

    // // let mut s = Spinner::new(Spinners::Dots9, "Loading things into memory...".into());
    // tokio::time::sleep(Duration::from_secs(3)).await;
    // s.stop();
    // std::process::Command::new("clear").status().unwrap();


    // log_with_spinner(log::Level::Info, "Processing data...", "Processing...", std::time::Duration::from_secs(3));


    /////////////////////
    // SODIUM OXIDE
    /////////////////////
    sodiumoxide::init().expect(&t!("error.sodiumoxide_init"));

    /////////////////////
    // CLI LOG
    /////////////////////
    trace!("{}", t!("trace.parsed_cli_args", cli = format!("{:?}", cli)));


    if let Some(env_files) = cli.env_files {
        for env_file in env_files.split(',') {
            trace!("{}", t!("trace.loading_env_file", file = env_file));
            match Path::new(env_file).extension().and_then(|s| s.to_str()) {
                Some("json") => load_env_from_json(env_file),
                Some("yaml") | Some("yml") => load_env_from_yaml(env_file),
                Some("toml") => load_env_from_toml(env_file),
                Some("env") => {
                    if dotenv::from_filename(env_file).is_err() {
                        error!("{}", t!("error.failed_load_dotenv", file = env_file));
                        std::process::exit(1);
                    }
                }
                _ => warn!("{}", t!("warn.unsupported_file_format", file = env_file)),
            }
        }
    }


    /////////////////////
    // KEYFLUX CONFIG
    /////////////////////
    trace!("{}", t!("trace.loading_config_file", file = format!("{:?}", cli.config_file)));
    let config = KeyFluxConfig::from_file(&cli.config_file).unwrap_or_else(|e| {
        error!("{}", t!("error.load_config", error = format!("{:?}", e)));
        std::process::exit(1);
    });

    if let Some(env_configs) = &config.env {
        for env_config in env_configs {
            process_env_config(env_config);
        }
    }

    trace!("{}", t!("trace.loaded_config"));
    let mut manager = KeyManager::new(config);

    trace!("{}", t!("trace.starting_sync"));
    if let Err(e) = manager.flux_keys().await {
        error!("{}", t!("error.sync_secrets", error = format!("{:?}", e.to_string())));
        std::process::exit(1);
    }

    info!("{}", t!("info.secrets_synced"));
}


//     if cli.watch {
//         let (tx, rx) = channel();
//         let mut watcher = RecommendedWatcher::new(tx, Config::default()).unwrap();
//
//         watcher.watch(Path::new(&cli.config_file), RecursiveMode::NonRecursive).unwrap();
//
//         loop {
//             match rx.recv() {
//                 Ok(Ok(Event {
//                           kind: EventKind::Modify(_),
//                           ..
//                       })) => {
//                     trace!("{}", t!("trace.config_changed"));
//                     let config = match KeyFluxConfig::from_file(&cli.config_file) {
//                         Ok(config) => config,
//                         Err(e) => {
//                             error!("{}", t!("error.reload_config", error = format!("{:?}", e)));
//                             continue;
//                         }
//                     };
//
//                     trace!("{}", t!("trace.reloaded_config"));
//                     manager = KeyManager::new(config);
//
//                     if let Err(e) = manager.flux_keys().await {
//                         error!("{}", t!("error.sync_secrets_after_reload", error = format!("{:?}", e)));
//                     } else {
//                         info!("{}", t!("info.secrets_synced_after_reload"));
//                     }
//                 }
//                 Ok(event) => trace!("{}", t!("trace.unhandled_event", event = format!("{:?}", event))),
//                 Err(e) => {
//                     error!("{}", t!("error.watch", error = format!("{:?}", e)));
//                     break;
//                 }
//             }
//         }
//     }