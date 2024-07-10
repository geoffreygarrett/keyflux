# RepositoryAdvisory

## Properties

Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**ghsa_id** | **String** | The GitHub Security Advisory ID. | [readonly]
**cve_id** | Option<**String**> | The Common Vulnerabilities and Exposures (CVE) ID. | 
**url** | **String** | The API URL for the advisory. | [readonly]
**html_url** | **String** | The URL for the advisory. | [readonly]
**summary** | **String** | A short summary of the advisory. | 
**description** | Option<**String**> | A detailed description of what the advisory entails. | 
**severity** | Option<**String**> | The severity of the advisory. | 
**author** | Option<[**crate::models::RepositoryAdvisoryAuthor**](repository_advisory_author.md)> |  | 
**publisher** | Option<[**crate::models::RepositoryAdvisoryPublisher**](repository_advisory_publisher.md)> |  | 
**identifiers** | [**Vec<crate::models::GlobalAdvisoryIdentifiersInner>**](global_advisory_identifiers_inner.md) |  | [readonly]
**state** | **String** | The state of the advisory. | 
**created_at** | Option<**String**> | The date and time of when the advisory was created, in ISO 8601 format. | [readonly]
**updated_at** | Option<**String**> | The date and time of when the advisory was last updated, in ISO 8601 format. | [readonly]
**published_at** | Option<**String**> | The date and time of when the advisory was published, in ISO 8601 format. | [readonly]
**closed_at** | Option<**String**> | The date and time of when the advisory was closed, in ISO 8601 format. | [readonly]
**withdrawn_at** | Option<**String**> | The date and time of when the advisory was withdrawn, in ISO 8601 format. | [readonly]
**submission** | Option<[**crate::models::RepositoryAdvisorySubmission**](repository_advisory_submission.md)> |  | 
**vulnerabilities** | Option<[**Vec<crate::models::RepositoryAdvisoryVulnerability>**](repository-advisory-vulnerability.md)> |  | 
**cvss** | Option<[**crate::models::GlobalAdvisoryCvss**](global_advisory_cvss.md)> |  | 
**cwes** | Option<[**Vec<crate::models::GlobalAdvisoryCwesInner>**](global_advisory_cwes_inner.md)> |  | [readonly]
**cwe_ids** | Option<**Vec<String>**> | A list of only the CWE IDs. | 
**credits** | Option<[**Vec<crate::models::RepositoryAdvisoryCreditsInner>**](repository_advisory_credits_inner.md)> |  | 
**credits_detailed** | Option<[**Vec<crate::models::RepositoryAdvisoryCredit>**](repository-advisory-credit.md)> |  | [readonly]
**collaborating_users** | Option<[**Vec<crate::models::SimpleUser>**](simple-user.md)> | A list of users that collaborate on the advisory. | 
**collaborating_teams** | Option<[**Vec<crate::models::Team>**](team.md)> | A list of teams that collaborate on the advisory. | 
**private_fork** | Option<[**crate::models::RepositoryAdvisoryPrivateFork**](repository_advisory_private_fork.md)> |  | 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


