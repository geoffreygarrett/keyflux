# OpenapiClient::CodeScanningVariantAnalysisSkippedRepositoriesNotFoundRepos

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **repository_count** | **Integer** | The total number of repositories that were skipped for this reason. |  |
| **repository_full_names** | **Array&lt;String&gt;** | A list of full repository names that were skipped. This list may not include all repositories that were skipped. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningVariantAnalysisSkippedRepositoriesNotFoundRepos.new(
  repository_count: 2,
  repository_full_names: null
)
```

