# OpenapiClient::PendingDeploymentEnvironment

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The id of the environment. | [optional] |
| **node_id** | **String** |  | [optional] |
| **name** | **String** | The name of the environment. | [optional] |
| **url** | **String** |  | [optional] |
| **html_url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PendingDeploymentEnvironment.new(
  id: 56780428,
  node_id: MDExOkVudmlyb25tZW50NTY3ODA0Mjg&#x3D;,
  name: staging,
  url: https://api.github.com/repos/github/hello-world/environments/staging,
  html_url: https://github.com/github/hello-world/deployments/activity_log?environments_filter&#x3D;staging
)
```

