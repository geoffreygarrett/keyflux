# OpenapiClient::WebhookMetaDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **hook** | [**WebhookMetaDeletedHook**](WebhookMetaDeletedHook.md) |  |  |
| **hook_id** | **Integer** | The id of the modified webhook. |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**NullableRepositoryWebhooks**](NullableRepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookMetaDeleted.new(
  action: null,
  enterprise: null,
  hook: null,
  hook_id: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

