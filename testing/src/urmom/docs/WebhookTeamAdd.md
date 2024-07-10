# OpenapiClient::WebhookTeamAdd

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **team** | [**WebhooksTeam1**](WebhooksTeam1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookTeamAdd.new(
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  team: null
)
```

