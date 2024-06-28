use keyflux::key::AttributeValue;

#[cfg(test)]
mod tests {
    use keyflux::key::{AttributeValue, Attributes, Key};

    #[test]
    fn test_attributes_creation() {
        let attributes = Attributes::new();
        assert!(attributes.is_empty());
    }

    #[test]
    fn test_attributes_insert_and_get_single() {
        let mut attributes = Attributes::new();
        attributes.insert("key1", AttributeValue::Single("value1".to_string()));
        assert_eq!(
            attributes.get("key1"),
            Some(&AttributeValue::Single("value1".to_string()))
        );
        assert_eq!(attributes.get("key2"), None);
    }

    #[test]
    fn test_attributes_insert_and_get_multiple() {
        let mut attributes = Attributes::new();
        attributes.insert(
            "key1",
            AttributeValue::Multiple(vec!["value1".to_string(), "value2".to_string()]),
        );
        assert_eq!(
            attributes.get("key1"),
            Some(&AttributeValue::Multiple(vec![
                "value1".to_string(),
                "value2".to_string()
            ]))
        );
    }

    #[test]
    fn test_attributes_remove_single() {
        let mut attributes = Attributes::new();
        attributes.insert("key1", AttributeValue::Single("value1".to_string()));
        assert_eq!(
            attributes.remove("key1"),
            Some(AttributeValue::Single("value1".to_string()))
        );
        assert!(attributes.get("key1").is_none());
    }

    #[test]
    fn test_attributes_remove_multiple() {
        let mut attributes = Attributes::new();
        attributes.insert(
            "key1",
            AttributeValue::Multiple(vec!["value1".to_string(), "value2".to_string()]),
        );
        assert_eq!(
            attributes.remove("key1"),
            Some(AttributeValue::Multiple(vec![
                "value1".to_string(),
                "value2".to_string()
            ]))
        );
        assert!(attributes.get("key1").is_none());
    }

    #[test]
    fn test_attributes_contains_key() {
        let mut attributes = Attributes::new();
        attributes.insert("key1", AttributeValue::Single("value1".to_string()));
        assert!(attributes.contains_key("key1"));
        assert!(!attributes.contains_key("key2"));
    }

    #[test]
    fn test_attributes_len_and_clear() {
        let mut attributes = Attributes::new();
        attributes.insert("key1", AttributeValue::Single("value1".to_string()));
        assert_eq!(attributes.len(), 1);
        attributes.clear();
        assert!(attributes.is_empty());
    }

    #[test]
    fn test_attributes_merge() {
        let mut attributes1 = Attributes::new();
        attributes1.insert("key1", AttributeValue::Single("value1".to_string()));

        let mut attributes2 = Attributes::new();
        attributes2.insert("key2", AttributeValue::Single("value2".to_string()));

        attributes1.merge(attributes2);
        assert_eq!(
            attributes1.get("key2"),
            Some(&AttributeValue::Single("value2".to_string()))
        );
    }

    #[test]
    fn test_attributes_iter() {
        let mut attributes = Attributes::new();
        attributes.insert("key1", AttributeValue::Single("value1".to_string()));
        for (key, value) in attributes.iter() {
            assert_eq!(key, "key1");
            assert_eq!(value, &AttributeValue::Single("value1".to_string()));
        }
    }

    #[test]
    fn test_attributes_serialize_deserialize() {
        let mut attributes = Attributes::new();
        attributes.insert("key1", AttributeValue::Single("value1".to_string()));
        attributes.insert(
            "key2",
            AttributeValue::Multiple(vec!["value2".to_string(), "value3".to_string()]),
        );
        let serialized = serde_json::to_string(&attributes).unwrap();
        let deserialized: Attributes = serde_json::from_str(&serialized).unwrap();
        assert_eq!(attributes, deserialized);
    }

    #[test]
    fn test_key_creation() {
        let attributes = Attributes::new();
        let key = Key::new("name", "value", attributes);
        assert_eq!(key.name, "name");
        assert_eq!(key.value, "value");
    }

    #[test]
    fn test_key_as_any() {
        let attributes = Attributes::new();
        let key = Key::new("name", "value", attributes);
        let any_key = key.as_any();
        assert!(any_key.is::<Key>());
    }

    #[test]
    fn test_key_with_attributes() {
        let mut attributes = Attributes::new();
        attributes.insert("attr1", AttributeValue::Single("value1".to_string()));

        let key = Key::new("name", "value", attributes.clone());
        assert_eq!(key.attributes, attributes);
        assert_eq!(
            key.attributes.get("attr1"),
            Some(&AttributeValue::Single("value1".to_string()))
        );
    }

    #[test]
    fn test_key_serialize_deserialize() {
        let mut attributes = Attributes::new();
        attributes.insert("attr1", AttributeValue::Single("value1".to_string()));
        let key = Key::new("name", "value", attributes);

        let serialized = serde_json::to_string(&key).unwrap();
        let deserialized: Key = serde_json::from_str(&serialized).unwrap();
        assert_eq!(key, deserialized);
    }
}
