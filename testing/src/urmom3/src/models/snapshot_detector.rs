/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// SnapshotDetector : A description of the detector used.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct SnapshotDetector {
    /// The name of the detector used.
    #[serde(rename = "name")]
    pub name: String,
    /// The version of the detector used.
    #[serde(rename = "version")]
    pub version: String,
    /// The url of the detector used.
    #[serde(rename = "url")]
    pub url: String,
}

impl SnapshotDetector {
    /// A description of the detector used.
    pub fn new(name: String, version: String, url: String) -> SnapshotDetector {
        SnapshotDetector {
            name,
            version,
            url,
        }
    }
}

