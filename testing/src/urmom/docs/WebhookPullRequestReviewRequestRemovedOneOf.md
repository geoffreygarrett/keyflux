# OpenapiClient::WebhookPullRequestReviewRequestRemovedOneOf

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **number** | **Integer** | The pull request number. |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pull_request** | [**PullRequest6**](PullRequest6.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **requested_reviewer** | [**User5**](User5.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPullRequestReviewRequestRemovedOneOf.new(
  action: null,
  enterprise: null,
  installation: null,
  number: null,
  organization: null,
  pull_request: null,
  repository: null,
  requested_reviewer: null,
  sender: null
)
```

