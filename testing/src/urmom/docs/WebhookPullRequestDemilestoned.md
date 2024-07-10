# OpenapiClient::WebhookPullRequestDemilestoned

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **milestone** | [**Milestone**](Milestone.md) |  | [optional] |
| **number** | **Integer** | The pull request number. |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**WebhooksPullRequest5**](WebhooksPullRequest5.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestDemilestoned.new(
  action: null,
  enterprise: null,
  milestone: null,
  number: null,
  organization: null,
  pull_request: null,
  repository: null,
  sender: null
)
```

