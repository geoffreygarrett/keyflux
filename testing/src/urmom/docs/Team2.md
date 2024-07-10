# OpenapiClient::Team2

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **deleted** | **Boolean** |  | [optional] |
| **description** | **String** | Description of the team |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** | Unique identifier of the team |  |
| **members_url** | **String** |  |  |
| **name** | **String** | Name of the team |  |
| **node_id** | **String** |  |  |
| **parent** | [**PullRequest6Parent**](PullRequest6Parent.md) |  | [optional] |
| **permission** | **String** | Permission that the team will have for its repositories |  |
| **privacy** | **String** |  |  |
| **repositories_url** | **String** |  |  |
| **slug** | **String** |  |  |
| **url** | **String** | URL for the team |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Team2.new(
  deleted: null,
  description: null,
  html_url: null,
  id: null,
  members_url: null,
  name: null,
  node_id: null,
  parent: null,
  permission: null,
  privacy: null,
  repositories_url: null,
  slug: null,
  url: null
)
```

