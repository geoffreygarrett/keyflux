# OpenapiClient::RepositoryRuleRequiredDeploymentsParameters

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **required_deployment_environments** | **Array&lt;String&gt;** | The environments that must be successfully deployed to before branches can be merged. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryRuleRequiredDeploymentsParameters.new(
  required_deployment_environments: null
)
```

