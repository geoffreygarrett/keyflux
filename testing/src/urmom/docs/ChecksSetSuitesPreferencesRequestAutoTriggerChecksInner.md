# OpenapiClient::ChecksSetSuitesPreferencesRequestAutoTriggerChecksInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **app_id** | **Integer** | The &#x60;id&#x60; of the GitHub App. |  |
| **setting** | **Boolean** | Set to &#x60;true&#x60; to enable automatic creation of CheckSuite events upon pushes to the repository, or &#x60;false&#x60; to disable them. | [default to true] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ChecksSetSuitesPreferencesRequestAutoTriggerChecksInner.new(
  app_id: null,
  setting: null
)
```

