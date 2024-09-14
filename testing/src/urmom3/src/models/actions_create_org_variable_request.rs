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
pub struct ActionsCreateOrgVariableRequest {
    /// The name of the variable.
    #[serde(rename = "name")]
    pub name: String,
    /// The value of the variable.
    #[serde(rename = "value")]
    pub value: String,
    /// The type of repositories in the organization that can access the variable. `selected` means only the repositories specified by `selected_repository_ids` can access the variable.
    #[serde(rename = "visibility")]
    pub visibility: Visibility,
    /// An array of repository ids that can access the organization variable. You can only provide a list of repository ids when the `visibility` is set to `selected`.
    #[serde(rename = "selected_repository_ids", skip_serializing_if = "Option::is_none")]
    pub selected_repository_ids: Option<Vec<i32>>,
}

impl ActionsCreateOrgVariableRequest {
    pub fn new(name: String, value: String, visibility: Visibility) -> ActionsCreateOrgVariableRequest {
        ActionsCreateOrgVariableRequest {
            name,
            value,
            visibility,
            selected_repository_ids: None,
        }
    }
}

/// The type of repositories in the organization that can access the variable. `selected` means only the repositories specified by `selected_repository_ids` can access the variable.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Visibility {
    #[serde(rename = "all")]
    All,
    #[serde(rename = "private")]
    Private,
    #[serde(rename = "selected")]
    Selected,
}

impl Default for Visibility {
    fn default() -> Visibility {
        Self::All
    }
}
