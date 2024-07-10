# OpenapiClient::WebhookInstallationTargetRenamed

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **account** | [**WebhookInstallationTargetRenamedAccount**](WebhookInstallationTargetRenamedAccount.md) |  |  |
| **action** | **String** |  |  |
| **changes** | [**WebhookInstallationTargetRenamedChanges**](WebhookInstallationTargetRenamedChanges.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |
| **target_type** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookInstallationTargetRenamed.new(
  account: null,
  action: null,
  changes: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  target_type: null
)
```

