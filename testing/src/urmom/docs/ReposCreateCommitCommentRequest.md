# OpenapiClient::ReposCreateCommitCommentRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **body** | **String** | The contents of the comment. |  |
| **path** | **String** | Relative path of the file to comment on. | [optional] |
| **position** | **Integer** | Line index in the diff to comment on. | [optional] |
| **line** | **Integer** | **Deprecated**. Use **position** parameter instead. Line number in the file to comment on. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreateCommitCommentRequest.new(
  body: null,
  path: null,
  position: null,
  line: null
)
```

