# OpenapiClient::CodeSecuritySetConfigurationAsDefaultRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **default_for_new_repos** | **String** | Specify which types of repository this security configuration should be applied to by default. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeSecuritySetConfigurationAsDefaultRequest.new(
  default_for_new_repos: null
)
```

