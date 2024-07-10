# OpenapiClient::WebhookCodeScanningAlertReopenedAlert

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created_at** | **Time** | The time that the alert was created in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ.&#x60; |  |
| **dismissed_at** | **String** | The time that the alert was dismissed in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. |  |
| **dismissed_by** | **Object** |  |  |
| **dismissed_reason** | **String** | The reason for dismissing or closing the alert. Can be one of: &#x60;false positive&#x60;, &#x60;won&#39;t fix&#x60;, and &#x60;used in tests&#x60;. |  |
| **html_url** | **String** | The GitHub URL of the alert resource. |  |
| **most_recent_instance** | [**AlertInstance**](AlertInstance.md) |  | [optional] |
| **number** | **Integer** | The code scanning alert number. |  |
| **rule** | [**WebhookCodeScanningAlertClosedByUserAlertRule**](WebhookCodeScanningAlertClosedByUserAlertRule.md) |  |  |
| **state** | **String** | State of a code scanning alert. |  |
| **tool** | [**WebhookCodeScanningAlertClosedByUserAlertTool**](WebhookCodeScanningAlertClosedByUserAlertTool.md) |  |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCodeScanningAlertReopenedAlert.new(
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

