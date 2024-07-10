# OpenapiClient::WebhookPullRequestReviewThreadResolved

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**SimplePullRequest3**](SimplePullRequest3.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |
| **thread** | [**WebhookPullRequestReviewThreadResolvedThread**](WebhookPullRequestReviewThreadResolvedThread.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestReviewThreadResolved.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  pull_request: null,
  repository: null,
  sender: null,
  thread: null
)
```

