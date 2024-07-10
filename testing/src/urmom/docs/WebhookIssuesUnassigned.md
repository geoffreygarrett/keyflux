# OpenapiClient::WebhookIssuesUnassigned

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** | The action that was performed. |  |
| **assignee** | [**WebhooksUserMannequin**](WebhooksUserMannequin.md) |  | [optional] |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **issue** | [**WebhooksIssue**](WebhooksIssue.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookIssuesUnassigned.new(
  action: null,
  assignee: null,
  enterprise: null,
  installation: null,
  issue: null,
  organization: null,
  repository: null,
  sender: null
)
```

