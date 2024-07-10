# OpenapiClient::PageBuildStatus

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **status** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PageBuildStatus.new(
  url: https://api.github.com/repos/github/hello-world/pages/builds/latest,
  status: queued
)
```

