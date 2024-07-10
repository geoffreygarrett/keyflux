# OpenapiClient::ChecksCreateRequestOutputAnnotationsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **path** | **String** | The path of the file to add an annotation to. For example, &#x60;assets/css/main.css&#x60;. |  |
| **start_line** | **Integer** | The start line of the annotation. Line numbers start at 1. |  |
| **end_line** | **Integer** | The end line of the annotation. |  |
| **start_column** | **Integer** | The start column of the annotation. Annotations only support &#x60;start_column&#x60; and &#x60;end_column&#x60; on the same line. Omit this parameter if &#x60;start_line&#x60; and &#x60;end_line&#x60; have different values. Column numbers start at 1. | [optional] |
| **end_column** | **Integer** | The end column of the annotation. Annotations only support &#x60;start_column&#x60; and &#x60;end_column&#x60; on the same line. Omit this parameter if &#x60;start_line&#x60; and &#x60;end_line&#x60; have different values. | [optional] |
| **annotation_level** | **String** | The level of the annotation. |  |
| **message** | **String** | A short description of the feedback for these lines of code. The maximum size is 64 KB. |  |
| **title** | **String** | The title that represents the annotation. The maximum size is 255 characters. | [optional] |
| **raw_details** | **String** | Details about this annotation. The maximum size is 64 KB. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ChecksCreateRequestOutputAnnotationsInner.new(
  path: null,
  start_line: null,
  end_line: null,
  start_column: null,
  end_column: null,
  annotation_level: null,
  message: null,
  title: null,
  raw_details: null
)
```

