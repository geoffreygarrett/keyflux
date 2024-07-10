# OpenapiClient::DeploymentSimple

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **id** | **Integer** | Unique identifier of the deployment |  |
| **node_id** | **String** |  |  |
| **task** | **String** | Parameter to specify a task to execute |  |
| **original_environment** | **String** |  | [optional] |
| **environment** | **String** | Name for the target deployment environment. |  |
| **description** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **statuses_url** | **String** |  |  |
| **repository_url** | **String** |  |  |
| **transient_environment** | **Boolean** | Specifies if the given environment is will no longer exist at some point in the future. Default: false. | [optional] |
| **production_environment** | **Boolean** | Specifies if the given environment is one that end-users directly interact with. Default: false. | [optional] |
| **performed_via_github_app** | [**NullableIntegration**](NullableIntegration.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DeploymentSimple.new(
  url: https://api.github.com/repos/octocat/example/deployments/1,
  id: 42,
  node_id: MDEwOkRlcGxveW1lbnQx,
  task: deploy,
  original_environment: staging,
  environment: production,
  description: Deploy request from hubot,
  created_at: 2012-07-20T01:19:13Z,
  updated_at: 2012-07-20T01:19:13Z,
  statuses_url: https://api.github.com/repos/octocat/example/deployments/1/statuses,
  repository_url: https://api.github.com/repos/octocat/example,
  transient_environment: true,
  production_environment: true,
  performed_via_github_app: null
)
```

