# OpenapiClient::OrganizationInvitation

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **login** | **String** |  |  |
| **email** | **String** |  |  |
| **role** | **String** |  |  |
| **created_at** | **String** |  |  |
| **failed_at** | **String** |  | [optional] |
| **failed_reason** | **String** |  | [optional] |
| **inviter** | [**SimpleUser**](SimpleUser.md) |  |  |
| **team_count** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **invitation_teams_url** | **String** |  |  |
| **invitation_source** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrganizationInvitation.new(
  id: null,
  login: null,
  email: null,
  role: null,
  created_at: null,
  failed_at: null,
  failed_reason: null,
  inviter: null,
  team_count: null,
  node_id: &quot;MDIyOk9yZ2FuaXphdGlvbkludml0YXRpb24x&quot;,
  invitation_teams_url: &quot;https://api.github.com/organizations/16/invitations/1/teams&quot;,
  invitation_source: &quot;member&quot;
)
```

