# OpenapiClient::ChecksCreateRequestActionsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **label** | **String** | The text to be displayed on a button in the web UI. The maximum size is 20 characters. |  |
| **description** | **String** | A short explanation of what this action would do. The maximum size is 40 characters. |  |
| **identifier** | **String** | A reference for the action on the integrator&#39;s system. The maximum size is 20 characters. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ChecksCreateRequestActionsInner.new(
  label: null,
  description: null,
  identifier: null
)
```

