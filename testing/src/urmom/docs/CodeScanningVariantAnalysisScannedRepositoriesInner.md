# OpenapiClient::CodeScanningVariantAnalysisScannedRepositoriesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **repository** | [**CodeScanningVariantAnalysisRepository**](CodeScanningVariantAnalysisRepository.md) |  |  |
| **analysis_status** | [**CodeScanningVariantAnalysisStatus**](CodeScanningVariantAnalysisStatus.md) |  |  |
| **result_count** | **Integer** | The number of results in the case of a successful analysis. This is only available for successful analyses. | [optional] |
| **artifact_size_in_bytes** | **Integer** | The size of the artifact. This is only available for successful analyses. | [optional] |
| **failure_message** | **String** | The reason of the failure of this repo task. This is only available if the repository task has failed. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningVariantAnalysisScannedRepositoriesInner.new(
  repository: null,
  analysis_status: null,
  result_count: null,
  artifact_size_in_bytes: null,
  failure_message: null
)
```

