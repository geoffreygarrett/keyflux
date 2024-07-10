# OpenapiClient::ReposGetAllDeploymentProtectionRules200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_count** | **Integer** | The number of enabled custom deployment protection rules for this environment | [optional] |
| **custom_deployment_protection_rules** | [**Array&lt;DeploymentProtectionRule&gt;**](DeploymentProtectionRule.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposGetAllDeploymentProtectionRules200Response.new(
  total_count: 10,
  custom_deployment_protection_rules: null
)
```

