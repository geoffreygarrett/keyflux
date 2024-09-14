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
pub struct Verification {
    #[serde(rename = "verified")]
    pub verified: bool,
    #[serde(rename = "reason")]
    pub reason: String,
    #[serde(rename = "payload")]
    pub payload: Option<String>,
    #[serde(rename = "signature")]
    pub signature: Option<String>,
}

impl Verification {
    pub fn new(verified: bool, reason: String, payload: Option<String>, signature: Option<String>) -> Verification {
        Verification {
            verified,
            reason,
            payload,
            signature,
        }
    }
}

