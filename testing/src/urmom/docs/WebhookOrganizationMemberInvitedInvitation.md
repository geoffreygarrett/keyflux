# OpenapiClient::WebhookOrganizationMemberInvitedInvitation

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created_at** | **Time** |  |  |
| **email** | **String** |  |  |
| **failed_at** | **Time** |  |  |
| **failed_reason** | **String** |  |  |
| **id** | **Float** |  |  |
| **invitation_teams_url** | **String** |  |  |
| **inviter** | [**User**](User.md) |  |  |
| **login** | **String** |  |  |
| **node_id** | **String** |  |  |
| **role** | **String** |  |  |
| **team_count** | **Float** |  |  |
| **invitation_source** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookOrganizationMemberInvitedInvitation.new(
  created_at: null,
  email: null,
  failed_at: null,
  failed_reason: null,
  id: null,
  invitation_teams_url: null,
  inviter: null,
  login: null,
  node_id: null,
  role: null,
  team_count: null,
  invitation_source: null
)
```

