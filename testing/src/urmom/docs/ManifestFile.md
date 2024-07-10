# OpenapiClient::ManifestFile

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **source_location** | **String** | The path of the manifest file relative to the root of the Git repository. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ManifestFile.new(
  source_location: /src/build/package-lock.json
)
```

