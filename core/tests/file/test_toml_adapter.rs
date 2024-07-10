use keyflux::file::format_manager::FormatAdapter;
use keyflux::file::toml::TomlAdapter;

use crate::file::common::get_sample_keys;

#[test]
fn test_load_keys_toml() {
    let contents = r#"
    [KEY1]
    name = "KEY1"
    value = "VALUE1"
    description = "Description for KEY1"
    enabled = true
    last_updated = "2024-06-16T15:16:47.567Z"
    created_at = "2024-06-16T15:16:47.567Z"
    tags = ["tag1", "tag2"]

    [KEY2]
    name = "KEY2"
    value = "VALUE2"
    enabled = false
    metadata = { meta = "data" }
    "#;
    let adapter = TomlAdapter;
    let keys = adapter.load_keys(contents).unwrap();

    assert_eq!(keys.len(), 2);
    assert_eq!(keys["KEY1"].value, "VALUE1");
    assert_eq!(keys["KEY2"].value, "VALUE2");
}

#[test]
fn test_save_keys_toml() {
    let keys = get_sample_keys();
    let adapter = TomlAdapter;
    let result = adapter.save_keys(&keys).unwrap();

    assert!(result.contains("[KEY1]"));
    assert!(result.contains("name = \"KEY1\""));
    assert!(result.contains("value = \"VALUE1\""));
    assert!(result.contains("[KEY2]"));
    assert!(result.contains("name = \"KEY2\""));
    assert!(result.contains("value = \"VALUE2\""));
}
