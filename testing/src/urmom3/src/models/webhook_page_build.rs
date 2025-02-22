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
pub struct WebhookPageBuild {
    #[serde(rename = "build")]
    pub build: Box<crate::models::WebhookPageBuildBuild>,
    #[serde(rename = "enterprise", skip_serializing_if = "Option::is_none")]
    pub enterprise: Option<Box<crate::models::EnterpriseWebhooks>>,
    #[serde(rename = "id")]
    pub id: i32,
    #[serde(rename = "installation", skip_serializing_if = "Option::is_none")]
    pub installation: Option<Box<crate::models::SimpleInstallation>>,
    #[serde(rename = "organization", skip_serializing_if = "Option::is_none")]
    pub organization: Option<Box<crate::models::OrganizationSimpleWebhooks>>,
    #[serde(rename = "repository")]
    pub repository: Box<crate::models::RepositoryWebhooks>,
    #[serde(rename = "sender")]
    pub sender: Box<crate::models::SimpleUserWebhooks>,
}

impl WebhookPageBuild {
    pub fn new(build: crate::models::WebhookPageBuildBuild, id: i32, repository: crate::models::RepositoryWebhooks, sender: crate::models::SimpleUserWebhooks) -> WebhookPageBuild {
        WebhookPageBuild {
            build: Box::new(build),
            enterprise: None,
            id,
            installation: None,
            organization: None,
            repository: Box::new(repository),
            sender: Box::new(sender),
        }
    }
}


