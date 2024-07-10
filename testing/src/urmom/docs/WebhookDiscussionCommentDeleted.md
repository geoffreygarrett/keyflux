# OpenapiClient::WebhookDiscussionCommentDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
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

instance = OpenapiClient::WebhookDiscussionCommentDeleted.new(
  action: null,
  comment: null,
  discussion: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

