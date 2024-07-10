# OpenapiClient::CodeSecurityDefaultConfigurationsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **default_for_new_repos** | **String** | The visibility of newly created repositories for which the code security configuration will be applied to by default | [optional] |
| **configuration** | [**CodeSecurityConfiguration**](CodeSecurityConfiguration.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeSecurityDefaultConfigurationsInner.new(
  default_for_new_repos: null,
  configuration: null
)
```

