# OpenapiClient::WebhookPullRequestReviewDismissed

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**SimplePullRequest**](SimplePullRequest.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **review** | [**WebhookPullRequestReviewDismissedReview**](WebhookPullRequestReviewDismissedReview.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestReviewDismissed.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  pull_request: null,
  repository: null,
  review: null,
  sender: null
)
```

