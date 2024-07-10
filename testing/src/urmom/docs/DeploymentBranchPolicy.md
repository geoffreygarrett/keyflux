# OpenapiClient::DeploymentBranchPolicy

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The unique identifier of the branch or tag policy. | [optional] |
| **node_id** | **String** |  | [optional] |
| **name** | **String** | The name pattern that branches or tags must match in order to deploy to the environment. | [optional] |
| **type** | **String** | Whether this rule targets a branch or tag. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DeploymentBranchPolicy.new(
  id: 361471,
  node_id: MDE2OkdhdGVCcmFuY2hQb2xpY3kzNjE0NzE&#x3D;,
  name: release/*,
  type: branch
)
```

