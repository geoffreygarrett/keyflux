# OpenapiClient::Tag

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  |  |
| **commit** | [**ShortBranchCommit**](ShortBranchCommit.md) |  |  |
| **zipball_url** | **String** |  |  |
| **tarball_url** | **String** |  |  |
| **node_id** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Tag.new(
  name: v0.1,
  commit: null,
  zipball_url: https://github.com/octocat/Hello-World/zipball/v0.1,
  tarball_url: https://github.com/octocat/Hello-World/tarball/v0.1,
  node_id: null
)
```

