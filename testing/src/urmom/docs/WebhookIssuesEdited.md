# OpenapiClient::WebhookIssuesEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookIssuesEditedChanges**](WebhookIssuesEditedChanges.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **issue** | [**Issue6**](Issue6.md) |  |  |
| **label** | [**WebhooksLabel**](WebhooksLabel.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookIssuesEdited.new(
  action: null,
  changes: null,
  enterprise: null,
  installation: null,
  issue: null,
  label: null,
  organization: null,
  repository: null,
  sender: null
)
```

