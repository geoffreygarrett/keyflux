# OpenapiClient::CodeScanningVariantAnalysis

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The ID of the variant analysis. |  |
| **controller_repo** | [**SimpleRepository**](SimpleRepository.md) |  |  |
| **actor** | [**SimpleUser**](SimpleUser.md) |  |  |
| **query_language** | [**CodeScanningVariantAnalysisLanguage**](CodeScanningVariantAnalysisLanguage.md) |  |  |
| **query_pack_url** | **String** | The download url for the query pack. |  |
| **created_at** | **Time** | The date and time at which the variant analysis was created, in ISO 8601 format&#39;:&#39; YYYY-MM-DDTHH:MM:SSZ. | [optional] |
| **updated_at** | **Time** | The date and time at which the variant analysis was last updated, in ISO 8601 format&#39;:&#39; YYYY-MM-DDTHH:MM:SSZ. | [optional] |
| **completed_at** | **Time** | The date and time at which the variant analysis was completed, in ISO 8601 format&#39;:&#39; YYYY-MM-DDTHH:MM:SSZ. Will be null if the variant analysis has not yet completed or this information is not available. | [optional] |
| **status** | **String** |  |  |
| **actions_workflow_run_id** | **Integer** | The GitHub Actions workflow run used to execute this variant analysis. This is only available if the workflow run has started. | [optional] |
| **failure_reason** | **String** | The reason for a failure of the variant analysis. This is only available if the variant analysis has failed. | [optional] |
| **scanned_repositories** | [**Array&lt;CodeScanningVariantAnalysisScannedRepositoriesInner&gt;**](CodeScanningVariantAnalysisScannedRepositoriesInner.md) |  | [optional] |
| **skipped_repositories** | [**CodeScanningVariantAnalysisSkippedRepositories**](CodeScanningVariantAnalysisSkippedRepositories.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningVariantAnalysis.new(
  id: null,
  controller_repo: null,
  actor: null,
  query_language: null,
  query_pack_url: null,
  created_at: null,
  updated_at: null,
  completed_at: null,
  status: null,
  actions_workflow_run_id: null,
  failure_reason: null,
  scanned_repositories: null,
  skipped_repositories: null
)
```

