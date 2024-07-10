# OpenapiClient::WebhookDeploymentStatusCreatedDeploymentStatus

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created_at** | **String** |  |  |
| **creator** | [**User**](User.md) |  |  |
| **deployment_url** | **String** |  |  |
| **description** | **String** | The optional human-readable description added to the status. |  |
| **environment** | **String** |  |  |
| **environment_url** | **String** |  | [optional] |
| **id** | **Integer** |  |  |
| **log_url** | **String** |  | [optional] |
| **node_id** | **String** |  |  |
| **performed_via_github_app** | [**App7**](App7.md) |  | [optional] |
| **repository_url** | **String** |  |  |
| **state** | **String** | The new state. Can be &#x60;pending&#x60;, &#x60;success&#x60;, &#x60;failure&#x60;, or &#x60;error&#x60;. |  |
| **target_url** | **String** | The optional link added to the status. |  |
| **updated_at** | **String** |  |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDeploymentStatusCreatedDeploymentStatus.new(
  created_at: null,
  creator: null,
  deployment_url: null,
  description: null,
  environment: null,
  environment_url: null,
  id: null,
  log_url: null,
  node_id: null,
  performed_via_github_app: null,
  repository_url: null,
  state: null,
  target_url: null,
  updated_at: null,
  url: null
)
```

