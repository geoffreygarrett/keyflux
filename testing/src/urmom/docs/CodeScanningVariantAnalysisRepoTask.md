# OpenapiClient::CodeScanningVariantAnalysisRepoTask

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **repository** | [**SimpleRepository**](SimpleRepository.md) |  |  |
| **analysis_status** | [**CodeScanningVariantAnalysisStatus**](CodeScanningVariantAnalysisStatus.md) |  |  |
| **artifact_size_in_bytes** | **Integer** | The size of the artifact. This is only available for successful analyses. | [optional] |
| **result_count** | **Integer** | The number of results in the case of a successful analysis. This is only available for successful analyses. | [optional] |
| **failure_message** | **String** | The reason of the failure of this repo task. This is only available if the repository task has failed. | [optional] |
| **database_commit_sha** | **String** | The SHA of the commit the CodeQL database was built against. This is only available for successful analyses. | [optional] |
| **source_location_prefix** | **String** | The source location prefix to use. This is only available for successful analyses. | [optional] |
| **artifact_url** | **String** | The URL of the artifact. This is only available for successful analyses. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningVariantAnalysisRepoTask.new(
  repository: null,
  analysis_status: null,
  artifact_size_in_bytes: null,
  result_count: null,
  failure_message: null,
  database_commit_sha: null,
  source_location_prefix: null,
  artifact_url: null
)
```

