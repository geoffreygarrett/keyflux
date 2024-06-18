use std::env;
use std::fs;
use std::fs::File;
use std::io::Write;
use std::path::Path;



// let out_dir = env::var("OUT_DIR").expect("OUT_DIR not defined");

// Make sure to bring the app definition into scope. This might require
// the app to be defined in a lib.rs instead of main.rs to be accessible here.
// let mut app = my_cli_app::Cli::command(); // Adjust this to match how you can access your CLI


fn generate_file<P: AsRef<Path>>(path: P, text: &[u8]) {
    let mut f = File::create(path).unwrap();
    f.write_all(text).unwrap()
}

fn main() {
    let out_dir = env::var("OUT_DIR").unwrap();
    let dest_path = Path::new(&out_dir).join("locales.rs");

    let mut locales = Vec::new();
    let i18n_path = Path::new("i18n");

    if let Ok(entries) = fs::read_dir(i18n_path) {
        for entry in entries {
            if let Ok(entry) = entry {
                if let Some(ext) = entry.path().extension() {
                    if ext == "yaml" || ext == "yml" {
                        if let Some(stem) = entry.path().file_stem() {
                            if let Some(stem_str) = stem.to_str() {
                                locales.push(stem_str.to_string());
                            }
                        }
                    }
                }
            }
        }
    }

    let locale_enum = locales.iter().map(|locale| {
        format!("    {},", locale.to_uppercase())
    }).collect::<Vec<_>>().join("\n");

    let locale_impl = locales.iter().map(|locale| {
        format!("            \"{}\" => Ok(Locale::{}),", locale, locale.to_uppercase())
    }).collect::<Vec<_>>().join("\n");

    let locale_display_impl = locales.iter().map(|locale| {
        format!("            Locale::{} => \"{}\",", locale.to_uppercase(), locale)
    }).collect::<Vec<_>>().join("\n");

    let supported_locales = locales.iter().map(|locale| {
        format!("Locale::{}", locale.to_uppercase())
    }).collect::<Vec<_>>().join(", ");

    let locale_code = format!(r#"
#[derive(Debug, Clone, clap::ValueEnum)]
pub enum Locale {{
{locale_enum}
}}

impl std::str::FromStr for Locale {{
    type Err = String;

    fn from_str(s: &str) -> Result<Self, Self::Err> {{
        match s.to_lowercase().as_str() {{
{locale_impl}
            _ => Err(format!("'{{}}' is not a valid locale", s)),
        }}
    }}
}}

impl ToString for Locale {{
    fn to_string(&self) -> String {{
        match self {{
{locale_display_impl}
        }}.to_string()
    }}
}}

impl Into<&'static str> for Locale {{
    fn into(self) -> &'static str {{
        match self {{
{locale_display_impl}
        }}
    }}
}}

pub const SUPPORTED_LOCALES: &[Locale] = &[{supported_locales}];
"#, locale_enum = locale_enum, locale_impl = locale_impl, locale_display_impl = locale_display_impl, supported_locales = supported_locales);

    // fs::write(dest_path, locale_code).unwrap();
    generate_file(dest_path, locale_code.as_bytes());
}
