# OpenapiClient::AlertInstance

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **analysis_key** | **String** | Identifies the configuration under which the analysis was executed. For example, in GitHub Actions this includes the workflow filename and job name. |  |
| **category** | **String** | Identifies the configuration under which the analysis was executed. | [optional] |
| **classifications** | **Array&lt;String&gt;** |  | [optional] |
| **commit_sha** | **String** |  | [optional] |
| **environment** | **String** | Identifies the variable values associated with the environment in which the analysis that generated this alert instance was performed, such as the language that was analyzed. |  |
| **location** | [**AlertInstanceLocation**](AlertInstanceLocation.md) |  | [optional] |
| **message** | [**CodeScanningAlertInstanceMessage**](CodeScanningAlertInstanceMessage.md) |  | [optional] |
| **ref** | **String** | The full Git reference, formatted as &#x60;refs/heads/&lt;branch name&gt;&#x60;. |  |
| **state** | **String** | State of a code scanning alert. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::AlertInstance.new(
  analysis_key: null,
  category: null,
  classifications: null,
  commit_sha: null,
  environment: null,
  location: null,
  message: null,
  ref: null,
  state: null
)
```

