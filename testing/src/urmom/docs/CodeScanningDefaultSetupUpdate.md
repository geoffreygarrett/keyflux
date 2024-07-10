# OpenapiClient::CodeScanningDefaultSetupUpdate

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | **String** | The desired state of code scanning default setup. | [optional] |
| **query_suite** | **String** | CodeQL query suite to be used. | [optional] |
| **languages** | **Array&lt;String&gt;** | CodeQL languages to be analyzed. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningDefaultSetupUpdate.new(
  state: null,
  query_suite: null,
  languages: null
)
```

