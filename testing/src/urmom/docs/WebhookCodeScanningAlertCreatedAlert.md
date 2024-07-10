# OpenapiClient::WebhookCodeScanningAlertCreatedAlert

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created_at** | **Time** | The time that the alert was created in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ.&#x60; |  |
| **dismissed_at** | **Object** | The time that the alert was dismissed in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. |  |
| **dismissed_by** | **Object** |  |  |
| **dismissed_comment** | **String** | The dismissal comment associated with the dismissal of the alert. | [optional] |
| **dismissed_reason** | **Object** | The reason for dismissing or closing the alert. Can be one of: &#x60;false positive&#x60;, &#x60;won&#39;t fix&#x60;, and &#x60;used in tests&#x60;. |  |
| **fixed_at** | **Object** |  | [optional] |
| **html_url** | **String** | The GitHub URL of the alert resource. |  |
| **instances_url** | **String** |  | [optional] |
| **most_recent_instance** | [**AlertInstance**](AlertInstance.md) |  | [optional] |
| **number** | **Integer** | The code scanning alert number. |  |
| **rule** | [**WebhookCodeScanningAlertClosedByUserAlertRule**](WebhookCodeScanningAlertClosedByUserAlertRule.md) |  |  |
| **state** | **String** | State of a code scanning alert. |  |
| **tool** | [**WebhookCodeScanningAlertCreatedAlertTool**](WebhookCodeScanningAlertCreatedAlertTool.md) |  |  |
| **updated_at** | **String** |  | [optional] |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCodeScanningAlertCreatedAlert.new(
  created_at: null,
  dismissed_at: null,
  dismissed_by: null,
  dismissed_comment: null,
  dismissed_reason: null,
  fixed_at: null,
  html_url: null,
  instances_url: null,
  most_recent_instance: null,
  number: null,
  rule: null,
  state: null,
  tool: null,
  updated_at: null,
  url: null
)
```

