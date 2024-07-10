# OpenapiClient::WebhookDiscussionCommentEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookDiscussionCommentEditedChanges**](WebhookDiscussionCommentEditedChanges.md) |  |  |
| **comment** | [**WebhooksComment**](WebhooksComment.md) |  |  |
| **discussion** | [**Discussion**](Discussion.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDiscussionCommentEdited.new(
  action: null,
  changes: null,
  comment: null,
  discussion: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

