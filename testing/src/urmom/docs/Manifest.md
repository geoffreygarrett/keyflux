# OpenapiClient::Manifest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the manifest. |  |
| **file** | [**ManifestFile**](ManifestFile.md) |  | [optional] |
| **metadata** | [**Hash&lt;String, Metadata1&gt;**](Metadata1.md) | User-defined metadata to store domain-specific information limited to 8 keys with scalar values. | [optional] |
| **resolved** | [**Hash&lt;String, Dependency&gt;**](Dependency.md) | A collection of resolved package dependencies. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Manifest.new(
  name: package-lock.json,
  file: null,
  metadata: null,
  resolved: null
)
```

