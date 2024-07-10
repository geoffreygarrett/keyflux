# OpenapiClient::ReleaseNotesContent

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The generated name of the release |  |
| **body** | **String** | The generated body describing the contents of the release supporting markdown formatting |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReleaseNotesContent.new(
  name: Release v1.0.0 is now available!,
  body: null
)
```

