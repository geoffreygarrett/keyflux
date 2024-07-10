# OpenapiClient::JobStepsInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **status** | **String** | The phase of the lifecycle that the job is currently in. |  |
| **conclusion** | **String** | The outcome of the job. |  |
| **name** | **String** | The name of the job. |  |
| **number** | **Integer** |  |  |
| **started_at** | **Time** | The time that the step started, in ISO 8601 format. | [optional] |
| **completed_at** | **Time** | The time that the job finished, in ISO 8601 format. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::JobStepsInner.new(
  status: queued,
  conclusion: success,
  name: test-coverage,
  number: 1,
  started_at: 2019-08-08T08:00-07:00,
  completed_at: 2019-08-08T08:00-07:00
)
```

