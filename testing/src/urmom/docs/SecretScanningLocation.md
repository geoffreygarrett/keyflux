# OpenapiClient::SecretScanningLocation

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **type** | **String** | The location type. Because secrets may be found in different types of resources (ie. code, comments, issues, pull requests, discussions), this field identifies the type of resource where the secret was found. | [optional] |
| **details** | [**SecretScanningLocationDetails**](SecretScanningLocationDetails.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocation.new(
  type: commit,
  details: null
)
```

