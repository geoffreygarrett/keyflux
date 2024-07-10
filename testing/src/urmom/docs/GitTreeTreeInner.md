# OpenapiClient::GitTreeTreeInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **path** | **String** |  | [optional] |
| **mode** | **String** |  | [optional] |
| **type** | **String** |  | [optional] |
| **sha** | **String** |  | [optional] |
| **size** | **Integer** |  | [optional] |
| **url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitTreeTreeInner.new(
  path: test/file.rb,
  mode: 040000,
  type: tree,
  sha: 23f6827669e43831def8a7ad935069c8bd418261,
  size: 12,
  url: https://api.github.com/repos/owner-482f3203ecf01f67e9deb18e/BBB_Private_Repo/git/blobs/23f6827669e43831def8a7ad935069c8bd418261
)
```

