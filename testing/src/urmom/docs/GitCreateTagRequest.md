# OpenapiClient::GitCreateTagRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **tag** | **String** | The tag&#39;s name. This is typically a version (e.g., \&quot;v0.0.1\&quot;). |  |
| **message** | **String** | The tag message. |  |
| **object** | **String** | The SHA of the git object this is tagging. |  |
| **type** | **String** | The type of the object we&#39;re tagging. Normally this is a &#x60;commit&#x60; but it can also be a &#x60;tree&#x60; or a &#x60;blob&#x60;. |  |
| **tagger** | [**GitCreateTagRequestTagger**](GitCreateTagRequestTagger.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitCreateTagRequest.new(
  tag: null,
  message: null,
  object: null,
  type: null,
  tagger: null
)
```

