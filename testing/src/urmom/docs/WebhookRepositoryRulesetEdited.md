# OpenapiClient::WebhookRepositoryRulesetEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **repository_ruleset** | [**RepositoryRuleset**](RepositoryRuleset.md) |  |  |
| **changes** | [**WebhookRepositoryRulesetEditedChanges**](WebhookRepositoryRulesetEditedChanges.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRepositoryRulesetEdited.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  repository_ruleset: null,
  changes: null,
  sender: null
)
```

