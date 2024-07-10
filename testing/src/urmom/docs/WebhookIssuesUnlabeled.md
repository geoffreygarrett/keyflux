# OpenapiClient::WebhookIssuesUnlabeled

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **issue** | [**WebhooksIssue**](WebhooksIssue.md) |  |  |
| **label** | [**WebhooksLabel**](WebhooksLabel.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookIssuesUnlabeled.new(
  action: null,
  enterprise: null,
  installation: null,
  issue: null,
  label: null,
  organization: null,
  repository: null,
  sender: null
)
```

