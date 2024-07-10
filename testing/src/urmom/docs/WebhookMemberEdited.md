# OpenapiClient::WebhookMemberEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookMemberEditedChanges**](WebhookMemberEditedChanges.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **member** | [**WebhooksUser**](WebhooksUser.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookMemberEdited.new(
  action: null,
  changes: null,
  enterprise: null,
  installation: null,
  member: null,
  organization: null,
  repository: null,
  sender: null
)
```

