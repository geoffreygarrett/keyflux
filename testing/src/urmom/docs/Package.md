# OpenapiClient::Package

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the package. |  |
| **name** | **String** | The name of the package. |  |
| **package_type** | **String** |  |  |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **version_count** | **Integer** | The number of versions of the package. |  |
| **visibility** | **String** |  |  |
| **owner** | [**NullableSimpleUser**](NullableSimpleUser.md) |  | [optional] |
| **repository** | [**NullableMinimalRepository**](NullableMinimalRepository.md) |  | [optional] |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Package.new(
  id: 1,
  name: super-linter,
  package_type: docker,
  url: https://api.github.com/orgs/github/packages/container/super-linter,
  html_url: https://github.com/orgs/github/packages/container/package/super-linter,
  version_count: 1,
  visibility: private,
  owner: null,
  repository: null,
  created_at: null,
  updated_at: null
)
```

