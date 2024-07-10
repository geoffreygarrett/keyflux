# OpenapiClient::WebhookBranchProtectionRuleEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookBranchProtectionRuleEditedChanges**](WebhookBranchProtectionRuleEditedChanges.md) |  | [optional] |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **rule** | [**WebhooksRule**](WebhooksRule.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookBranchProtectionRuleEdited.new(
  action: null,
  changes: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  rule: null,
  sender: null
)
```

