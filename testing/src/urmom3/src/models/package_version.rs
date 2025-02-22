/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// PackageVersion : A version of a software package



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct PackageVersion {
    /// Unique identifier of the package version.
    #[serde(rename = "id")]
    pub id: i32,
    /// The name of the package version.
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "url")]
    pub url: String,
    #[serde(rename = "package_html_url")]
    pub package_html_url: String,
    #[serde(rename = "html_url", skip_serializing_if = "Option::is_none")]
    pub html_url: Option<String>,
    #[serde(rename = "license", skip_serializing_if = "Option::is_none")]
    pub license: Option<String>,
    #[serde(rename = "description", skip_serializing_if = "Option::is_none")]
    pub description: Option<String>,
    #[serde(rename = "created_at")]
    pub created_at: String,
    #[serde(rename = "updated_at")]
    pub updated_at: String,
    #[serde(rename = "deleted_at", skip_serializing_if = "Option::is_none")]
    pub deleted_at: Option<String>,
    #[serde(rename = "metadata", skip_serializing_if = "Option::is_none")]
    pub metadata: Option<Box<crate::models::PackageVersionMetadata>>,
}

impl PackageVersion {
    /// A version of a software package
    pub fn new(id: i32, name: String, url: String, package_html_url: String, created_at: String, updated_at: String) -> PackageVersion {
        PackageVersion {
            id,
            name,
            url,
            package_html_url,
            html_url: None,
            license: None,
            description: None,
            created_at,
            updated_at,
            deleted_at: None,
            metadata: None,
        }
    }
}


