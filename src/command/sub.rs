use std::fs;
use std::io::Write;
use std::path::PathBuf;
use glob::glob;
use regex::Regex;

static VAR_REGEX_V2: &str = r#"\$\{([^{}]*(?:\{[^{}]*\}[^{}]*)*)\}"#; // fixes nested

fn replace_env_in_content(content: &str) -> Result<String, Box<dyn std::error::Error>> {
    let re_v2 = Regex::new(VAR_REGEX_V2).unwrap();
    let replaced_v2 = re_v2.replace_all(&content, |caps: &regex::Captures| {
        let var_name = &caps[1];
        std::env::var(var_name).unwrap_or_else(|_| "".to_string())
    });
    Ok(replaced_v2.to_string())
}

pub fn sub(input: Vec<PathBuf>, output: Option<PathBuf>) -> Result<(), Box<dyn std::error::Error>> {
    let mut files = vec![];

    // if let Some(input) = input {
    for path in input {
        if path.is_file() {
            files.push(path);
        }
    }

    // Sort files alphabetically by path
    files.sort();

    // Collect the content of all files
    let mut concatenated_content = String::new();
    for path in &files {
        let content = fs::read_to_string(path)?;
        let replaced_content = replace_env_in_content(&content)?;
        concatenated_content.push_str(&replaced_content);
        concatenated_content.push('\n');
    }

    // Handle output based on whether it's a file or a directory
    if let Some(output_path) = output {
        if output_path.is_file() {
            let mut file = fs::File::create(output_path)?;
            file.write_all(concatenated_content.as_bytes())?;
        } else {
            fs::create_dir_all(&output_path)?;  // clone the output_path before move
            for path in &files {
                let content = fs::read_to_string(path)?;
                let replaced_content = replace_env_in_content(&content)?;
                let file_name = path.file_name().unwrap();
                let output_file_path = output_path.join(file_name);
                let mut file = fs::File::create(output_file_path)?;
                file.write_all(replaced_content.as_bytes())?;
            }
        }
    } else {
        // Print concatenated content to the console
        println!("{}", concatenated_content);
    }

    Ok(())
}

