# OpenapiClient::PendingDeployment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **environment** | [**PendingDeploymentEnvironment**](PendingDeploymentEnvironment.md) |  |  |
| **wait_timer** | **Integer** | The set duration of the wait timer |  |
| **wait_timer_started_at** | **Time** | The time that the wait timer began. |  |
| **current_user_can_approve** | **Boolean** | Whether the currently authenticated user can approve the deployment |  |
| **reviewers** | [**Array&lt;PendingDeploymentReviewersInner&gt;**](PendingDeploymentReviewersInner.md) | The people or teams that may approve jobs that reference the environment. You can list up to six users or teams as reviewers. The reviewers must have at least read access to the repository. Only one of the required reviewers needs to approve the job for it to proceed. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PendingDeployment.new(
  environment: null,
  wait_timer: 30,
  wait_timer_started_at: 2020-11-23T22:00:40Z,
  current_user_can_approve: true,
  reviewers: null
)
```

