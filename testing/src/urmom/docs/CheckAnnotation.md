# OpenapiClient::CheckAnnotation

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **path** | **String** |  |  |
| **start_line** | **Integer** |  |  |
| **end_line** | **Integer** |  |  |
| **start_column** | **Integer** |  |  |
| **end_column** | **Integer** |  |  |
| **annotation_level** | **String** |  |  |
| **title** | **String** |  |  |
| **message** | **String** |  |  |
| **raw_details** | **String** |  |  |
| **blob_href** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CheckAnnotation.new(
  path: README.md,
  start_line: 2,
  end_line: 2,
  start_column: 5,
  end_column: 10,
  annotation_level: warning,
  title: Spell Checker,
  message: Check your spelling for &#39;banaas&#39;.,
  raw_details: Do you mean &#39;bananas&#39; or &#39;banana&#39;?,
  blob_href: null
)
```

