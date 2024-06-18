use std::any::Any;
use std::fmt;
use std::collections::HashMap;
use serde::{Serializer, Deserializer, Serialize, Deserialize};
use serde::ser::SerializeMap;
use serde::de::{MapAccess, Visitor};
use std::marker::PhantomData;

/// Enum representing either a single string or a vector of strings.
#[derive(Clone, Debug, Serialize, Deserialize, PartialEq, Eq)]
pub enum AttributeValue {
    Single(String),
    Multiple(Vec<String>),
}

/// A collection of key-value pairs, often used for metadata or additional attributes.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct Attributes {
    inner: HashMap<String, AttributeValue>,
}

impl Attributes {
    /// Creates a new, empty `Attributes` instance.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::Attributes;
    /// let attributes = Attributes::new();
    /// assert!(attributes.is_empty());
    /// ```
    pub fn new() -> Self {
        Self {
            inner: HashMap::new(),
        }
    }

    /// Inserts a key-value pair into the attributes.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes = Attributes::new();
    /// attributes.insert("key1", AttributeValue::Single("value1".to_string()));
    /// assert_eq!(attributes.get("key1"), Some(&AttributeValue::Single("value1".to_string())));
    /// ```
    pub fn insert(&mut self, key: impl Into<String>, value: impl Into<AttributeValue>) -> Option<AttributeValue> {
        self.inner.insert(key.into(), value.into())
    }

    /// Gets a reference to the value corresponding to the key.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes = Attributes::new();
    /// attributes.insert("key1", AttributeValue::Single("value1".to_string()));
    /// assert_eq!(attributes.get("key1"), Some(&AttributeValue::Single("value1".to_string())));
    /// assert_eq!(attributes.get("key2"), None);
    /// ```
    pub fn get(&self, key: &str) -> Option<&AttributeValue> {
        self.inner.get(key)
    }

    /// Removes a key-value pair from the attributes.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes = Attributes::new();
    /// attributes.insert("key1", AttributeValue::Single("value1".to_string()));
    /// assert_eq!(attributes.remove("key1"), Some(AttributeValue::Single("value1".to_string())));
    /// assert!(attributes.get("key1").is_none());
    /// ```
    pub fn remove(&mut self, key: &str) -> Option<AttributeValue> {
        self.inner.remove(key)
    }

    /// Checks if the attributes contain a key.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes = Attributes::new();
    /// attributes.insert("key1", AttributeValue::Single("value1".to_string()));
    /// assert!(attributes.contains_key("key1"));
    /// assert!(!attributes.contains_key("key2"));
    /// ```
    pub fn contains_key(&self, key: &str) -> bool {
        self.inner.contains_key(key)
    }

    /// Returns the number of key-value pairs in the attributes.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes = Attributes::new();
    /// attributes.insert("key1", AttributeValue::Single("value1".to_string()));
    /// assert_eq!(attributes.len(), 1);
    /// ```
    pub fn len(&self) -> usize {
        self.inner.len()
    }

    /// Returns true if the attributes contain no key-value pairs.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::Attributes;
    /// let attributes = Attributes::new();
    /// assert!(attributes.is_empty());
    /// ```
    pub fn is_empty(&self) -> bool {
        self.inner.is_empty()
    }

    /// Clears all key-value pairs from the attributes.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes = Attributes::new();
    /// attributes.insert("key1", AttributeValue::Single("value1".to_string()));
    /// attributes.clear();
    /// assert!(attributes.is_empty());
    /// ```
    pub fn clear(&mut self) {
        self.inner.clear()
    }

    /// Returns an iterator over the key-value pairs.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes = Attributes::new();
    /// attributes.insert("key1", AttributeValue::Single("value1".to_string()));
    /// for (key, value) in attributes.iter() {
    ///     println!("{}: {:?}", key, value);
    /// }
    /// ```
    pub fn iter(&self) -> impl Iterator<Item=(&String, &AttributeValue)> {
        self.inner.iter()
    }

