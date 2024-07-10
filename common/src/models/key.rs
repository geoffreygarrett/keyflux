use std::collections::HashMap;
use std::fmt::Debug;
use serde::{Deserialize, Serialize};
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize, Default, Clone)]
pub struct KeyStruct {
    pub(crate) name: String,
    pub(crate) value: String,
    #[serde(flatten)]
    extra: Option<HashMap<String, Value>>,
}


#[typetag::serde(tag = "_type")]
pub trait Key: Send + Sync + Debug {
    fn name(&self) -> &str;
    fn value(&self) -> &str;
    fn updated_at(&self) -> Option<i64> { None }
    fn created_at(&self) -> Option<i64> { None }
    fn get(&self, k: &str) -> Option<Value> { None }

}

#[typetag::serde(name = "basic_key")]
impl Key for KeyStruct {
    fn name(&self) -> &str {
        &self.name
    }

    fn value(&self) -> &str {
        &self.value
    }

    fn updated_at(&self) -> Option<i64> { None }
    fn created_at(&self) -> Option<i64> { None }
    fn get(&self, k: &str) -> Option<Value> { None }
}

// pub type Key = dyn KeyTrait;

impl KeyStruct {
    pub fn new(name: String, value: String, extra: Option<HashMap<String, Value>>) -> Self {
        Self {
            name,
            value,
            extra,
        }
    }
    pub fn name(&self) -> &str {
        &self.name
    }

    pub fn value(&self) -> &str {
        &self.value
    }

    pub fn extra(&self) -> Option<HashMap<String, Value>> {
        self.extra.clone()
    }
}