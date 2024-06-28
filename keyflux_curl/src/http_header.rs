use std::collections::HashMap;

#[derive(Debug, Clone, Default)]
pub struct HttpHeader {
    pub headers: HashMap<String, String>,
}

impl HttpHeader {
    pub fn new() -> Self {
        HttpHeader {
            headers: HashMap::new(),
        }
    }

    pub fn add(&mut self, key: &str, value: &str) {
        self.headers.insert(key.to_string(), value.to_string());
    }

    pub fn remove(&mut self, key: &str) {
        self.headers.remove(key);
    }

    pub fn get(&self, key: &str) -> Option<&String> {
        self.headers.get(key)
    }

    pub fn clear(&mut self) {
        self.headers.clear();
    }

    pub fn contains_key(&self, key: &str) -> bool {
        self.headers.contains_key(key)
    }
}
