# OpenapiClient::DependabotAlertWithRepositoryDependency

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **package** | [**DependabotAlertPackage**](DependabotAlertPackage.md) |  | [optional] |
| **manifest_path** | **String** | The full path to the dependency manifest file, relative to the root of the repository. | [optional][readonly] |
| **scope** | **String** | The execution scope of the vulnerable dependency. | [optional][readonly] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependabotAlertWithRepositoryDependency.new(
  package: null,
  manifest_path: null,
  scope: null
)
```

