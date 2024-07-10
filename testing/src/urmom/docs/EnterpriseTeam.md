# OpenapiClient::EnterpriseTeam

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **name** | **String** |  |  |
| **slug** | **String** |  |  |
| **url** | **String** |  |  |
| **sync_to_organizations** | **String** |  |  |
| **group_id** | **Integer** |  | [optional] |
| **html_url** | **String** |  |  |
| **members_url** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::EnterpriseTeam.new(
  id: null,
  name: null,
  slug: null,
  url: null,
  sync_to_organizations: disabled | all,
  group_id: 1,
  html_url: https://github.com/enterprises/dc/teams/justice-league,
  members_url: null,
  created_at: null,
  updated_at: null
)
```

