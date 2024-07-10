# OpenapiClient::EnvironmentApprovals

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **environments** | [**Array&lt;EnvironmentApprovalsEnvironmentsInner&gt;**](EnvironmentApprovalsEnvironmentsInner.md) | The list of environments that were approved or rejected |  |
| **state** | **String** | Whether deployment to the environment(s) was approved or rejected or pending (with comments) |  |
| **user** | [**SimpleUser**](SimpleUser.md) |  |  |
| **comment** | **String** | The comment submitted with the deployment review |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::EnvironmentApprovals.new(
  environments: null,
  state: approved,
  user: null,
  comment: Ship it!
)
```

