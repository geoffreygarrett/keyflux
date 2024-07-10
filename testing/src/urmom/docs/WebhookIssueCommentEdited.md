# OpenapiClient::WebhookIssueCommentEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhooksChanges**](WebhooksChanges.md) |  |  |
| **comment** | [**WebhooksIssueComment**](WebhooksIssueComment.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **issue** | [**WebhookIssueCommentEditedIssue**](WebhookIssueCommentEditedIssue.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookIssueCommentEdited.new(
  action: null,
  changes: null,
  comment: null,
  enterprise: null,
  installation: null,
  issue: null,
  organization: null,
  repository: null,
  sender: null
)
```

