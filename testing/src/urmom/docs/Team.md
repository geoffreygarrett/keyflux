# OpenapiClient::Team

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **deleted** | **Boolean** |  | [optional] |
| **description** | **String** | Description of the team | [optional] |
| **html_url** | **String** |  | [optional] |
| **id** | **Integer** | Unique identifier of the team |  |
| **members_url** | **String** |  | [optional] |
| **name** | **String** | Name of the team |  |
| **node_id** | **String** |  | [optional] |
| **parent** | [**TeamParent**](TeamParent.md) |  | [optional] |
| **permission** | **String** | Permission that the team will have for its repositories | [optional] |
| **privacy** | **String** |  | [optional] |
| **repositories_url** | **String** |  | [optional] |
| **slug** | **String** |  | [optional] |
| **url** | **String** | URL for the team | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Team.new(
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

