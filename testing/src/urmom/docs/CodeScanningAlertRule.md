# OpenapiClient::CodeScanningAlertRule

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** | A unique identifier for the rule used to detect the alert. | [optional] |
| **name** | **String** | The name of the rule used to detect the alert. | [optional] |
| **severity** | **String** | The severity of the alert. | [optional] |
| **security_severity_level** | **String** | The security severity of the alert. | [optional] |
| **description** | **String** | A short description of the rule used to detect the alert. | [optional] |
| **full_description** | **String** | description of the rule used to detect the alert. | [optional] |
| **tags** | **Array&lt;String&gt;** | A set of tags applicable for the rule. | [optional] |
| **help** | **String** | Detailed documentation for the rule as GitHub Flavored Markdown. | [optional] |
| **help_uri** | **String** | A link to the documentation for the rule used to detect the alert. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningAlertRule.new(
  id: null,
  name: null,
  severity: null,
  security_severity_level: null,
  description: null,
  full_description: null,
  tags: null,
  help: null,
  help_uri: null
)
```

