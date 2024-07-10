# OpenapiClient::WebhookSecurityAdvisoryWithdrawnSecurityAdvisory

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **cvss** | [**WebhooksSecurityAdvisoryCvss**](WebhooksSecurityAdvisoryCvss.md) |  |  |
| **cwes** | [**Array&lt;WebhooksSecurityAdvisoryCwesInner&gt;**](WebhooksSecurityAdvisoryCwesInner.md) |  |  |
| **description** | **String** |  |  |
| **ghsa_id** | **String** |  |  |
| **identifiers** | [**Array&lt;WebhooksSecurityAdvisoryIdentifiersInner&gt;**](WebhooksSecurityAdvisoryIdentifiersInner.md) |  |  |
| **published_at** | **String** |  |  |
| **references** | [**Array&lt;WebhooksSecurityAdvisoryReferencesInner&gt;**](WebhooksSecurityAdvisoryReferencesInner.md) |  |  |
| **severity** | **String** |  |  |
| **summary** | **String** |  |  |
| **updated_at** | **String** |  |  |
| **vulnerabilities** | [**Array&lt;WebhooksSecurityAdvisoryVulnerabilitiesInner&gt;**](WebhooksSecurityAdvisoryVulnerabilitiesInner.md) |  |  |
| **withdrawn_at** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookSecurityAdvisoryWithdrawnSecurityAdvisory.new(
  cvss: null,
  cwes: null,
  description: null,
  ghsa_id: null,
  identifiers: null,
  published_at: null,
  references: null,
  severity: null,
  summary: null,
  updated_at: null,
  vulnerabilities: null,
  withdrawn_at: null
)
```

