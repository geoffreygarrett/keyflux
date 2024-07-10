# OpenapiClient::CodeScanningVariantAnalysisSkippedRepoGroup

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **repository_count** | **Integer** | The total number of repositories that were skipped for this reason. |  |
| **repositories** | [**Array&lt;CodeScanningVariantAnalysisRepository&gt;**](CodeScanningVariantAnalysisRepository.md) | A list of repositories that were skipped. This list may not include all repositories that were skipped. This is only available when the repository was found and the user has access to it. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningVariantAnalysisSkippedRepoGroup.new(
  repository_count: 2,
  repositories: null
)
```

