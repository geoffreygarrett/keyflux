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
pub struct IssuesSetLabelsRequestOneOf1LabelsInner {
    #[serde(rename = "name")]
    pub name: String,
}

impl IssuesSetLabelsRequestOneOf1LabelsInner {
    pub fn new(name: String) -> IssuesSetLabelsRequestOneOf1LabelsInner {
        IssuesSetLabelsRequestOneOf1LabelsInner {
            name,
        }
    }
}


