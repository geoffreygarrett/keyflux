/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// CodespaceExportDetails : An export of a codespace. Also, latest export details for a codespace can be fetched with id = latest



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct CodespaceExportDetails {
    /// State of the latest export
    #[serde(rename = "state", skip_serializing_if = "Option::is_none")]
    pub state: Option<String>,
    /// Completion time of the last export operation
    #[serde(rename = "completed_at", skip_serializing_if = "Option::is_none")]
    pub completed_at: Option<String>,
    /// Name of the exported branch
    #[serde(rename = "branch", skip_serializing_if = "Option::is_none")]
    pub branch: Option<String>,
    /// Git commit SHA of the exported branch
    #[serde(rename = "sha", skip_serializing_if = "Option::is_none")]
    pub sha: Option<String>,
    /// Id for the export details
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<String>,
    /// Url for fetching export details
    #[serde(rename = "export_url", skip_serializing_if = "Option::is_none")]
    pub export_url: Option<String>,
    /// Web url for the exported branch
    #[serde(rename = "html_url", skip_serializing_if = "Option::is_none")]
    pub html_url: Option<String>,
}

impl CodespaceExportDetails {
    /// An export of a codespace. Also, latest export details for a codespace can be fetched with id = latest
    pub fn new() -> CodespaceExportDetails {
        CodespaceExportDetails {
            state: None,
            completed_at: None,
            branch: None,
            sha: None,
            id: None,
            export_url: None,
            html_url: None,
        }
    }
}


