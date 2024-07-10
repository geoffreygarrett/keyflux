# OpenapiClient::WebhookPullRequestReviewCommentDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **comment** | [**WebhooksReviewComment**](WebhooksReviewComment.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**WebhookPullRequestReviewCommentDeletedPullRequest**](WebhookPullRequestReviewCommentDeletedPullRequest.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestReviewCommentDeleted.new(
  action: null,
  comment: null,
  enterprise: null,
  installation: null,
  organization: null,
  pull_request: null,
  repository: null,
  sender: null
)
```

