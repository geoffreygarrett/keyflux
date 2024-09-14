/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct MaxFilePathLengthParameters {
    /// The maximum amount of characters allowed in file paths
    #[serde(rename = "max_file_path_length")]
    pub max_file_path_length: i32,
}

impl MaxFilePathLengthParameters {
    pub fn new(max_file_path_length: i32) -> MaxFilePathLengthParameters {
        MaxFilePathLengthParameters {
            max_file_path_length,
        }
    }
}

