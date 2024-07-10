# OpenapiClient::RepositoryAdvisoryCreateVulnerabilitiesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **package** | [**RepositoryAdvisoryCreateVulnerabilitiesInnerPackage**](RepositoryAdvisoryCreateVulnerabilitiesInnerPackage.md) |  |  |
| **vulnerable_version_range** | **String** | The range of the package versions affected by the vulnerability. | [optional] |
| **patched_versions** | **String** | The package version(s) that resolve the vulnerability. | [optional] |
| **vulnerable_functions** | **Array&lt;String&gt;** | The functions in the package that are affected. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryAdvisoryCreateVulnerabilitiesInner.new(
  package: null,
  vulnerable_version_range: null,
  patched_versions: null,
  vulnerable_functions: null
)
```

