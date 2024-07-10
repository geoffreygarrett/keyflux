# OpenapiClient::WebhookCodeScanningAlertClosedByUserAlertRule

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **description** | **String** | A short description of the rule used to detect the alert. |  |
| **full_description** | **String** |  | [optional] |
| **help** | **String** |  | [optional] |
| **help_uri** | **String** | A link to the documentation for the rule used to detect the alert. | [optional] |
| **id** | **String** | A unique identifier for the rule used to detect the alert. |  |
| **name** | **String** |  | [optional] |
| **severity** | **String** | The severity of the alert. |  |
| **tags** | **Array&lt;String&gt;** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCodeScanningAlertClosedByUserAlertRule.new(
  description: null,
  full_description: null,
  help: null,
  help_uri: null,
  id: null,
  name: null,
  severity: null,
  tags: null
)
```

