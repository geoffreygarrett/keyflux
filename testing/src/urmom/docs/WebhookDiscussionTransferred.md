# OpenapiClient::WebhookDiscussionTransferred

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookDiscussionTransferredChanges**](WebhookDiscussionTransferredChanges.md) |  |  |
| **discussion** | [**Discussion**](Discussion.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDiscussionTransferred.new(
  action: null,
  changes: null,
  discussion: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```
