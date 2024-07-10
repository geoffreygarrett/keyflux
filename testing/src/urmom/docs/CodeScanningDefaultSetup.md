# OpenapiClient::CodeScanningDefaultSetup

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | **String** | Code scanning default setup has been configured or not. | [optional] |
| **languages** | **Array&lt;String&gt;** | Languages to be analyzed. | [optional] |
| **query_suite** | **String** | CodeQL query suite to be used. | [optional] |
| **updated_at** | **Time** | Timestamp of latest configuration update. | [optional] |
| **schedule** | **String** | The frequency of the periodic analysis. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningDefaultSetup.new(
  state: null,
  languages: null,
  query_suite: null,
  updated_at: 2023-12-06T14:20:20Z,
  schedule: null
)
```

