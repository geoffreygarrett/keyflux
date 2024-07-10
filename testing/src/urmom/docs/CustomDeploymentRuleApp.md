# OpenapiClient::CustomDeploymentRuleApp

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The unique identifier of the deployment protection rule integration. |  |
| **slug** | **String** | The slugified name of the deployment protection rule integration. |  |
| **integration_url** | **String** | The URL for the endpoint to get details about the app. |  |
| **node_id** | **String** | The node ID for the deployment protection rule integration. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CustomDeploymentRuleApp.new(
  id: 3515,
  slug: my-custom-app,
  integration_url: https://api.github.com/apps/custom-app-slug,
  node_id: MDQ6R2F0ZTM1MTU&#x3D;
)
```

