# OpenapiClient::ActionsReviewPendingDeploymentsForRunRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **environment_ids** | **Array&lt;Integer&gt;** | The list of environment ids to approve or reject |  |
| **state** | **String** | Whether to approve or reject deployment to the specified environments. |  |
| **comment** | **String** | A comment to accompany the deployment review |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsReviewPendingDeploymentsForRunRequest.new(
  environment_ids: [161171787,161171795],
  state: approved,
  comment: Ship it!
)
```

