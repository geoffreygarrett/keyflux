use std::error::Error;

use serde_json::Value;

use crate::config::utils::replace_env_vars;
use crate::error::FluxError;

pub fn replace_vars_in_json(value: &mut Value) {
    match value {
        Value::String(s) => *s = replace_env_vars(s),
        Value::Array(vec) => {
            for v in vec {
                replace_vars_in_json(v);
            }
        }
        Value::Object(map) => {
            for v in map.values_mut() {
                replace_vars_in_json(v);
            }
        }
        _ => {} // Do nothing for Null, Bool, or Number
    }
}

pub fn merge(a: &mut Value, b: Value) {
    if let Value::Object(a) = a {
        if let Value::Object(b) = b {
            for (k, v) in b {
                if v.is_null() {
                    a.remove(&k);
                } else {
                    merge(a.entry(k).or_insert(Value::Null), v);
                }
            }

            return;
        }
    }

    *a = b;
}

/// Merges inputs from two sources, modifies the JSON, and parses it into a specified generic struct.
/// Merges inputs from two sources and applies variable replacements within the merged JSON.
fn merge_and_return_json(
    input1: Option<Value>,
    input2: Option<Value>,
) -> Result<Value, Box<dyn Error>> {
    let mut merged = match (input1, input2) {
        (Some(a), Some(b)) => {
            let mut merged = a.clone();
            merge(&mut merged, b.clone()); // Ensure the `merge` function is correctly defined to handle merging two JSON objects.
            merged
        }
        (Some(a), None) => a.clone(),
        (None, Some(b)) => b.clone(),
        (None, None) => {
            return Err(Box::new(FluxError::BadRequest(
                "Input must be provided for merging".into(),
            )));
        }
    };

    // Replace variables in the JSON structure
    replace_vars_in_json(&mut merged);

    Ok(merged)
}
