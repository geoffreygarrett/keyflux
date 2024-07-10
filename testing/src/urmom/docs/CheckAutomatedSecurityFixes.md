# OpenapiClient::CheckAutomatedSecurityFixes

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enabled** | **Boolean** | Whether automated security fixes are enabled for the repository. |  |
| **paused** | **Boolean** | Whether automated security fixes are paused for the repository. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CheckAutomatedSecurityFixes.new(
  enabled: true,
  paused: false
)
```

