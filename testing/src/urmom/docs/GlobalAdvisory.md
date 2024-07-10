# OpenapiClient::GlobalAdvisory

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ghsa_id** | **String** | The GitHub Security Advisory ID. | [readonly] |
| **cve_id** | **String** | The Common Vulnerabilities and Exposures (CVE) ID. | [readonly] |
| **url** | **String** | The API URL for the advisory. | [readonly] |
| **html_url** | **String** | The URL for the advisory. | [readonly] |
| **repository_advisory_url** | **String** | The API URL for the repository advisory. | [readonly] |
| **summary** | **String** | A short summary of the advisory. |  |
| **description** | **String** | A detailed description of what the advisory entails. |  |
| **type** | **String** | The type of advisory. | [readonly] |
| **severity** | **String** | The severity of the advisory. |  |
| **source_code_location** | **String** | The URL of the advisory&#39;s source code. |  |
| **identifiers** | [**Array&lt;GlobalAdvisoryIdentifiersInner&gt;**](GlobalAdvisoryIdentifiersInner.md) |  | [readonly] |
| **references** | **Array&lt;String&gt;** |  |  |
| **published_at** | **Time** | The date and time of when the advisory was published, in ISO 8601 format. | [readonly] |
| **updated_at** | **Time** | The date and time of when the advisory was last updated, in ISO 8601 format. | [readonly] |
| **github_reviewed_at** | **Time** | The date and time of when the advisory was reviewed by GitHub, in ISO 8601 format. | [readonly] |
| **nvd_published_at** | **Time** | The date and time when the advisory was published in the National Vulnerability Database, in ISO 8601 format. This field is only populated when the advisory is imported from the National Vulnerability Database. | [readonly] |
| **withdrawn_at** | **Time** | The date and time of when the advisory was withdrawn, in ISO 8601 format. | [readonly] |
| **vulnerabilities** | [**Array&lt;Vulnerability&gt;**](Vulnerability.md) | The products and respective version ranges affected by the advisory. |  |
| **cvss** | [**GlobalAdvisoryCvss**](GlobalAdvisoryCvss.md) |  |  |
| **cwes** | [**Array&lt;GlobalAdvisoryCwesInner&gt;**](GlobalAdvisoryCwesInner.md) |  |  |
| **credits** | [**Array&lt;GlobalAdvisoryCreditsInner&gt;**](GlobalAdvisoryCreditsInner.md) | The users who contributed to the advisory. | [readonly] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GlobalAdvisory.new(
  ghsa_id: null,
  cve_id: null,
  url: null,
  html_url: null,
  repository_advisory_url: null,
  summary: null,
  description: null,
  type: null,
  severity: null,
  source_code_location: null,
  identifiers: null,
  references: null,
  published_at: null,
  updated_at: null,
  github_reviewed_at: null,
  nvd_published_at: null,
  withdrawn_at: null,
  vulnerabilities: null,
  cvss: null,
  cwes: null,
  credits: null
)
```

