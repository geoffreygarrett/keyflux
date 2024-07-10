# OpenapiClient::AutoMerge

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enabled_by** | [**SimpleUser**](SimpleUser.md) |  |  |
| **merge_method** | **String** | The merge method to use. |  |
| **commit_title** | **String** | Title for the merge commit message. |  |
| **commit_message** | **String** | Commit message for the merge commit. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AutoMerge.new(
  enabled_by: null,
  merge_method: null,
  commit_title: null,
  commit_message: null
)
```

