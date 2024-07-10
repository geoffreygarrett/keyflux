# OpenapiClient::Deployment1

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created_at** | **String** |  |  |
| **creator** | [**User**](User.md) |  |  |
| **description** | **String** |  |  |
| **environment** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **original_environment** | **String** |  |  |
| **payload** | [**Deployment1Payload**](Deployment1Payload.md) |  |  |
| **performed_via_github_app** | [**App6**](App6.md) |  | [optional] |
| **production_environment** | **Boolean** |  | [optional] |
| **ref** | **String** |  |  |
| **repository_url** | **String** |  |  |
| **sha** | **String** |  |  |
| **statuses_url** | **String** |  |  |
| **task** | **String** |  |  |
| **transient_environment** | **Boolean** |  | [optional] |
| **updated_at** | **String** |  |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Deployment1.new(
  created_at: null,
  creator: null,
  description: null,
  environment: null,
  id: null,
  node_id: null,
  original_environment: null,
  payload: null,
  performed_via_github_app: null,
  production_environment: null,
  ref: null,
  repository_url: null,
  sha: null,
  statuses_url: null,
  task: null,
  transient_environment: null,
  updated_at: null,
  url: null
)
```

