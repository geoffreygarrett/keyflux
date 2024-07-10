# OpenapiClient::ProjectsCreateCardRequestOneOf1

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **content_id** | **Integer** | The unique identifier of the content associated with the card |  |
| **content_type** | **String** | The piece of content associated with the card |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectsCreateCardRequestOneOf1.new(
  content_id: 42,
  content_type: PullRequest
)
```

