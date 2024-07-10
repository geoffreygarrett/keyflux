# OpenapiClient::EnvironmentProtectionRulesInnerAnyOf1

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **prevent_self_review** | **Boolean** | Whether deployments to this environment can be approved by the user who created the deployment. | [optional] |
| **type** | **String** |  |  |
| **reviewers** | [**Array&lt;PendingDeploymentReviewersInner&gt;**](PendingDeploymentReviewersInner.md) | The people or teams that may approve jobs that reference the environment. You can list up to six users or teams as reviewers. The reviewers must have at least read access to the repository. Only one of the required reviewers needs to approve the job for it to proceed. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::EnvironmentProtectionRulesInnerAnyOf1.new(
  id: 3755,
  node_id: MDQ6R2F0ZTM3NTU&#x3D;,
  prevent_self_review: false,
  type: required_reviewers,
  reviewers: null
)
```

