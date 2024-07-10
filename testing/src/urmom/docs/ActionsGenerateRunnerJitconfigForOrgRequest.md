# OpenapiClient::ActionsGenerateRunnerJitconfigForOrgRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the new runner. |  |
| **runner_group_id** | **Integer** | The ID of the runner group to register the runner to. |  |
| **labels** | **Array&lt;String&gt;** | The names of the custom labels to add to the runner. **Minimum items**: 1. **Maximum items**: 100. |  |
| **work_folder** | **String** | The working directory to be used for job execution, relative to the runner install directory. | [optional][default to &#39;_work&#39;] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsGenerateRunnerJitconfigForOrgRequest.new(
  name: null,
  runner_group_id: null,
  labels: null,
  work_folder: null
)
```

