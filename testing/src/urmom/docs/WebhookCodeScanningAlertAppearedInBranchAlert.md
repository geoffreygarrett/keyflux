# OpenapiClient::WebhookCodeScanningAlertAppearedInBranchAlert

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created_at** | **Time** | The time that the alert was created in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ.&#x60; |  |
| **dismissed_at** | **Time** | The time that the alert was dismissed in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. |  |
| **dismissed_by** | [**User**](User.md) |  |  |
| **dismissed_reason** | **String** | The reason for dismissing or closing the alert. |  |
| **html_url** | **String** | The GitHub URL of the alert resource. |  |
| **most_recent_instance** | [**AlertInstance**](AlertInstance.md) |  | [optional] |
| **number** | **Integer** | The code scanning alert number. |  |
| **rule** | [**WebhookCodeScanningAlertAppearedInBranchAlertRule**](WebhookCodeScanningAlertAppearedInBranchAlertRule.md) |  |  |
| **state** | **String** | State of a code scanning alert. |  |
| **tool** | [**WebhookCodeScanningAlertAppearedInBranchAlertTool**](WebhookCodeScanningAlertAppearedInBranchAlertTool.md) |  |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCodeScanningAlertAppearedInBranchAlert.new(
  created_at: null,
  dismissed_at: null,
  dismissed_by: null,
  dismissed_reason: null,
  html_url: null,
  most_recent_instance: null,
  number: null,
  rule: null,
  state: null,
  tool: null,
  url: null
)
```

