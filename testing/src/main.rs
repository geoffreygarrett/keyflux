use serde::{Deserialize, Serialize};

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct ContentHint {
    #[serde(rename = "type")]
    hint_type: String,
    store_id: String,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct InternalContentHint {
    #[serde(rename = "type")]
    hint_type: String,
    encrypted_value: String,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
pub(crate) struct EnvironmentVariable {
    pub(crate) target: Option<Target>,
    #[serde(rename = "type")]
    pub(crate) var_type: String,
    pub(crate) sunset_secret_id: Option<String>,
    pub(crate) id: String,
    pub(crate) key: String,
    pub(crate) value: String,
    pub(crate) configuration_id: Option<String>,
    pub(crate) created_at: i64,
    pub(crate) updated_at: i64,
    pub(crate) created_by: Option<String>,
    pub(crate) updated_by: Option<String>,
    pub(crate) git_branch: Option<String>,
    pub(crate) edge_config_id: Option<String>,
    pub(crate) edge_config_token_id: Option<String>,
    pub(crate) content_hint: Option<ContentHint>,
    pub(crate) internal_content_hint: Option<InternalContentHint>,
    pub(crate) decrypted: Option<bool>,
    pub(crate) comment: Option<String>,
    pub(crate) custom_environment_ids: Option<Vec<String>>,
    pub(crate) vsm_value: Option<String>,
    pub(crate) system: Option<bool>,
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(untagged)]
enum Target {
    Single(String),
    Multiple(Vec<String>),
}

#[derive(Serialize, Deserialize, Debug)]
#[serde(rename_all = "camelCase")]
struct GetEnvironmentVariablesResponse {
    envs: Vec<EnvironmentVariable>,
}

fn main() {
    let json_data = r#"
    {
        "envs": [
            {
                "type": "plain",
                "value": "test_value",
                "target": ["preview"],
                "configurationId": null,
                "gitBranch": "develop",
                "comment": "Test environment variable",
                "id": "yhEYrbydsSXVBGtu",
                "key": "test_key",
                "createdAt": 1720518660843,
                "updatedAt": 1720519883150,
                "createdBy": "62Uks9guWcr3LpAR2xwtFP23",
                "updatedBy": "62Uks9guWcr3LpAR2xwtFP23",
                "decrypted": false,
                "lastEditedByDisplayName": "geoffreygarrett"
            },
            {
                "type": "plain",
                "value": "example_value",
                "target": ["preview"],
                "configurationId": null,
                "gitBranch": "develop",
                "comment": "This is an example environment variable",
                "id": "ayihG3K2kvsaq3pM",
                "key": "example_key",
                "createdAt": 1720518581325,
                "updatedAt": 1720518581325,
                "createdBy": "62Uks9guWcr3LpAR2xwtFP23",
                "updatedBy": null,
                "decrypted": false,
                "lastEditedByDisplayName": "geoffreygarrett"
            }
        ]
    }
    "#;

    let response: GetEnvironmentVariablesResponse = serde_json::from_str(json_data).unwrap();
    println!("{:#?}", response);
}
