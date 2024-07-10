# OpenapiClient::DependabotAlertSecurityAdvisoryCvss

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **score** | **Float** | The overall CVSS score of the advisory. | [readonly] |
| **vector_string** | **String** | The full CVSS vector string for the advisory. | [readonly] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependabotAlertSecurityAdvisoryCvss.new(
  score: null,
  vector_string: null
)
```

