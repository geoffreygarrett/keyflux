#[cfg(test)]
mod tests {
    use keyflux::config::tags::{include_file, process_custom_tag, process_mapping, Enum};
    use log::info;
    use serde_yaml::{Mapping, Value};
    use std::fs;
    use std::path::{Path, PathBuf};
    use std::sync::Once;

    static INIT: Once = Once::new();

    fn init() {
        INIT.call_once(|| {
            env_logger::init();
        });
    }

    fn read_file_content(filename: &str) -> String {
        let path = Path::new("tests/data").join(filename);
        fs::read_to_string(&path).expect(&format!("Failed to read file: {:?}", path))
    }

    #[test]
    fn test_include_file() {
        init();
        let file_path = Path::new("tests/data/test.yaml");
        let current_dir = std::env::current_dir().unwrap();
        let current_path = PathBuf::from(current_dir.to_str().unwrap());

        assert!(file_path.exists(), "File does not exist: {:?}", file_path);

        info!("Testing include_file with path: {:?}", file_path);
        let result = include_file(file_path.to_str().unwrap(), &current_path, 0);
        assert!(result.is_ok(), "Result was not OK: {:?}", result);
        assert_eq!(
            result.unwrap(),
            serde_yaml::from_str::<Value>(&read_file_content("test.yaml")).unwrap()
        );
    }

    #[test]
    fn test_include_file_recursion_depth_exceeded() {
        init();
        let current_dir = std::env::current_dir().unwrap();
        let current_path = PathBuf::from(current_dir.to_str().unwrap());

        info!("Testing include_file recursion depth exceeded");
        let result = include_file("nonexistent.yaml", &current_path, 11);
        assert!(
            result.is_err(),
            "Result was OK when it should have been an error"
        );
        assert_eq!(result.unwrap_err(), "Recursion depth exceeded".to_string());
    }

    #[test]
    fn test_process_custom_tag() {
        init();
        let file_path = Path::new("tests/data/test.yaml");
        let current_dir = std::env::current_dir().unwrap();
        let current_path = PathBuf::from(current_dir.to_str().unwrap());

        assert!(file_path.exists(), "File does not exist: {:?}", file_path);

        info!("Testing process_custom_tag with path: {:?}", file_path);
        let custom_tag = Enum::Newtype(file_path.to_str().unwrap().to_string());
        let result = process_custom_tag(custom_tag, &current_path, 0);
        assert!(result.is_ok(), "Result was not OK: {:?}", result);
        assert_eq!(
            result.unwrap(),
            serde_yaml::from_str::<Value>(&read_file_content("test.yaml")).unwrap()
        );
    }

    #[test]
    fn test_include_file_and_process_mapping_integration() {
        init();
        let file_path = Path::new("tests/data/test1.yaml");
        let subfile1_path = Path::new("tests/data/subfile1.yaml");
        let subfile2_path = Path::new("tests/data/subfile2.yaml");
        let subfile3_path = Path::new("tests/data/subfile3.yaml");
        let current_dir = std::env::current_dir().unwrap();
        let current_path = PathBuf::from(current_dir.to_str().unwrap());

        assert!(file_path.exists(), "File does not exist: {:?}", file_path);
        assert!(
            subfile1_path.exists(),
            "File does not exist: {:?}",
            subfile1_path
        );
        assert!(
            subfile2_path.exists(),
            "File does not exist: {:?}",
            subfile2_path
        );
        assert!(
            subfile3_path.exists(),
            "File does not exist: {:?}",
            subfile3_path
        );

        info!(
            "Testing include_file_and_process_mapping_integration with path: {:?}",
            file_path
        );
        let result = include_file(file_path.to_str().unwrap(), &current_path, 0);
        assert!(result.is_ok(), "Result was not OK: {:?}", result);

        let expected_yaml = r#"
key1: value1
list:
  - item1
  - item2
  - key3: value3
nested:
  key2: value2
  another_list:
    - nested_item1
    - nested_item2
"#;
        let expected_value: Value = serde_yaml::from_str(expected_yaml).unwrap();
        assert_eq!(result.unwrap(), expected_value);
    }

    #[test]
    fn test_include_nonexistent_file() {
        init();
        let current_dir = std::env::current_dir().unwrap();
        let current_path = PathBuf::from(current_dir.to_str().unwrap());

        info!("Testing include_nonexistent_file");
        let result = include_file("nonexistent.yaml", &current_path, 0);
        assert!(
            result.is_err(),
            "Result was OK when it should have been an error"
        );
    }

    #[test]
    fn test_process_mapping_with_no_includes() {
        init();
        let mut map = Mapping::new();
        map.insert(
            Value::String("key1".to_string()),
            Value::String("value1".to_string()),
        );
        map.insert(
            Value::String("key2".to_string()),
            Value::String("value2".to_string()),
        );
        let current_dir = std::env::current_dir().unwrap();
        let current_path = PathBuf::from(current_dir.to_str().unwrap());

        info!("Testing process_mapping_with_no_includes");
        let result = process_mapping(map.clone(), &current_path, 0);
        assert!(result.is_ok(), "Result was not OK: {:?}", result);
        assert_eq!(result.unwrap(), Value::Mapping(map));
    }

    #[test]
    fn test_process_mapping_with_multiple_includes() {
        init();
        let file_path = Path::new("tests/data/test1.yaml");
        let subfile1_path = Path::new("tests/data/subfile1.yaml");
        let subfile2_path = Path::new("tests/data/subfile2.yaml");
        let current_dir = std::env::current_dir().unwrap();
        let current_path = PathBuf::from(current_dir.to_str().unwrap());

        assert!(file_path.exists(), "File does not exist: {:?}", file_path);
        assert!(
            subfile1_path.exists(),
            "File does not exist: {:?}",
            subfile1_path
        );
        assert!(
            subfile2_path.exists(),
            "File does not exist: {:?}",
            subfile2_path
        );

        info!(
            "Testing process_mapping_with_multiple_includes with path: {:?}",
            file_path
        );
        let result = include_file(file_path.to_str().unwrap(), &current_path, 0);
        assert!(result.is_ok(), "Result was not OK: {:?}", result);

        let expected_yaml = r#"
key: value
include:
  subkey1: subvalue1
include2:
  subkey2: subvalue2
"#;
        let expected_value: Value = serde_yaml::from_str(expected_yaml).unwrap();
        assert_eq!(result.unwrap(), expected_value);
    }
}
