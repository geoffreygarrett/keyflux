# OpenapiClient::PackageVersion

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the package version. |  |
| **name** | **String** | The name of the package version. |  |
| **url** | **String** |  |  |
| **package_html_url** | **String** |  |  |
| **html_url** | **String** |  | [optional] |
| **license** | **String** |  | [optional] |
| **description** | **String** |  | [optional] |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **deleted_at** | **Time** |  | [optional] |
| **metadata** | [**PackageVersionMetadata**](PackageVersionMetadata.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PackageVersion.new(
  id: 1,
  name: latest,
  url: https://api.github.com/orgs/github/packages/container/super-linter/versions/786068,
  package_html_url: https://github.com/orgs/github/packages/container/package/super-linter,
  html_url: https://github.com/orgs/github/packages/container/super-linter/786068,
  license: MIT,
  description: null,
  created_at: 2011-04-10T20:09:31Z,
  updated_at: 2014-03-03T18:58:10Z,
  deleted_at: 2014-03-03T18:58:10Z,
  metadata: null
)
```

