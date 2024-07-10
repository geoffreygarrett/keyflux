# OpenapiClient::CodeSecuritySetConfigurationAsDefault200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **default_for_new_repos** | **String** | Specifies which types of repository this security configuration is applied to by default. | [optional] |
| **configuration** | [**CodeSecurityConfiguration**](CodeSecurityConfiguration.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeSecuritySetConfigurationAsDefault200Response.new(
  default_for_new_repos: null,
  configuration: null
)
```

