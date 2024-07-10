# OpenapiClient::WebhookPing

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **hook** | [**Webhook**](Webhook.md) |  | [optional] |
| **hook_id** | **Integer** | The ID of the webhook that triggered the ping. | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |
| **zen** | **String** | Random string of GitHub zen. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPing.new(
  hook: null,
  hook_id: null,
  organization: null,
  repository: null,
  sender: null,
  zen: null
)
```

