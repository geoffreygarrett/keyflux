# OpenapiClient::WebhookPullRequestReviewCommentCreated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **comment** | [**PullRequestReviewComment**](PullRequestReviewComment.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**WebhookPullRequestReviewCommentCreatedPullRequest**](WebhookPullRequestReviewCommentCreatedPullRequest.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestReviewCommentCreated.new(
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

