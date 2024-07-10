# OpenapiClient::ReposListDeploymentBranchPolicies200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_count** | **Integer** | The number of deployment branch policies for the environment. |  |
| **branch_policies** | [**Array&lt;DeploymentBranchPolicy&gt;**](DeploymentBranchPolicy.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposListDeploymentBranchPolicies200Response.new(
  total_count: 2,
  branch_policies: null
)
```

