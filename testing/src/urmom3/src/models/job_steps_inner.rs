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
pub struct JobStepsInner {
    /// The phase of the lifecycle that the job is currently in.
    #[serde(rename = "status")]
    pub status: Status,
    /// The outcome of the job.
    #[serde(rename = "conclusion")]
    pub conclusion: Option<String>,
    /// The name of the job.
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "number")]
    pub number: i32,
    /// The time that the step started, in ISO 8601 format.
    #[serde(rename = "started_at", skip_serializing_if = "Option::is_none")]
    pub started_at: Option<String>,
    /// The time that the job finished, in ISO 8601 format.
    #[serde(rename = "completed_at", skip_serializing_if = "Option::is_none")]
    pub completed_at: Option<String>,
}

impl JobStepsInner {
    pub fn new(status: Status, conclusion: Option<String>, name: String, number: i32) -> JobStepsInner {
        JobStepsInner {
            status,
            conclusion,
            name,
            number,
            started_at: None,
            completed_at: None,
        }
    }
}

/// The phase of the lifecycle that the job is currently in.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Status {
    #[serde(rename = "queued")]
    Queued,
    #[serde(rename = "in_progress")]
    InProgress,
    #[serde(rename = "completed")]
    Completed,
}

impl Default for Status {
    fn default() -> Status {
        Self::Queued
    }
}
