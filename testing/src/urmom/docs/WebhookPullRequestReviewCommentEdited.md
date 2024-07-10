# OpenapiClient::WebhookPullRequestReviewCommentEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhooksChanges**](WebhooksChanges.md) |  |  |
| **comment** | [**WebhooksReviewComment**](WebhooksReviewComment.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**WebhookPullRequestReviewCommentEditedPullRequest**](WebhookPullRequestReviewCommentEditedPullRequest.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestReviewCommentEdited.new(
  action: null,
  changes: null,
  comment: null,
  enterprise: null,
  installation: null,
  organization: null,
  pull_request: null,
  repository: null,
  sender: null
)
```

