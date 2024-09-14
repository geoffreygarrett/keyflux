/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// ClassroomAssignment : A GitHub Classroom assignment



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct ClassroomAssignment {
    /// Unique identifier of the repository.
    #[serde(rename = "id")]
    pub id: i32,
    /// Whether an accepted assignment creates a public repository.
    #[serde(rename = "public_repo")]
    pub public_repo: bool,
    /// Assignment title.
    #[serde(rename = "title")]
    pub title: String,
    /// Whether it's a group assignment or individual assignment.
    #[serde(rename = "type")]
    pub r#type: RHashType,
    /// The link that a student can use to accept the assignment.
    #[serde(rename = "invite_link")]
    pub invite_link: String,
    /// Whether the invitation link is enabled. Visiting an enabled invitation link will accept the assignment.
    #[serde(rename = "invitations_enabled")]
    pub invitations_enabled: bool,
    /// Sluggified name of the assignment.
    #[serde(rename = "slug")]
    pub slug: String,
    /// Whether students are admins on created repository when a student accepts the assignment.
    #[serde(rename = "students_are_repo_admins")]
    pub students_are_repo_admins: bool,
    /// Whether feedback pull request will be created when a student accepts the assignment.
    #[serde(rename = "feedback_pull_requests_enabled")]
    pub feedback_pull_requests_enabled: bool,
    /// The maximum allowable teams for the assignment.
    #[serde(rename = "max_teams")]
    pub max_teams: Option<i32>,
    /// The maximum allowable members per team.
    #[serde(rename = "max_members")]
    pub max_members: Option<i32>,
    /// The selected editor for the assignment.
    #[serde(rename = "editor")]
    pub editor: String,
    /// The number of students that have accepted the assignment.
    #[serde(rename = "accepted")]
    pub accepted: i32,
    /// The number of students that have submitted the assignment.
    #[serde(rename = "submitted")]
    pub submitted: i32,
    /// The number of students that have passed the assignment.
    #[serde(rename = "passing")]
    pub passing: i32,
    /// The programming language used in the assignment.
    #[serde(rename = "language")]
    pub language: String,
    /// The time at which the assignment is due.
    #[serde(rename = "deadline")]
    pub deadline: Option<String>,
    #[serde(rename = "starter_code_repository")]
    pub starter_code_repository: Box<crate::models::SimpleClassroomRepository>,
    #[serde(rename = "classroom")]
    pub classroom: Box<crate::models::Classroom>,
}

impl ClassroomAssignment {
    /// A GitHub Classroom assignment
    pub fn new(id: i32, public_repo: bool, title: String, r#type: RHashType, invite_link: String, invitations_enabled: bool, slug: String, students_are_repo_admins: bool, feedback_pull_requests_enabled: bool, max_teams: Option<i32>, max_members: Option<i32>, editor: String, accepted: i32, submitted: i32, passing: i32, language: String, deadline: Option<String>, starter_code_repository: crate::models::SimpleClassroomRepository, classroom: crate::models::Classroom) -> ClassroomAssignment {
        ClassroomAssignment {
            id,
            public_repo,
            title,
            r#type,
            invite_link,
            invitations_enabled,
            slug,
            students_are_repo_admins,
            feedback_pull_requests_enabled,
            max_teams,
            max_members,
            editor,
            accepted,
            submitted,
            passing,
            language,
            deadline,
            starter_code_repository: Box::new(starter_code_repository),
            classroom: Box::new(classroom),
        }
    }
}

/// Whether it's a group assignment or individual assignment.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RHashType {
    #[serde(rename = "individual")]
    Individual,
    #[serde(rename = "group")]
    Group,
}

impl Default for RHashType {
    fn default() -> RHashType {
        Self::Individual
    }
}
