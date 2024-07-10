# OpenapiClient::PullsMergeRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **commit_title** | **String** | Title for the automatic commit message. | [optional] |
| **commit_message** | **String** | Extra detail to append to automatic commit message. | [optional] |
| **sha** | **String** | SHA that pull request head must match to allow merge. | [optional] |
| **merge_method** | **String** | The merge method to use. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PullsMergeRequest.new(
  commit_title: null,
  commit_message: null,
  sha: null,
  merge_method: null
)
```

