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
pub struct MaxFileSizeParameters {
    /// The maximum file size allowed in megabytes. This limit does not apply to Git Large File Storage (Git LFS).
    #[serde(rename = "max_file_size")]
    pub max_file_size: i32,
}

impl MaxFileSizeParameters {
    pub fn new(max_file_size: i32) -> MaxFileSizeParameters {
        MaxFileSizeParameters {
            max_file_size,
        }
    }
}

