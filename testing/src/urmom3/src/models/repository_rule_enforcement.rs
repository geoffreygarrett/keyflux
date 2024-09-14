/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// RepositoryRuleEnforcement : The enforcement level of the ruleset. `evaluate` allows admins to test rules before enforcing them. Admins can view insights on the Rule Insights page (`evaluate` is only available with GitHub Enterprise).

/// The enforcement level of the ruleset. `evaluate` allows admins to test rules before enforcing them. Admins can view insights on the Rule Insights page (`evaluate` is only available with GitHub Enterprise).
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum RepositoryRuleEnforcement {
    #[serde(rename = "disabled")]
    Disabled,
    #[serde(rename = "active")]
    Active,
    #[serde(rename = "evaluate")]
    Evaluate,

}

impl ToString for RepositoryRuleEnforcement {
    fn to_string(&self) -> String {
        match self {
            Self::Disabled => String::from("disabled"),
            Self::Active => String::from("active"),
            Self::Evaluate => String::from("evaluate"),
        }
    }
}

impl Default for RepositoryRuleEnforcement {
    fn default() -> RepositoryRuleEnforcement {
        Self::Disabled
    }
}



