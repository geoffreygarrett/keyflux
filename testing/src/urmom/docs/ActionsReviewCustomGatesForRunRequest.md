# OpenapiClient::ActionsReviewCustomGatesForRunRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **environment_name** | **String** | The name of the environment to approve or reject. |  |
| **comment** | **String** | Optional comment to include with the review. |  |
| **state** | **String** | Whether to approve or reject deployment to the specified environments. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsReviewCustomGatesForRunRequest.new(
  environment_name: null,
  comment: null,
  state: null
)
```

