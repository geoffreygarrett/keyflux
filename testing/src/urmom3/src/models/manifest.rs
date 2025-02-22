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
pub struct Manifest {
    /// The name of the manifest.
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "file", skip_serializing_if = "Option::is_none")]
    pub file: Option<Box<crate::models::ManifestFile>>,
    /// User-defined metadata to store domain-specific information limited to 8 keys with scalar values.
    #[serde(rename = "metadata", skip_serializing_if = "Option::is_none")]
    pub metadata: Option<::std::collections::HashMap<String, crate::models::Metadata1>>,
    /// A collection of resolved package dependencies.
    #[serde(rename = "resolved", skip_serializing_if = "Option::is_none")]
    pub resolved: Option<::std::collections::HashMap<String, crate::models::Dependency>>,
}

impl Manifest {
    pub fn new(name: String) -> Manifest {
        Manifest {
            name,
            file: None,
            metadata: None,
            resolved: None,
        }
    }
}


