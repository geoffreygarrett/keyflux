# OpenapiClient::WebhookProjectCardMoved

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookProjectCardMovedChanges**](WebhookProjectCardMovedChanges.md) |  | [optional] |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **project_card** | [**WebhookProjectCardMovedProjectCard**](WebhookProjectCardMovedProjectCard.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookProjectCardMoved.new(
  action: null,
  changes: null,
  enterprise: null,
  installation: null,
  organization: null,
  project_card: null,
  repository: null,
  sender: null
)
```

