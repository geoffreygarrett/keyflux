# OpenapiClient::GistsCreateRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **description** | **String** | Description of the gist | [optional] |
| **files** | [**Hash&lt;String, GistsCreateRequestFilesValue&gt;**](GistsCreateRequestFilesValue.md) | Names and content for the files that make up the gist |  |
| **public** | [**GistsCreateRequestPublic**](GistsCreateRequestPublic.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GistsCreateRequest.new(
  description: Example Ruby script,
  files: {&quot;hello.rb&quot;:{&quot;content&quot;:&quot;puts \&quot;Hello, World!\&quot;&quot;}},
  public: null
)
```

