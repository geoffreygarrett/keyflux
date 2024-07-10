# OpenapiClient::DeploymentProtectionRule

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The unique identifier for the deployment protection rule. |  |
| **node_id** | **String** | The node ID for the deployment protection rule. |  |
| **enabled** | **Boolean** | Whether the deployment protection rule is enabled for the environment. |  |
| **app** | [**CustomDeploymentRuleApp**](CustomDeploymentRuleApp.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DeploymentProtectionRule.new(
  id: 3515,
  node_id: MDQ6R2F0ZTM1MTU&#x3D;,
  enabled: true,
  app: null
)
```

