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
pub struct SigstoreBundle0DsseEnvelopeSignaturesInner {
    #[serde(rename = "sig", skip_serializing_if = "Option::is_none")]
    pub sig: Option<String>,
    #[serde(rename = "keyid", skip_serializing_if = "Option::is_none")]
    pub keyid: Option<String>,
}

impl SigstoreBundle0DsseEnvelopeSignaturesInner {
    pub fn new() -> SigstoreBundle0DsseEnvelopeSignaturesInner {
        SigstoreBundle0DsseEnvelopeSignaturesInner {
            sig: None,
            keyid: None,
        }
    }
}

