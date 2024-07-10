# OpenapiClient::CodeScanningAlertRuleSummary

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** | A unique identifier for the rule used to detect the alert. | [optional] |
| **name** | **String** | The name of the rule used to detect the alert. | [optional] |
| **tags** | **Array&lt;String&gt;** | A set of tags applicable for the rule. | [optional] |
| **severity** | **String** | The severity of the alert. | [optional] |
| **security_severity_level** | **String** | The security severity of the alert. | [optional] |
| **description** | **String** | A short description of the rule used to detect the alert. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningAlertRuleSummary.new(
  id: null,
  name: null,
  tags: null,
  severity: null,
  security_severity_level: null,
  description: null
)
```

