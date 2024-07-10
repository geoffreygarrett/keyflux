# OpenapiClient::WebhookMembershipRemoved

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **member** | [**WebhooksUser**](WebhooksUser.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **scope** | **String** | The scope of the membership. Currently, can only be &#x60;team&#x60;. |  |
| **sender** | [**User**](User.md) |  |  |
| **team** | [**WebhooksTeam**](WebhooksTeam.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookMembershipRemoved.new(
  action: null,
  enterprise: null,
  installation: null,
  member: null,
  organization: null,
  repository: null,
  scope: null,
  sender: null,
  team: null
)
```

