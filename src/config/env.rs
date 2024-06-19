use std::path::PathBuf;
use log::{error, info, trace};
use serde::{Deserialize, Serialize};
use crate::file::format_manager::FormatManager;
use crate::file::key_collection::KeyCollection;
use crate::key::{Key, KeyDetail};

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "lowercase")]
pub enum EnvConfig {
    Variable { name: String, value: String },
    File(PathBuf),
}


#[derive(Serialize, Deserialize, Debug)]
pub struct EnvConfigList(pub Vec<EnvConfig>);


impl IntoIterator for EnvConfigList {
    type Item = EnvConfig;
    type IntoIter = std::vec::IntoIter<EnvConfig>;

    fn into_iter(self) -> Self::IntoIter {
        self.0.into_iter()
    }
}

impl<'a> IntoIterator for &'a EnvConfigList {
    type Item = &'a EnvConfig;
    type IntoIter = std::slice::Iter<'a, EnvConfig>;

    fn into_iter(self) -> Self::IntoIter {
        self.0.iter()
    }
}

impl EnvConfigList {
    pub async fn to_key_collection(&self, config_path: &PathBuf) -> KeyCollection {
        let mut keys = KeyCollection::new();
        for env_config in self.0.iter() {
            match env_config {
                EnvConfig::Variable { name, value } => {
                    info!("{}", t!("info.setting_env_var", name = name));
                    keys.insert(Key::from_key_detail(KeyDetail {
                        name: name.clone(),
                        value: value.clone(),
                        description: None,
                        enabled: true,
                        input: None,
                        metadata: None,
                        last_updated: None,
                        created_at: None,
                        tags: None,
                    }));
                }
                EnvConfig::File(file) => {
                    let file_path = if file.is_absolute() {
                        file
                    } else {
                        &config_path.parent().unwrap().join(file)
                    };
                    trace!("{}: {}", "trace.loading_env_file", file_path.display());
                    trace!("{}", t!("trace.loading_env_file", file = file_path.display()));
                    let new_keys = FormatManager::read().await.load_keys(&file_path, None).unwrap_or_else(|err| {
                        error!("{}: {}", t!("error.loading_env_file"), err.to_string());
                        std::process::exit(1);
                    });
                    keys.merge(new_keys);
                }
            }
        }
        keys
    }
}

// async fn process_env_config(env_config: &EnvConfig, config_path: &PathBuf) {
//     trace!("{}", t!("trace.env_config", env_config = format!("{:?}", env_config)));
//     let manager = FormatManager::instance_read().await;
//     let mut keys = KeyCollection::new();
//     match env_config {
//         EnvConfig::Variable { name, value } => {
//             info!("{}", t!("info.setting_env_var", name = name));
//             keys.insert(Key::from_key_detail(KeyDetail {
//                 name: name.clone(),
//                 value: value.clone(),
//                 description: None,
//                 enabled: true,
//                 metadata: None,
//                 last_updated: None,
//                 created_at: None,
//                 tags: None,
//             }));
//         }
//         EnvConfig::File(file) => {
//             let file_path = if file.is_absolute() {
//                 file
//             } else {
//                 &config_path.parent().unwrap().join(file)
//             };
//             trace!("{}: {}", "trace.loading_env_file", file_path.display());
//             trace!("{}", t!("trace.loading_env_file", file = file_path.display()));
//             let new_keys = manager.load_keys(&file_path, None).unwrap_or_else(|err| {
//                 error!("{}: {}", t!("error.loading_env_file"), err.to_string());
//                 std::process::exit(1);
//             });
//             keys.merge(new_keys);
//         }
//     }
// }
