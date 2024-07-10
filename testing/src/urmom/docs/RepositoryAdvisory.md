# OpenapiClient::RepositoryAdvisory

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ghsa_id** | **String** | The GitHub Security Advisory ID. | [readonly] |
| **cve_id** | **String** | The Common Vulnerabilities and Exposures (CVE) ID. |  |
| **url** | **String** | The API URL for the advisory. | [readonly] |
| **html_url** | **String** | The URL for the advisory. | [readonly] |
| **summary** | **String** | A short summary of the advisory. |  |
| **description** | **String** | A detailed description of what the advisory entails. |  |
| **severity** | **String** | The severity of the advisory. |  |
| **author** | [**RepositoryAdvisoryAuthor**](RepositoryAdvisoryAuthor.md) |  |  |
| **publisher** | [**RepositoryAdvisoryPublisher**](RepositoryAdvisoryPublisher.md) |  |  |
| **identifiers** | [**Array&lt;GlobalAdvisoryIdentifiersInner&gt;**](GlobalAdvisoryIdentifiersInner.md) |  | [readonly] |
| **state** | **String** | The state of the advisory. |  |
| **created_at** | **Time** | The date and time of when the advisory was created, in ISO 8601 format. | [readonly] |
| **updated_at** | **Time** | The date and time of when the advisory was last updated, in ISO 8601 format. | [readonly] |
| **published_at** | **Time** | The date and time of when the advisory was published, in ISO 8601 format. | [readonly] |
| **closed_at** | **Time** | The date and time of when the advisory was closed, in ISO 8601 format. | [readonly] |
| **withdrawn_at** | **Time** | The date and time of when the advisory was withdrawn, in ISO 8601 format. | [readonly] |
| **submission** | [**RepositoryAdvisorySubmission**](RepositoryAdvisorySubmission.md) |  |  |
| **vulnerabilities** | [**Array&lt;RepositoryAdvisoryVulnerability&gt;**](RepositoryAdvisoryVulnerability.md) |  |  |
| **cvss** | [**GlobalAdvisoryCvss**](GlobalAdvisoryCvss.md) |  |  |
| **cwes** | [**Array&lt;GlobalAdvisoryCwesInner&gt;**](GlobalAdvisoryCwesInner.md) |  | [readonly] |
| **cwe_ids** | **Array&lt;String&gt;** | A list of only the CWE IDs. |  |
| **credits** | [**Array&lt;RepositoryAdvisoryCreditsInner&gt;**](RepositoryAdvisoryCreditsInner.md) |  |  |
| **credits_detailed** | [**Array&lt;RepositoryAdvisoryCredit&gt;**](RepositoryAdvisoryCredit.md) |  | [readonly] |
| **collaborating_users** | [**Array&lt;SimpleUser&gt;**](SimpleUser.md) | A list of users that collaborate on the advisory. |  |
| **collaborating_teams** | [**Array&lt;Team&gt;**](Team.md) | A list of teams that collaborate on the advisory. |  |
| **private_fork** | [**RepositoryAdvisoryPrivateFork**](RepositoryAdvisoryPrivateFork.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryAdvisory.new(
  ghsa_id: null,
  cve_id: null,
  url: null,
  html_url: null,
  summary: null,
  description: null,
  severity: null,
  author: null,
  publisher: null,
  identifiers: null,
  state: null,
  created_at: null,
  updated_at: null,
  published_at: null,
  closed_at: null,
  withdrawn_at: null,
  submission: null,
  vulnerabilities: null,
  cvss: null,
  cwes: null,
  cwe_ids: null,
  credits: null,
  credits_detailed: null,
  collaborating_users: null,
  collaborating_teams: null,
  private_fork: null
)
```

