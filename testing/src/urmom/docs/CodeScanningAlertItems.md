# OpenapiClient::CodeScanningAlertItems

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **number** | **Integer** | The security alert number. | [readonly] |
| **created_at** | **Time** | The time that the alert was created in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |
| **updated_at** | **Time** | The time that the alert was last updated in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional][readonly] |
| **url** | **String** | The REST API URL of the alert resource. | [readonly] |
| **html_url** | **String** | The GitHub URL of the alert resource. | [readonly] |
| **instances_url** | **String** | The REST API URL for fetching the list of instances for an alert. | [readonly] |
| **state** | [**CodeScanningAlertState**](CodeScanningAlertState.md) |  |  |
| **fixed_at** | **Time** | The time that the alert was no longer detected and was considered fixed in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional][readonly] |
| **dismissed_by** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **dismissed_at** | **Time** | The time that the alert was dismissed in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |
| **dismissed_reason** | [**CodeScanningAlertDismissedReason**](CodeScanningAlertDismissedReason.md) |  |  |
| **dismissed_comment** | **String** | The dismissal comment associated with the dismissal of the alert. | [optional] |
| **rule** | [**CodeScanningAlertRuleSummary**](CodeScanningAlertRuleSummary.md) |  |  |
| **tool** | [**CodeScanningAnalysisTool**](CodeScanningAnalysisTool.md) |  |  |
| **most_recent_instance** | [**CodeScanningAlertInstance**](CodeScanningAlertInstance.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningAlertItems.new(
  number: null,
  created_at: null,
  updated_at: null,
  url: null,
  html_url: null,
  instances_url: null,
  state: null,
  fixed_at: null,
  dismissed_by: null,
  dismissed_at: null,
  dismissed_reason: null,
  dismissed_comment: null,
  rule: null,
  tool: null,
  most_recent_instance: null
)
```

