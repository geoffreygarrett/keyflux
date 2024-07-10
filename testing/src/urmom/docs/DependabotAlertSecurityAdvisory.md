# OpenapiClient::DependabotAlertSecurityAdvisory

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ghsa_id** | **String** | The unique GitHub Security Advisory ID assigned to the advisory. | [readonly] |
| **cve_id** | **String** | The unique CVE ID assigned to the advisory. | [readonly] |
| **summary** | **String** | A short, plain text summary of the advisory. | [readonly] |
| **description** | **String** | A long-form Markdown-supported description of the advisory. | [readonly] |
| **vulnerabilities** | [**Array&lt;DependabotAlertSecurityVulnerability&gt;**](DependabotAlertSecurityVulnerability.md) | Vulnerable version range information for the advisory. | [readonly] |
| **severity** | **String** | The severity of the advisory. | [readonly] |
| **cvss** | [**DependabotAlertSecurityAdvisoryCvss**](DependabotAlertSecurityAdvisoryCvss.md) |  |  |
| **cwes** | [**Array&lt;DependabotAlertSecurityAdvisoryCwesInner&gt;**](DependabotAlertSecurityAdvisoryCwesInner.md) | Details for the advisory pertaining to Common Weakness Enumeration. | [readonly] |
| **identifiers** | [**Array&lt;DependabotAlertSecurityAdvisoryIdentifiersInner&gt;**](DependabotAlertSecurityAdvisoryIdentifiersInner.md) | Values that identify this advisory among security information sources. | [readonly] |
| **references** | [**Array&lt;DependabotAlertSecurityAdvisoryReferencesInner&gt;**](DependabotAlertSecurityAdvisoryReferencesInner.md) | Links to additional advisory information. | [readonly] |
| **published_at** | **Time** | The time that the advisory was published in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |
| **updated_at** | **Time** | The time that the advisory was last modified in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |
| **withdrawn_at** | **Time** | The time that the advisory was withdrawn in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependabotAlertSecurityAdvisory.new(
  ghsa_id: null,
  cve_id: null,
  summary: null,
  description: null,
  vulnerabilities: null,
  severity: null,
  cvss: null,
  cwes: null,
  identifiers: null,
  references: null,
  published_at: null,
  updated_at: null,
  withdrawn_at: null
)
```

