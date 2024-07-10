# OpenapiClient::CodeScanningAnalysis

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ref** | **String** | The Git reference, formatted as &#x60;refs/pull/&lt;number&gt;/merge&#x60;, &#x60;refs/pull/&lt;number&gt;/head&#x60;, &#x60;refs/heads/&lt;branch name&gt;&#x60; or simply &#x60;&lt;branch name&gt;&#x60;. |  |
| **commit_sha** | **String** | The SHA of the commit to which the analysis you are uploading relates. |  |
| **analysis_key** | **String** | Identifies the configuration under which the analysis was executed. For example, in GitHub Actions this includes the workflow filename and job name. |  |
| **environment** | **String** | Identifies the variable values associated with the environment in which this analysis was performed. |  |
| **category** | **String** | Identifies the configuration under which the analysis was executed. Used to distinguish between multiple analyses for the same tool and commit, but performed on different languages or different parts of the code. | [optional] |
| **error** | **String** |  |  |
| **created_at** | **Time** | The time that the analysis was created in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [readonly] |
| **results_count** | **Integer** | The total number of results in the analysis. |  |
| **rules_count** | **Integer** | The total number of rules used in the analysis. |  |
| **id** | **Integer** | Unique identifier for this analysis. |  |
| **url** | **String** | The REST API URL of the analysis resource. | [readonly] |
| **sarif_id** | **String** | An identifier for the upload. |  |
| **tool** | [**CodeScanningAnalysisTool**](CodeScanningAnalysisTool.md) |  |  |
| **deletable** | **Boolean** |  |  |
| **warning** | **String** | Warning generated when processing the analysis |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningAnalysis.new(
  ref: null,
  commit_sha: null,
  analysis_key: null,
  environment: null,
  category: null,
  error: error reading field xyz,
  created_at: null,
  results_count: null,
  rules_count: null,
  id: null,
  url: null,
  sarif_id: 6c81cd8e-b078-4ac3-a3be-1dad7dbd0b53,
  tool: null,
  deletable: null,
  warning: 123 results were ignored
)
```

