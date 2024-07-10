# OpenapiClient::Environment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The id of the environment. |  |
| **node_id** | **String** |  |  |
| **name** | **String** | The name of the environment. |  |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **created_at** | **Time** | The time that the environment was created, in ISO 8601 format. |  |
| **updated_at** | **Time** | The time that the environment was last updated, in ISO 8601 format. |  |
| **protection_rules** | [**Array&lt;EnvironmentProtectionRulesInner&gt;**](EnvironmentProtectionRulesInner.md) | Built-in deployment protection rules for the environment. | [optional] |
| **deployment_branch_policy** | [**DeploymentBranchPolicySettings**](DeploymentBranchPolicySettings.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Environment.new(
  id: 56780428,
  node_id: MDExOkVudmlyb25tZW50NTY3ODA0Mjg&#x3D;,
  name: staging,
  url: https://api.github.com/repos/github/hello-world/environments/staging,
  html_url: https://github.com/github/hello-world/deployments/activity_log?environments_filter&#x3D;staging,
  created_at: 2020-11-23T22:00:40Z,
  updated_at: 2020-11-23T22:00:40Z,
  protection_rules: null,
  deployment_branch_policy: null
)
```

