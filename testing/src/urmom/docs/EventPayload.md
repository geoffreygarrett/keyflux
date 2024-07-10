# OpenapiClient::EventPayload

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  | [optional] |
| **issue** | [**Issue**](Issue.md) |  | [optional] |
| **comment** | [**IssueComment**](IssueComment.md) |  | [optional] |
| **pages** | [**Array&lt;EventPayloadPagesInner&gt;**](EventPayloadPagesInner.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::EventPayload.new(
  action: null,
  issue: null,
  comment: null,
  pages: null
)
```

