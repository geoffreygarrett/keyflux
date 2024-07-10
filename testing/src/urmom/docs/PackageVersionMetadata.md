# OpenapiClient::PackageVersionMetadata

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **package_type** | **String** |  |  |
| **container** | [**ContainerMetadata**](ContainerMetadata.md) |  | [optional] |
| **docker** | [**DockerMetadata**](DockerMetadata.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PackageVersionMetadata.new(
  package_type: docker,
  container: null,
  docker: null
)
```

