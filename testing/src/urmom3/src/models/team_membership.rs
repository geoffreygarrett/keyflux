/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// TeamMembership : Team Membership



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct TeamMembership {
    #[serde(rename = "url")]
    pub url: String,
    /// The role of the user in the team.
    #[serde(rename = "role")]
    pub role: Role,
    /// The state of the user's membership in the team.
    #[serde(rename = "state")]
    pub state: State,
}

impl TeamMembership {
    /// Team Membership
    pub fn new(url: String, role: Role, state: State) -> TeamMembership {
        TeamMembership {
            url,
            role,
            state,
        }
    }
}

/// The role of the user in the team.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Role {
    #[serde(rename = "member")]
    Member,
    #[serde(rename = "maintainer")]
    Maintainer,
}

impl Default for Role {
    fn default() -> Role {
        Self::Member
    }
}
/// The state of the user's membership in the team.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum State {
    #[serde(rename = "active")]
    Active,
    #[serde(rename = "pending")]
    Pending,
}

impl Default for State {
    fn default() -> State {
        Self::Active
    }
}
