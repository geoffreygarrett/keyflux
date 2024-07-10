# OpenapiClient::WebhookCommitCommentCreated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** | The action performed. Can be &#x60;created&#x60;. |  |
| **comment** | [**WebhookCommitCommentCreatedComment**](WebhookCommitCommentCreatedComment.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCommitCommentCreated.new(
  action: null,
  comment: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

