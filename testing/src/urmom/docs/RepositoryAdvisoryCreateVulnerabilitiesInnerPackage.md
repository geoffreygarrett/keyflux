# OpenapiClient::RepositoryAdvisoryCreateVulnerabilitiesInnerPackage

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ecosystem** | [**SecurityAdvisoryEcosystems**](SecurityAdvisoryEcosystems.md) |  |  |
| **name** | **String** | The unique package name within its ecosystem. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryAdvisoryCreateVulnerabilitiesInnerPackage.new(
  ecosystem: null,
  name: null
)
```

