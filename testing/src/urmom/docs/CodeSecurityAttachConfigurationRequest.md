# OpenapiClient::CodeSecurityAttachConfigurationRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **scope** | **String** | The type of repositories to attach the configuration to. &#x60;selected&#x60; means the configuration will be attached to only the repositories specified by &#x60;selected_repository_ids&#x60; |  |
| **selected_repository_ids** | **Array&lt;Integer&gt;** | An array of repository IDs to attach the configuration to. You can only provide a list of repository ids when the &#x60;scope&#x60; is set to &#x60;selected&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeSecurityAttachConfigurationRequest.new(
  scope: null,
  selected_repository_ids: null
)
```

