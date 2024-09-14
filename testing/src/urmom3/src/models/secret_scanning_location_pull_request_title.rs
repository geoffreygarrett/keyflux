/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// SecretScanningLocationPullRequestTitle : Represents a 'pull_request_title' secret scanning location type. This location type shows that a secret was detected in the title of a pull request.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct SecretScanningLocationPullRequestTitle {
    /// The API URL to get the pull request where the secret was detected.
    #[serde(rename = "pull_request_title_url")]
    pub pull_request_title_url: String,
}

impl SecretScanningLocationPullRequestTitle {
    /// Represents a 'pull_request_title' secret scanning location type. This location type shows that a secret was detected in the title of a pull request.
    pub fn new(pull_request_title_url: String) -> SecretScanningLocationPullRequestTitle {
        SecretScanningLocationPullRequestTitle {
            pull_request_title_url,
        }
    }
}

