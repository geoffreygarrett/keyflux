include!(concat!(env!("OUT_DIR"), "/locales.rs"));

use clap::{Parser, Subcommand, ValueEnum, ValueHint};
use log::LevelFilter;
use std::path::{PathBuf};
use rust_i18n::t;
use lazy_static::lazy_static;
use clap_complete::{generate, Generator, Shell};

lazy_static! {
    static ref CLI_NAME: String = env!("CARGO_PKG_NAME").to_string();
    static ref CLI_VERSION: String = env!("CARGO_PKG_VERSION").to_string();
    static ref CLI_AUTHOR: String = env!("CARGO_PKG_AUTHORS").to_string();
    static ref CLI_ABOUT: String = t!("cli.about");
    static ref ENV_FILES_HELP: String = t!("cli.env_files.help");
    static ref CONFIG_FILE_HELP: String = t!("cli.config_file.help");
    static ref WATCH_HELP: String = t!("cli.watch.help");
    static ref LOG_LEVEL_HELP: String = t!("cli.log_level.help");
    static ref LOCALE_HELP: String = t!("cli.locale.help");
}

fn determine_locale() -> Locale {
    if let Ok(lang) = std::env::var("LC_ALL").or_else(|_| std::env::var("LANG")) {
        let lang = lang.to_lowercase();
        for locale in Locale::value_variants() {
            if lang.starts_with(&locale.to_string()) {
                return locale.clone();
            }
        }
    }
    Locale::EN // Default to English if no match found
}


// #[derive(Parser, Debug, PartialEq)]
// #[command(name = "completion-derive")]
// struct Opt {
//     // If provided, outputs the completion file for given shell
//     #[arg(long = "generate", value_enum)]
//     generator: Option<Shell>,
//     #[command(subcommand)]
//     command: Option<Commands>,
// }


/// Command-line interface for the environment synchronizer.
#[derive(Debug, Parser)]
#[command(name = & * * CLI_NAME, version = & * * CLI_VERSION, author = & * * CLI_AUTHOR)]
#[command(about = & * * CLI_ABOUT, long_about = None)]
pub struct Cli {
    #[command(subcommand)]
    pub command: Option<Commands>,

    /// Comma-separated list of environment files to load.
    #[arg(short, long, help = & * * ENV_FILES_HELP, value_hint = ValueHint::FilePath)]
    pub env_files: Option<Vec<PathBuf>>,

    /// Path to the configuration file.
    #[arg(short, long, help = & * * CONFIG_FILE_HELP, value_hint = ValueHint::FilePath)]
    pub config_file: Option<PathBuf>,

    /// Watch for changes in the configuration file and reload automatically.
    #[arg(long, help = & * * WATCH_HELP, short = 'w')]
    pub watch: bool,

    /// Set the locale for the application.
    #[arg(
        short = 'L', long, help = & * * LOCALE_HELP, default_value_t = determine_locale()
    )]
    pub locale: Locale,

    /// Set the logging level (error, warn, info, debug, trace).
    #[arg(
        short = 'l', long, default_value = "info", help = & * * LOG_LEVEL_HELP, value_parser = clap::value_parser ! (LogLevel)
    )]
    pub log_level: LogLevel,

    /// Generate completion scripts for the specified shell.
    #[arg(
        help = "Generate completion scripts for your shell",
        long = "generate",
        short = 'g',
        value_enum
    )]
    pub generator: Option<Shell>,
}

#[derive(Debug, Subcommand, PartialEq, Eq)]
pub enum Commands {
    /// Sort environment file lexicographically
    Sort {
        /// Path to the environment file
        #[arg(short, long)]
        file: PathBuf,
    },
    /// Change format of environment file
    Convert {
        /// Path to the environment file
        #[arg(long, short = 'f')]
        file: PathBuf,
        /// New format to convert to
        #[arg(long, short = 't')]
        fmt: String,
    },
    /// Diff two environment files
    Diff {
        /// Path to the first environment file
        #[arg(short = '1', long)]
        file1: PathBuf,
        /// Path to the second environment file
        #[arg(short = '2', long)]
        file2: PathBuf,
    },
    /// Sync environment variables from the configuration file
    Sync,
}

#[derive(Debug, Clone, ValueEnum)]
pub enum LogLevel {
    Error,
    Warn,
    Info,
    Debug,
    Trace,
}

impl From<LogLevel> for LevelFilter {
    fn from(level: LogLevel) -> Self {
        match level {
            LogLevel::Error => LevelFilter::Error,
            LogLevel::Warn => LevelFilter::Warn,
            LogLevel::Info => LevelFilter::Info,
            LogLevel::Debug => LevelFilter::Debug,
            LogLevel::Trace => LevelFilter::Trace,
        }
    }
}
