# OpenapiClient::WebhookIssueCommentCreated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **comment** | [**IssueComment**](IssueComment.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **issue** | [**WebhookIssueCommentCreatedIssue**](WebhookIssueCommentCreatedIssue.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookIssueCommentCreated.new(
  action: null,
  comment: null,
  enterprise: null,
  installation: null,
  issue: null,
  organization: null,
  repository: null,
  sender: null
)
```

