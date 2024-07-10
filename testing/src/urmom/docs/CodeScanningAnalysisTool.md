# OpenapiClient::CodeScanningAnalysisTool

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the tool used to generate the code scanning analysis. | [optional] |
| **version** | **String** | The version of the tool used to generate the code scanning analysis. | [optional] |
| **guid** | **String** | The GUID of the tool used to generate the code scanning analysis, if provided in the uploaded SARIF data. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningAnalysisTool.new(
  name: null,
  version: null,
  guid: null
)
```

