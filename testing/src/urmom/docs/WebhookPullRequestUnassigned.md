# OpenapiClient::WebhookPullRequestUnassigned

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **assignee** | [**WebhooksUserMannequin**](WebhooksUserMannequin.md) |  | [optional] |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **number** | **Integer** | The pull request number. |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**PullRequest11**](PullRequest11.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestUnassigned.new(
  action: null,
  assignee: null,
  enterprise: null,
  installation: null,
  number: null,
  organization: null,
  pull_request: null,
  repository: null,
  sender: null
)
```

