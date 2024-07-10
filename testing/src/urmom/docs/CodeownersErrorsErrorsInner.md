# OpenapiClient::CodeownersErrorsErrorsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **line** | **Integer** | The line number where this errors occurs. |  |
| **column** | **Integer** | The column number where this errors occurs. |  |
| **source** | **String** | The contents of the line where the error occurs. | [optional] |
| **kind** | **String** | The type of error. |  |
| **suggestion** | **String** | Suggested action to fix the error. This will usually be &#x60;null&#x60;, but is provided for some common errors. | [optional] |
| **message** | **String** | A human-readable description of the error, combining information from multiple fields, laid out for display in a monospaced typeface (for example, a command-line setting). |  |
| **path** | **String** | The path of the file where the error occured. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeownersErrorsErrorsInner.new(
  line: 7,
  column: 3,
  source: * user,
  kind: Invalid owner,
  suggestion: The pattern &#x60;/&#x60; will never match anything, did you mean &#x60;*&#x60; instead?,
  message: Invalid owner on line 7:

  * user
    ^,
  path: .github/CODEOWNERS
)
```

