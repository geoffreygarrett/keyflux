# OpenapiClient::MergeGroup

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **head_sha** | **String** | The SHA of the merge group. |  |
| **head_ref** | **String** | The full ref of the merge group. |  |
| **base_sha** | **String** | The SHA of the merge group&#39;s parent commit. |  |
| **base_ref** | **String** | The full ref of the branch the merge group will be merged into. |  |
| **head_commit** | [**SimpleCommit**](SimpleCommit.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MergeGroup.new(
  head_sha: null,
  head_ref: null,
  base_sha: null,
  base_ref: null,
  head_commit: null
)
```

