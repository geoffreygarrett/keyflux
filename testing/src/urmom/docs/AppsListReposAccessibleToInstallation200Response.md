# OpenapiClient::AppsListReposAccessibleToInstallation200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_count** | **Integer** |  |  |
| **repositories** | [**Array&lt;Repository&gt;**](Repository.md) |  |  |
| **repository_selection** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AppsListReposAccessibleToInstallation200Response.new(
  total_count: null,
  repositories: null,
  repository_selection: selected
)
```

