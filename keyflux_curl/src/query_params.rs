use std::collections::HashMap;

#[derive(Debug, Clone, Default)]
pub struct QueryParams {
    pub params: HashMap<String, Vec<String>>,
}

impl QueryParams {
    pub fn new() -> Self {
        QueryParams {
            params: HashMap::new(),
        }
    }

    pub fn add(&mut self, key: &str, value: &str) {
        self.params.entry(key.to_owned()).or_insert_with(Vec::new).push(value.to_owned());
    }

    pub fn remove(&mut self, key: &str) {
        self.params.remove(key);
    }

    pub fn get(&self, key: &str) -> Option<&Vec<String>> {
        self.params.get(key)
    }

    pub fn encode(&self) -> String {
        self.params.iter().flat_map(|(key, values)| {
            values.iter().map(move |value| format!("{}={}", urlencoding::encode(key), urlencoding::encode(value)))
        }).collect::<Vec<String>>().join("&")
    }

    pub fn clear(&mut self) {
        self.params.clear();
    }
}

// iter
impl IntoIterator for QueryParams {
    type Item = (String, Vec<String>);
    type IntoIter = std::collections::hash_map::IntoIter<String, Vec<String>>;

    fn into_iter(self) -> Self::IntoIter {
        self.params.into_iter()
    }
}
