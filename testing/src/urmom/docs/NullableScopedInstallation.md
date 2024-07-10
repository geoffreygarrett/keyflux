# OpenapiClient::NullableScopedInstallation

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **permissions** | [**AppPermissions**](AppPermissions.md) |  |  |
| **repository_selection** | **String** | Describe whether all repositories have been selected or there&#39;s a selection involved |  |
| **single_file_name** | **String** |  |  |
| **has_multiple_single_files** | **Boolean** |  | [optional] |
| **single_file_paths** | **Array&lt;String&gt;** |  | [optional] |
| **repositories_url** | **String** |  |  |
| **account** | [**SimpleUser**](SimpleUser.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::NullableScopedInstallation.new(
  permissions: null,
  repository_selection: null,
  single_file_name: config.yaml,
  has_multiple_single_files: true,
  single_file_paths: [&quot;config.yml&quot;,&quot;.github/issue_TEMPLATE.md&quot;],
  repositories_url: https://api.github.com/users/octocat/repos,
  account: null
)
```

