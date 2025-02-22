/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// ReleaseNotesContent : Generated name and body describing a release



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct ReleaseNotesContent {
    /// The generated name of the release
    #[serde(rename = "name")]
    pub name: String,
    /// The generated body describing the contents of the release supporting markdown formatting
    #[serde(rename = "body")]
    pub body: String,
}

impl ReleaseNotesContent {
    /// Generated name and body describing a release
    pub fn new(name: String, body: String) -> ReleaseNotesContent {
        ReleaseNotesContent {
            name,
            body,
        }
    }
}


