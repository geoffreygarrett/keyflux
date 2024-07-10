# OpenapiClient::Runner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The id of the runner. |  |
| **runner_group_id** | **Integer** | The id of the runner group. | [optional] |
| **name** | **String** | The name of the runner. |  |
| **os** | **String** | The Operating System of the runner. |  |
| **status** | **String** | The status of the runner. |  |
| **busy** | **Boolean** |  |  |
| **labels** | [**Array&lt;RunnerLabel&gt;**](RunnerLabel.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Runner.new(
  id: 5,
  runner_group_id: 1,
  name: iMac,
  os: macos,
  status: online,
  busy: null,
  labels: null
)
```

