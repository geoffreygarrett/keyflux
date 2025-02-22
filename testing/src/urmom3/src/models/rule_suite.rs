/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// RuleSuite : Response



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct RuleSuite {
    /// The unique identifier of the rule insight.
    #[serde(rename = "id", skip_serializing_if = "Option::is_none")]
    pub id: Option<i32>,
    /// The number that identifies the user.
    #[serde(rename = "actor_id", skip_serializing_if = "Option::is_none")]
    pub actor_id: Option<i32>,
    /// The handle for the GitHub user account.
    #[serde(rename = "actor_name", skip_serializing_if = "Option::is_none")]
    pub actor_name: Option<String>,
    /// The first commit sha before the push evaluation.
    #[serde(rename = "before_sha", skip_serializing_if = "Option::is_none")]
    pub before_sha: Option<String>,
    /// The last commit sha in the push evaluation.
    #[serde(rename = "after_sha", skip_serializing_if = "Option::is_none")]
    pub after_sha: Option<String>,
    /// The ref name that the evaluation ran on.
    #[serde(rename = "ref", skip_serializing_if = "Option::is_none")]
    pub r#ref: Option<String>,
    /// The ID of the repository associated with the rule evaluation.
    #[serde(rename = "repository_id", skip_serializing_if = "Option::is_none")]
    pub repository_id: Option<i32>,
    /// The name of the repository without the `.git` extension.
    #[serde(rename = "repository_name", skip_serializing_if = "Option::is_none")]
    pub repository_name: Option<String>,
    #[serde(rename = "pushed_at", skip_serializing_if = "Option::is_none")]
    pub pushed_at: Option<String>,
    /// The result of the rule evaluations for rules with the `active` enforcement status.
    #[serde(rename = "result", skip_serializing_if = "Option::is_none")]
    pub result: Option<Result>,
    /// The result of the rule evaluations for rules with the `active` and `evaluate` enforcement statuses, demonstrating whether rules would pass or fail if all rules in the rule suite were `active`.
    #[serde(rename = "evaluation_result", skip_serializing_if = "Option::is_none")]
    pub evaluation_result: Option<EvaluationResult>,
    /// Details on the evaluated rules.
    #[serde(rename = "rule_evaluations", skip_serializing_if = "Option::is_none")]
    pub rule_evaluations: Option<Vec<crate::models::RuleSuiteRuleEvaluationsInner>>,
}

impl RuleSuite {
    /// Response
    pub fn new() -> RuleSuite {
        RuleSuite {
            id: None,
            actor_id: None,
            actor_name: None,
            before_sha: None,
            after_sha: None,
            r#ref: None,
            repository_id: None,
            repository_name: None,
            pushed_at: None,
            result: None,
            evaluation_result: None,
            rule_evaluations: None,
        }
    }
}

/// The result of the rule evaluations for rules with the `active` enforcement status.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Result {
    #[serde(rename = "pass")]
    Pass,
    #[serde(rename = "fail")]
    Fail,
    #[serde(rename = "bypass")]
    Bypass,
}

impl Default for Result {
    fn default() -> Result {
        Self::Pass
    }
}
/// The result of the rule evaluations for rules with the `active` and `evaluate` enforcement statuses, demonstrating whether rules would pass or fail if all rules in the rule suite were `active`.
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum EvaluationResult {
    #[serde(rename = "pass")]
    Pass,
    #[serde(rename = "fail")]
    Fail,
}

impl Default for EvaluationResult {
    fn default() -> EvaluationResult {
        Self::Pass
    }
}

