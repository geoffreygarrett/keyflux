# OpenapiClient::WebhooksTeam1

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
| **parent** | [**WebhooksTeamParent**](WebhooksTeamParent.md) |  | [optional] |
| **permission** | **String** | Permission that the team will have for its repositories | [optional] |
| **privacy** | **String** |  | [optional] |
| **notification_setting** | **String** | Whether team members will receive notifications when their team is @mentioned | [optional] |
| **repositories_url** | **String** |  | [optional] |
| **slug** | **String** |  | [optional] |
| **url** | **String** | URL for the team | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhooksTeam1.new(
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
  notification_setting: null,
  repositories_url: null,
  slug: null,
  url: null
)
```

