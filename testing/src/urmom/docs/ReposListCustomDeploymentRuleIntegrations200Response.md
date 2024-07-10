# OpenapiClient::ReposListCustomDeploymentRuleIntegrations200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_count** | **Integer** | The total number of custom deployment protection rule integrations available for this environment. | [optional] |
| **available_custom_deployment_protection_rule_integrations** | [**Array&lt;CustomDeploymentRuleApp&gt;**](CustomDeploymentRuleApp.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposListCustomDeploymentRuleIntegrations200Response.new(
  total_count: 35,
  available_custom_deployment_protection_rule_integrations: null
)
```

