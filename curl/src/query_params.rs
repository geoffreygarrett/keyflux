use std::collections::HashMap;
use serde::{Deserialize, Serialize};

#[derive(Debug, Clone, Default, Serialize, Deserialize)]
pub struct QueryParams {
    pub params: HashMap<String, Vec<String>>,
}

impl QueryParams {
    pub fn new() -> Self {
        QueryParams {
            params: HashMap::new(),
        }
    }

    pub fn add(&mut self, key: &str, value: &str) -> &mut QueryParams {
        self.params
            .entry(key.to_owned())
            .or_insert_with(Vec::new)
            .push(value.to_owned());
        self
    }

    pub fn remove(&mut self, key: &str) {
        self.params.remove(key);
    }

    pub fn get(&self, key: &str) -> Option<&Vec<String>> {
        self.params.get(key)
    }

    pub fn encode(&self) -> String {
        self.params
            .iter()
            .flat_map(|(key, values)| {
                values.iter().map(move |value| {
                    format!(
                        "{}={}",
                        urlencoding::encode(key),
                        urlencoding::encode(value)
                    )
                })
            })
            .collect::<Vec<String>>()
            .join("&")
    }

    pub fn encoded(&self) -> Self {
        let mut encoded_params = QueryParams::new();
        for (key, values) in &self.params {
            for value in values {
                encoded_params.add(
                    &urlencoding::encode(key),
                    &urlencoding::encode(value),
                );
            }
        }
        encoded_params
    }

    pub fn clear(&mut self) {
        self.params.clear();
    }
}

impl From<Vec<(&str, &str)>> for QueryParams {
    fn from(items: Vec<(&str, &str)>) -> Self {
        let mut params = QueryParams::new();
        for (key, value) in items {
            params.add(key, value);
        }
        params
    }
}

// Implement IntoIterator for QueryParams to support iteration over key-value pairs
impl IntoIterator for QueryParams {
    type Item = (String, String);
    type IntoIter = Box<dyn Iterator<Item = (String, String)>>;

    fn into_iter(self) -> Self::IntoIter {
        Box::new(
            self.params
                .into_iter()
                .flat_map(|(key, values)| {
                    values.into_iter().map(move |value| (key.clone(), value))
                })
        )
    }
}

impl<'a> IntoIterator for &'a QueryParams {
    type Item = (&'a String, &'a String);
    type IntoIter = std::vec::IntoIter<(&'a String, &'a String)>;

    fn into_iter(self) -> Self::IntoIter {
        // Flatten the list of values for each key into individual tuples
        let iter = self.params.iter()
            .flat_map(|(k, vs)| vs.iter().map(move |v| (k, v))) // Create an iterator over (&'a String, &'a String)
            .collect::<Vec<_>>(); // Collect into Vec to convert into IntoIter later

        iter.into_iter()
    }
}

