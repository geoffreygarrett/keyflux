# OpenapiClient::GitTag

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **node_id** | **String** |  |  |
| **tag** | **String** | Name of the tag |  |
| **sha** | **String** |  |  |
| **url** | **String** | URL for the tag |  |
| **message** | **String** | Message describing the purpose of the tag |  |
| **tagger** | [**GitTagTagger**](GitTagTagger.md) |  |  |
| **object** | [**GitTagObject**](GitTagObject.md) |  |  |
| **verification** | [**Verification**](Verification.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitTag.new(
  node_id: MDM6VGFnOTQwYmQzMzYyNDhlZmFlMGY5ZWU1YmM3YjJkNWM5ODU4ODdiMTZhYw&#x3D;&#x3D;,
  tag: v0.0.1,
  sha: 940bd336248efae0f9ee5bc7b2d5c985887b16ac,
  url: https://api.github.com/repositories/42/git/tags/940bd336248efae0f9ee5bc7b2d5c985887b16ac,
  message: Initial public release,
  tagger: null,
  object: null,
  verification: null
)
```

