# OpenapiClient::WebhookOrganizationMemberInvited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **invitation** | [**WebhookOrganizationMemberInvitedInvitation**](WebhookOrganizationMemberInvitedInvitation.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **user** | [**WebhooksUser**](WebhooksUser.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookOrganizationMemberInvited.new(
  action: null,
  enterprise: null,
  installation: null,
  invitation: null,
  organization: null,
  repository: null,
  sender: null,
  user: null
)
```

