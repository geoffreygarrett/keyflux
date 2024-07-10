# OpenapiClient::ReviewCustomGatesStateRequired

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **environment_name** | **String** | The name of the environment to approve or reject. |  |
| **state** | **String** | Whether to approve or reject deployment to the specified environments. |  |
| **comment** | **String** | Optional comment to include with the review. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReviewCustomGatesStateRequired.new(
  environment_name: null,
  state: null,
  comment: null
)
```

