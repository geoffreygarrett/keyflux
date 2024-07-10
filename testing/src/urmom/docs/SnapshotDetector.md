# OpenapiClient::SnapshotDetector

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the detector used. |  |
| **version** | **String** | The version of the detector used. |  |
| **url** | **String** | The url of the detector used. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SnapshotDetector.new(
  name: docker buildtime detector,
  version: 1.0.0,
  url: http://example.com/docker-buildtimer-detector
)
```

