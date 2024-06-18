use regex::Regex;
use std::collections::HashMap;

#[derive(Debug, Clone)]
pub enum ParseError {
    MalformedLine { line: usize, col: usize, description: String },
    InvalidKey { line: usize, col: usize, key: String },
    ContinuationError { line: usize, description: String },
    UnexpectedCharacter { line: usize, col: usize, description: String },
}

#[derive(Debug, Clone)]
pub(crate) enum LineContent {
    Comment(String),
    KeyValue(String, String, Option<String>),  // Key, Value, Optional Inline Comment
    BlankLine,  // Explicit handling of blank lines
}

pub(crate) struct EnvParser {
    pub(crate) entries: Vec<LineContent>,
    pub(crate) errors: Vec<ParseError>,
}

static KEY_REGEX: &str = r"^[a-zA-Z_][a-zA-Z0-9_]*$";

impl EnvParser {
    pub(crate) fn parse(content: &str) -> Self {
        let mut entries = Vec::new();
        let mut errors = Vec::new();
        let mut current_line_number = 1;

        for line in content.lines() {
            let trimmed_line = line.trim();
            if trimmed_line.is_empty() {
                entries.push(LineContent::BlankLine); // Record blank lines explicitly if needed
                current_line_number += 1;
                continue;
            }
            if trimmed_line.starts_with('#') {
                entries.push(LineContent::Comment(trimmed_line[1..].trim().to_string()));
            } else {
                match parse_line(trimmed_line, Some(current_line_number)) {
                    Ok(line_content) => entries.push(line_content),
                    Err(err) => errors.push(err),
                }
            }
            current_line_number += 1;
        }
        EnvParser { entries, errors }
    }
    // method to reverse the parsing process
    pub(crate) fn to_string(&self) -> String {
        self.entries.iter().map(format_line).collect()
    }
}

pub(crate) fn format_line(line_content: &LineContent) -> String {
    match line_content {
        LineContent::Comment(comment) => format!("# {}", comment),
        LineContent::KeyValue(key, value, comment) => {
            let mut line = format!("{}={}", key, value);
            if let Some(comment) = comment {
                line.push_str(&format!(" # {}", comment));
            }
            line.push('\n');
            line
        }
        LineContent::BlankLine => "\n".to_string(),
    }
}

pub(crate) fn parse_line(line: &str, line_number: Option<usize>) -> Result<LineContent, ParseError> {
    let parts: Vec<&str> = line.splitn(2, '=').collect();
    if parts.len() != 2 {
        return Err(ParseError::MalformedLine {
            line: line_number.unwrap_or(0),
            col: line.find('=').unwrap_or_else(|| line.len()) + 1,
            description: "Missing '=' character".into(),
        });
    }

    let key_regex = Regex::new(KEY_REGEX).unwrap();
    let (key, rest) = (parts[0].trim(), parts[1].trim());
    if !key_regex.is_match(key) {
        return Err(ParseError::InvalidKey {
            line: line_number.unwrap_or(0),
            col: key.len(),
            key: key.into(),
        });
    }

    let value = rest.splitn(2, '#').next().unwrap().trim().to_string();
    let inline_comment = rest.splitn(2, '#').nth(1).map(str::trim).map(String::from);
    Ok(LineContent::KeyValue(key.to_string(), value, inline_comment))
}
