# OpenapiClient::DeploymentStatus

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **state** | **String** | The state of the status. |  |
| **creator** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **description** | **String** | A short description of the status. | [default to &#39;&#39;] |
| **environment** | **String** | The environment of the deployment that the status is for. | [optional][default to &#39;&#39;] |
| **target_url** | **String** | Deprecated: the URL to associate with this status. | [default to &#39;&#39;] |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **deployment_url** | **String** |  |  |
| **repository_url** | **String** |  |  |
| **environment_url** | **String** | The URL for accessing your environment. | [optional][default to &#39;&#39;] |
| **log_url** | **String** | The URL to associate with this status. | [optional][default to &#39;&#39;] |
| **performed_via_github_app** | [**NullableIntegration**](NullableIntegration.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DeploymentStatus.new(
  url: https://api.github.com/repos/octocat/example/deployments/42/statuses/1,
  id: 1,
  node_id: MDE2OkRlcGxveW1lbnRTdGF0dXMx,
  state: success,
  creator: null,
  description: Deployment finished successfully.,
  environment: production,
  target_url: https://example.com/deployment/42/output,
  created_at: 2012-07-20T01:19:13Z,
  updated_at: 2012-07-20T01:19:13Z,
  deployment_url: https://api.github.com/repos/octocat/example/deployments/42,
  repository_url: https://api.github.com/repos/octocat/example,
  environment_url: https://staging.example.com/,
  log_url: https://example.com/deployment/42/output,
  performed_via_github_app: null
)
```

