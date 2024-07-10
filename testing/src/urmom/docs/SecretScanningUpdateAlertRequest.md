# OpenapiClient::SecretScanningUpdateAlertRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | [**SecretScanningAlertState**](SecretScanningAlertState.md) |  |  |
| **resolution** | [**SecretScanningAlertResolution**](SecretScanningAlertResolution.md) |  | [optional] |
| **resolution_comment** | **String** | An optional comment when closing an alert. Cannot be updated or deleted. Must be &#x60;null&#x60; when changing &#x60;state&#x60; to &#x60;open&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningUpdateAlertRequest.new(
  state: null,
  resolution: null,
  resolution_comment: null
)
```

