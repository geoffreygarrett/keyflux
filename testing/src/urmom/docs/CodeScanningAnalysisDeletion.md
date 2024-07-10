# OpenapiClient::CodeScanningAnalysisDeletion

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **next_analysis_url** | **String** | Next deletable analysis in chain, without last analysis deletion confirmation | [readonly] |
| **confirm_delete_url** | **String** | Next deletable analysis in chain, with last analysis deletion confirmation | [readonly] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningAnalysisDeletion.new(
  next_analysis_url: null,
  confirm_delete_url: null
)
```

