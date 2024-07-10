# OpenapiClient::WebhookPullRequestReviewEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookPullRequestReviewEditedChanges**](WebhookPullRequestReviewEditedChanges.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**SimplePullRequest1**](SimplePullRequest1.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **review** | [**WebhooksReview**](WebhooksReview.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestReviewEdited.new(
  action: null,
  changes: null,
  enterprise: null,
  installation: null,
  organization: null,
  pull_request: null,
  repository: null,
  review: null,
  sender: null
)
```

