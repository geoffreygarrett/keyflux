use std::collections::HashMap;

use serde::{Deserialize, Serialize};

use keyflux_common::prelude::*;

// Trait to handle aggregation of configuration settings
trait Configurable {
    fn aggregate(&self) -> HashMap<String, String>;
}

#[derive(Serialize, Deserialize, Debug)]
pub struct Config {
    version: String,
    config: GlobalConfig,
    groups: Vec<Group>,
    environments: HashMap<String, Environment>,
    targets: Vec<Target>,
    documentation: Documentation,
}

impl Config {
    pub fn builder() -> ConfigBuilder {
        ConfigBuilder::new()
    }
}

#[derive(Serialize, Deserialize, Debug, Default)]
struct GlobalConfig {
    #[serde(default = "default_groups_include")]
    groups_include_all_when_keys_unspecified: bool,
}

fn default_groups_include() -> bool {
    false
}

#[derive(Serialize, Deserialize, Debug)]
struct Group {
    name: String,
    description: String,
    file: String,
    keys: Option<Vec<Key>>,
    config: Option<GroupConfig>,
}

impl Configurable for Group {
    fn aggregate(&self) -> HashMap<String, String> {
        let mut map = HashMap::new();
        if let Some(ref keys) = self.keys {
            for key in keys {
                match key {
                    Key::Simple(key) => { map.insert(key.clone(), String::new()); }
                    Key::Remapped { name, key } => { map.insert(name.clone(), key.clone()); }
                    Key::FixedValue { name, value } => { map.insert(name.clone(), value.clone()); }
                }
            }
        }
        map
    }
}

#[derive(Serialize, Deserialize, Debug)]
enum KeySetting {
    All,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(untagged)]
enum Key {
    Simple(String),
    Remapped { name: String, key: String },
    FixedValue { name: String, value: String },
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(untagged)]
enum KeysOrSetting {
    Keys(Vec<Key>),
    Setting(KeySetting),
}

#[derive(Serialize, Deserialize, Debug)]
enum OneOrMany<T> {
    One(T),
    Many(Vec<T>),
}

#[derive(Serialize, Deserialize, Debug)]
struct Environment {
    description: Option<String>,
    files: Option<Vec<String>>,
    keys: Option<KeysOrSetting>,
    target: String,
    config: Option<EnvironmentConfig>,
}

impl Configurable for Environment {
    fn aggregate(&self) -> HashMap<String, String> {
        match &self.keys {
            Some(KeysOrSetting::Keys(keys)) => {
                let mut map = HashMap::new();
                for key in keys {
                    match key {
                        Key::Simple(key) => { map.insert(key.clone(), String::new()); }
                        Key::Remapped { name, key } => { map.insert(name.clone(), key.clone()); }
                        Key::FixedValue { name, value } => { map.insert(name.clone(), value.clone()); }
                    }
                }
                map
            }
            Some(KeysOrSetting::Setting(KeySetting::All)) => {
                let mut map = HashMap::new();
                map.insert("all".to_string(), String::new());
                map
            }
            None => HashMap::new(),
        }
    }
}

#[derive(Serialize, Deserialize, Debug)]
struct Target {
    name: String,
    #[serde(rename = "type")]
    target_type: Option<String>,
    description: String,
    // config: Box<dyn Flux>,
}

#[derive(Serialize, Deserialize, Debug)]
struct GroupConfig {
    target: Vec<TargetConfig>,
}

#[derive(Serialize, Deserialize, Debug)]
struct TargetConfig {
    name: String,
    secure: Option<bool>,
}

#[derive(Serialize, Deserialize, Debug)]
struct EnvironmentConfig {
    target: Vec<TargetConfig>,
}

#[derive(Serialize, Deserialize, Debug)]
struct Documentation {
    url: String,
    last_updated: String,
}


#[derive(Debug, Default)]
pub struct ConfigBuilder {
    version: Option<String>,
    config: Option<GlobalConfig>,
    groups: Vec<Group>,
    environments: HashMap<String, Environment>,
    targets: Vec<Target>,
    documentation: Option<Documentation>,
}

impl ConfigBuilder {
    fn new() -> Self {
        Self::default()
    }

    fn version(mut self, version: String) -> Self {
        self.version = Some(version);
        self
    }

    fn global_config(mut self, include_all: bool) -> Self {
        self.config = Some(GlobalConfig {
            groups_include_all_when_keys_unspecified: include_all,
        });
        self
    }

    fn add_group(mut self, group: Group) -> Self {
        self.groups.push(group);
        self
    }

    fn add_environment(mut self, name: String, environment: Environment) -> Self {
        self.environments.insert(name, environment);
        self
    }

    fn add_target(mut self, target: Target) -> Self {
        self.targets.push(target);
        self
    }

    fn documentation(mut self, documentation: Documentation) -> Self {
        self.documentation = Some(documentation);
        self
    }

    fn build(self) -> Config {
        Config {
            version: self.version.expect("Version must be set"),
            config: self.config.unwrap_or_default(),
            groups: self.groups,
            environments: self.environments,
            targets: self.targets,
            documentation: self.documentation.expect("Documentation must be set"),
        }
    }
}


#[cfg(test)]
mod tests {
    use serde_json;
    use serde_yaml;

    use crate::config::models::Config;

    use super::*;

    // #[test]
    // fn test_deserialize_config() {
    //     let json_data = r#"
    //     {
    //         "version": "1.0.0",
    //         "config": {
    //             "groups_include_all_when_keys_unspecified": false
    //         }
    //     }
    //     "#;
    //
    //     let deserialized: Result<Config> = serde_json::from_str(json_data);
    //     assert!(deserialized.is_ok());
    //     let config = deserialized.unwrap();
    //     assert_eq!(config.version, "1.0.0");
    //     assert_eq!(config.config.groups_include_all_when_keys_unspecified, false);
    // }

    #[test]
    fn test_deserialize_test1_yaml() {
        let cwd = std::env::current_dir().unwrap();
        let file = std::fs::File::open("./tests/config/test1.yaml").unwrap();
        let config: Config = serde_yaml::from_reader(file).unwrap();
        println!("{:#?}", config);
        assert_eq!(config.version, "1.0.0");
        assert_eq!(config.config.groups_include_all_when_keys_unspecified, false);
    }
}
