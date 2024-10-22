/*
 * GitHub v3 REST API
 *
 * GitHub's v3 REST API.
 *
 * The version of the OpenAPI document: 1.1.4
 * 
 * Generated by: https://openapi-generator.tech
 */

/// SecretScanningLocationDiscussionTitle : Represents a 'discussion_title' secret scanning location type. This location type shows that a secret was detected in the title of a discussion.



#[derive(Clone, Debug, PartialEq, Default, Serialize, Deserialize)]
pub struct SecretScanningLocationDiscussionTitle {
    /// The URL to the discussion where the secret was detected.
    #[serde(rename = "discussion_title_url")]
    pub discussion_title_url: String,
}

impl SecretScanningLocationDiscussionTitle {
    /// Represents a 'discussion_title' secret scanning location type. This location type shows that a secret was detected in the title of a discussion.
    pub fn new(discussion_title_url: String) -> SecretScanningLocationDiscussionTitle {
        SecretScanningLocationDiscussionTitle {
            discussion_title_url,
        }
    }
}


