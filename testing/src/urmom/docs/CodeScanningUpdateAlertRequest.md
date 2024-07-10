# OpenapiClient::CodeScanningUpdateAlertRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | [**CodeScanningAlertSetState**](CodeScanningAlertSetState.md) |  |  |
| **dismissed_reason** | [**CodeScanningAlertDismissedReason**](CodeScanningAlertDismissedReason.md) |  | [optional] |
| **dismissed_comment** | **String** | The dismissal comment associated with the dismissal of the alert. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningUpdateAlertRequest.new(
  state: null,
  dismissed_reason: null,
  dismissed_comment: null
)
```

