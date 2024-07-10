# OpenapiClient::WebhookPullRequestAssigned

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **assignee** | [**WebhooksUser**](WebhooksUser.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **number** | **Integer** | The pull request number. |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**PullRequest**](PullRequest.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestAssigned.new(
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

