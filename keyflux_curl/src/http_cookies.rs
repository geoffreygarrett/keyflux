use std::collections::HashMap;

#[derive(Debug, Clone, Default)]
pub struct HttpCookies {
    cookies: HashMap<String, String>,
}

impl HttpCookies {
    pub fn new() -> Self {
        HttpCookies {
            cookies: HashMap::new(),
        }
    }

    pub fn add(&mut self, key: &str, value: &str) {
        self.cookies.insert(key.to_owned(), value.to_owned());
    }

    pub fn remove(&mut self, key: &str) {
        self.cookies.remove(key);
    }

    pub fn to_header(&self) -> String {
        self.cookies.iter().map(|(k, v)| format!("{}={}", k, v)).collect::<Vec<String>>().join("; ")
    }
}
