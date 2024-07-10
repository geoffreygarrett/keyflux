# OpenapiClient::InstallationToken

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **token** | **String** |  |  |
| **expires_at** | **String** |  |  |
| **permissions** | [**AppPermissions**](AppPermissions.md) |  | [optional] |
| **repository_selection** | **String** |  | [optional] |
| **repositories** | [**Array&lt;Repository&gt;**](Repository.md) |  | [optional] |
| **single_file** | **String** |  | [optional] |
| **has_multiple_single_files** | **Boolean** |  | [optional] |
| **single_file_paths** | **Array&lt;String&gt;** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::InstallationToken.new(
  token: null,
  expires_at: null,
  permissions: null,
  repository_selection: null,
  repositories: null,
  single_file: README.md,
  has_multiple_single_files: true,
  single_file_paths: [&quot;config.yml&quot;,&quot;.github/issue_TEMPLATE.md&quot;]
)
```