    /// Merges another `Attributes` into this one, overwriting existing keys.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes1 = Attributes::new();
    /// attributes1.insert("key1", AttributeValue::Single("value1".to_string()));
    ///
    /// let mut attributes2 = Attributes::new();
    /// attributes2.insert("key2", AttributeValue::Single("value2".to_string()));
    ///
    /// attributes1.merge(attributes2);
    /// assert_eq!(attributes1.get("key2"), Some(&AttributeValue::Single("value2".to_string())));
    /// ```
    pub fn merge(&mut self, other: Attributes) {
        self.inner.extend(other.inner);
    }
}

impl Serialize for Attributes {
    /// Serializes the `Attributes` into the given serializer.
    ///
    /// # Arguments
    ///
    /// * `serializer` - The serializer to use for serialization.
    ///
    /// # Returns
    ///
    /// A result containing either the serialized value or an error.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes = Attributes::new();
    /// attributes.insert("key1", AttributeValue::Single("value1".to_string()));
    /// let serialized = serde_json::to_string(&attributes).unwrap();
    /// ```
    fn serialize<S>(&self, serializer: S) -> Result<S::Ok, S::Error>
    where
        S: Serializer,
    {
        let mut map = serializer.serialize_map(Some(self.inner.len()))?;
        for (k, v) in &self.inner {
            map.serialize_entry(k, v)?;
        }
        map.end()
    }
}

impl<'de> Deserialize<'de> for Attributes {
    /// Deserializes the `Attributes` from the given deserializer.
    ///
    /// # Arguments
    ///
    /// * `deserializer` - The deserializer to use for deserialization.
    ///
    /// # Returns
    ///
    /// A result containing either the deserialized `Attributes` or an error.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::Attributes;
    /// let json = r#"{"key1":"value1"}"#;
    /// let attributes: Attributes = serde_json::from_str(json).unwrap();
    /// ```
    fn deserialize<D>(deserializer: D) -> Result<Self, D::Error>
    where
        D: Deserializer<'de>,
    {
        struct AttributesVisitor {
            marker: PhantomData<fn() -> Attributes>,
        }

        impl<'de> Visitor<'de> for AttributesVisitor {
            type Value = Attributes;

            fn expecting(&self, formatter: &mut fmt::Formatter) -> fmt::Result {
                formatter.write_str("a map of strings to AttributeValue")
            }

            fn visit_map<M>(self, mut access: M) -> Result<Self::Value, M::Error>
            where
                M: MapAccess<'de>,
            {
                let mut map = HashMap::new();
                while let Some((key, value)) = access.next_entry()? {
                    map.insert(key, value);
                }
                Ok(Attributes { inner: map })
            }
        }

        deserializer.deserialize_map(AttributesVisitor { marker: PhantomData })
    }
}

impl fmt::Display for Attributes {
    /// Formats the `Attributes` for display.
    ///
    /// # Arguments
    ///
    /// * `f` - The formatter to use for formatting.
    ///
    /// # Returns
    ///
    /// A result containing either the formatted string or an error.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Attributes, AttributeValue};
    /// let mut attributes = Attributes::new();
    /// attributes.insert("key1", AttributeValue::Single("value1".to_string()));
    /// println!("{}", attributes);
    /// ```
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{{ ")?;
        for (key, value) in &self.inner {
            write!(f, "{}: {:?}, ", key, value)?;
        }
        write!(f, "}}")
    }
}

/// Represents a key-value pair with additional attributes.
#[derive(Clone, Debug, Serialize, Deserialize, PartialEq, Eq)]
pub struct Key {
    pub name: String,
    pub value: String,
    pub attributes: Attributes,
}

impl Key {
    /// Creates a new `Key` instance.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Key, Attributes};
    /// let attributes = Attributes::new();
    /// let key = Key::new("name", "value", attributes);
    /// assert_eq!(key.name, "name");
    /// assert_eq!(key.value, "value");
    /// ```
    pub fn new(name: impl Into<String>, value: impl Into<String>, attributes: Attributes) -> Self {
        Self {
            name: name.into(),
            value: value.into(),
            attributes,
        }
    }

    /// Converts the `Key` into a dynamic reference.
    ///
    /// # Examples
    ///
    /// ```
    /// use keyflux::key::{Key, Attributes};
    /// let attributes = Attributes::new();
    /// let key = Key::new("name", "value", attributes);
    /// let any_key = key.as_any();
    /// ```
    pub fn as_any(&self) -> &dyn Any {
        self
    }
}
