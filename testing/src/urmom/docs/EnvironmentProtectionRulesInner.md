# OpenapiClient::EnvironmentProtectionRulesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **type** | **String** |  |  |
| **wait_timer** | **Integer** | The amount of time to delay a job after the job is initially triggered. The time (in minutes) must be an integer between 0 and 43,200 (30 days). | [optional] |
| **prevent_self_review** | **Boolean** | Whether deployments to this environment can be approved by the user who created the deployment. | [optional] |
| **reviewers** | [**Array&lt;PendingDeploymentReviewersInner&gt;**](PendingDeploymentReviewersInner.md) | The people or teams that may approve jobs that reference the environment. You can list up to six users or teams as reviewers. The reviewers must have at least read access to the repository. Only one of the required reviewers needs to approve the job for it to proceed. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::EnvironmentProtectionRulesInner.new(
  id: 3515,
  node_id: MDQ6R2F0ZTM1MTU&#x3D;,
  type: branch_policy,
  wait_timer: 30,
  prevent_self_review: false,
  reviewers: null
)
```

