# OpenapiClient::ChecksSetSuitesPreferencesRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **auto_trigger_checks** | [**Array&lt;ChecksSetSuitesPreferencesRequestAutoTriggerChecksInner&gt;**](ChecksSetSuitesPreferencesRequestAutoTriggerChecksInner.md) | Enables or disables automatic creation of CheckSuite events upon pushes to the repository. Enabled by default. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ChecksSetSuitesPreferencesRequest.new(
  auto_trigger_checks: null
)
```

