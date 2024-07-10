# OpenapiClient::DependabotAlert

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **number** | **Integer** | The security alert number. | [readonly] |
| **state** | **String** | The state of the Dependabot alert. | [readonly] |
| **dependency** | [**DependabotAlertWithRepositoryDependency**](DependabotAlertWithRepositoryDependency.md) |  |  |
| **security_advisory** | [**DependabotAlertSecurityAdvisory**](DependabotAlertSecurityAdvisory.md) |  |  |
| **security_vulnerability** | [**DependabotAlertSecurityVulnerability**](DependabotAlertSecurityVulnerability.md) |  |  |
| **url** | **String** | The REST API URL of the alert resource. | [readonly] |
| **html_url** | **String** | The GitHub URL of the alert resource. | [readonly] |
| **created_at** | **Time** | The time that the alert was created in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |
| **updated_at** | **Time** | The time that the alert was last updated in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |
| **dismissed_at** | **Time** | The time that the alert was dismissed in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |
| **dismissed_by** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **dismissed_reason** | **String** | The reason that the alert was dismissed. |  |
| **dismissed_comment** | **String** | An optional comment associated with the alert&#39;s dismissal. |  |
| **fixed_at** | **Time** | The time that the alert was no longer detected and was considered fixed in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |
| **auto_dismissed_at** | **Time** | The time that the alert was auto-dismissed in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional][readonly] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependabotAlert.new(
  number: null,
  state: null,
  dependency: null,
  security_advisory: null,
  security_vulnerability: null,
  url: null,
  html_url: null,
  created_at: null,
  updated_at: null,
  dismissed_at: null,
  dismissed_by: null,
  dismissed_reason: null,
  dismissed_comment: null,
  fixed_at: null,
  auto_dismissed_at: null
)
```

