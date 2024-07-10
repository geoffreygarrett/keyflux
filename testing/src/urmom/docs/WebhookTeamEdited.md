# OpenapiClient::WebhookTeamEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookTeamEditedChanges**](WebhookTeamEditedChanges.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **repository** | [**Repository17**](Repository17.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **team** | [**WebhooksTeam1**](WebhooksTeam1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookTeamEdited.new(
  action: null,
  changes: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  team: null
)
```

