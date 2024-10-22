/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// AuthorAssociation : How the author is associated with the repository.

/// How the author is associated with the repository.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum AuthorAssociation {
    #[serde(rename = "COLLABORATOR")]
    Collaborator,
    #[serde(rename = "CONTRIBUTOR")]
    Contributor,
    #[serde(rename = "FIRST_TIMER")]
    FirstTimer,
    #[serde(rename = "FIRST_TIME_CONTRIBUTOR")]
    FirstTimeContributor,
    #[serde(rename = "MANNEQUIN")]
    Mannequin,
    #[serde(rename = "MEMBER")]
    Member,
    #[serde(rename = "NONE")]
    None,
    #[serde(rename = "OWNER")]
    Owner,

}

impl ToString for AuthorAssociation {
    fn to_string(&self) -> String {
        match self {
            Self::Collaborator => String::from("COLLABORATOR"),
            Self::Contributor => String::from("CONTRIBUTOR"),
            Self::FirstTimer => String::from("FIRST_TIMER"),
            Self::FirstTimeContributor => String::from("FIRST_TIME_CONTRIBUTOR"),
            Self::Mannequin => String::from("MANNEQUIN"),
            Self::Member => String::from("MEMBER"),
            Self::None => String::from("NONE"),
            Self::Owner => String::from("OWNER"),
        }
    }
}

impl Default for AuthorAssociation {
    fn default() -> AuthorAssociation {
        Self::Collaborator
    }
}




