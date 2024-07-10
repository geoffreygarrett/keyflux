# OpenapiClient::ReviewCustomGatesCommentRequired

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **environment_name** | **String** | The name of the environment to approve or reject. |  |
| **comment** | **String** | Comment associated with the pending deployment protection rule. **Required when state is not provided.** |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReviewCustomGatesCommentRequired.new(
  environment_name: null,
  comment: null
)
```

