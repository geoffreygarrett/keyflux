# OpenapiClient::CodeScanningAlertInstance

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ref** | **String** | The Git reference, formatted as &#x60;refs/pull/&lt;number&gt;/merge&#x60;, &#x60;refs/pull/&lt;number&gt;/head&#x60;, &#x60;refs/heads/&lt;branch name&gt;&#x60; or simply &#x60;&lt;branch name&gt;&#x60;. | [optional] |
| **analysis_key** | **String** | Identifies the configuration under which the analysis was executed. For example, in GitHub Actions this includes the workflow filename and job name. | [optional] |
| **environment** | **String** | Identifies the variable values associated with the environment in which the analysis that generated this alert instance was performed, such as the language that was analyzed. | [optional] |
| **category** | **String** | Identifies the configuration under which the analysis was executed. Used to distinguish between multiple analyses for the same tool and commit, but performed on different languages or different parts of the code. | [optional] |
| **state** | [**CodeScanningAlertState**](CodeScanningAlertState.md) |  | [optional] |
| **commit_sha** | **String** |  | [optional] |
| **message** | [**CodeScanningAlertInstanceMessage**](CodeScanningAlertInstanceMessage.md) |  | [optional] |
| **location** | [**CodeScanningAlertLocation**](CodeScanningAlertLocation.md) |  | [optional] |
| **html_url** | **String** |  | [optional] |
| **classifications** | [**Array&lt;CodeScanningAlertClassification&gt;**](CodeScanningAlertClassification.md) | Classifications that have been applied to the file that triggered the alert. For example identifying it as documentation, or a generated file. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningAlertInstance.new(
  ref: null,
  analysis_key: null,
  environment: null,
  category: null,
  state: null,
  commit_sha: null,
  message: null,
  location: null,
  html_url: null,
  classifications: null
)
```

