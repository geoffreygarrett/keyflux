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
pub struct Reactions {
    #[serde(rename = "+1")]
    pub plus_1: i32,
    #[serde(rename = "-1")]
    pub _1: i32,
    #[serde(rename = "confused")]
    pub confused: i32,
    #[serde(rename = "eyes")]
    pub eyes: i32,
    #[serde(rename = "heart")]
    pub heart: i32,
    #[serde(rename = "hooray")]
    pub hooray: i32,
    #[serde(rename = "laugh")]
    pub laugh: i32,
    #[serde(rename = "rocket")]
    pub rocket: i32,
    #[serde(rename = "total_count")]
    pub total_count: i32,
    #[serde(rename = "url")]
    pub url: String,
}

impl Reactions {
    pub fn new(plus_1: i32, _1: i32, confused: i32, eyes: i32, heart: i32, hooray: i32, laugh: i32, rocket: i32, total_count: i32, url: String) -> Reactions {
        Reactions {
            plus_1,
            _1,
            confused,
            eyes,
            heart,
            hooray,
            laugh,
            rocket,
            total_count,
            url,
        }
    }
}


