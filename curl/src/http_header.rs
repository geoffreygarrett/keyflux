use std::collections::HashMap;
use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Serialize, Deserialize)]
struct HeaderValue {
    original_key: String,
    value: String,
}

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct HttpHeader {
    headers: HashMap<String, HeaderValue>,
}

impl HttpHeader {
    pub fn new() -> Self {
        HttpHeader {
            headers: HashMap::new(),
        }
    }

    pub fn add(&mut self, key: &str, value: &str) {
        let lowercase_key = key.to_lowercase();
        self.headers.insert(
            lowercase_key,
            HeaderValue {
                original_key: key.to_string(),
                value: value.to_string(),
            },
        );
    }

    pub fn remove(&mut self, key: &str) {
        let lowercase_key = key.to_lowercase();
        self.headers.remove(&lowercase_key);
    }

    pub fn get(&self, key: &str) -> Option<&String> {
        let lowercase_key = key.to_lowercase();
        self.headers.get(&lowercase_key).map(|header| &header.value)
    }

    pub fn clear(&mut self) {
        self.headers.clear();
    }

    pub fn contains_key(&self, key: &str) -> bool {
        let lowercase_key = key.to_lowercase();
        self.headers.contains_key(&lowercase_key)
    }
}


// Implement IntoIterator for HttpHeader to support iteration over key-value pairs
impl IntoIterator for HttpHeader {
    type Item = (String, String);
    type IntoIter = Box<dyn Iterator<Item = (String, String)>>;

    fn into_iter(self) -> Self::IntoIter {
        Box::new(
            self.headers
                .into_iter()
                .map(|(_, value)| (value.original_key, value.value)),
        )
    }
}

// Implement IntoIterator for &HttpHeader to support iteration over key-value pairs
impl<'a> IntoIterator for &'a HttpHeader {
    type Item = (&'a String, &'a String);
    type IntoIter = Box<dyn Iterator<Item = (&'a String, &'a String)> + 'a>;

    fn into_iter(self) -> Self::IntoIter {
        Box::new(
            self.headers
                .iter()
                .map(|(_, value)| (&value.original_key, &value.value)),
        )
    }
}
