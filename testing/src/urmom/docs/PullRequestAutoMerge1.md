# OpenapiClient::PullRequestAutoMerge1

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **commit_message** | **String** | Commit message for the merge commit. |  |
| **commit_title** | **String** | Title for the merge commit message. |  |
| **enabled_by** | [**User5**](User5.md) |  |  |
| **merge_method** | **String** | The merge method to use. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullRequestAutoMerge1.new(
  commit_message: null,
  commit_title: null,
  enabled_by: null,
  merge_method: null
)
```

