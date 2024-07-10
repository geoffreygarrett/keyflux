# OpenapiClient::DependabotUpdateAlertRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | **String** | The state of the Dependabot alert. A &#x60;dismissed_reason&#x60; must be provided when setting the state to &#x60;dismissed&#x60;. |  |
| **dismissed_reason** | **String** | **Required when &#x60;state&#x60; is &#x60;dismissed&#x60;.** A reason for dismissing the alert. | [optional] |
| **dismissed_comment** | **String** | An optional comment associated with dismissing the alert. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependabotUpdateAlertRequest.new(
  state: null,
  dismissed_reason: null,
  dismissed_comment: null
)
```

