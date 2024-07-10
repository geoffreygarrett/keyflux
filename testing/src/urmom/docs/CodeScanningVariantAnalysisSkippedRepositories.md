# OpenapiClient::CodeScanningVariantAnalysisSkippedRepositories

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **access_mismatch_repos** | [**CodeScanningVariantAnalysisSkippedRepoGroup**](CodeScanningVariantAnalysisSkippedRepoGroup.md) |  |  |
| **not_found_repos** | [**CodeScanningVariantAnalysisSkippedRepositoriesNotFoundRepos**](CodeScanningVariantAnalysisSkippedRepositoriesNotFoundRepos.md) |  |  |
| **no_codeql_db_repos** | [**CodeScanningVariantAnalysisSkippedRepoGroup**](CodeScanningVariantAnalysisSkippedRepoGroup.md) |  |  |
| **over_limit_repos** | [**CodeScanningVariantAnalysisSkippedRepoGroup**](CodeScanningVariantAnalysisSkippedRepoGroup.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningVariantAnalysisSkippedRepositories.new(
  access_mismatch_repos: null,
  not_found_repos: null,
  no_codeql_db_repos: null,
  over_limit_repos: null
)
```

