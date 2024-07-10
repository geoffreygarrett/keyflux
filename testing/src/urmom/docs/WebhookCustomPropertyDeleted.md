# OpenapiClient::WebhookCustomPropertyDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **definition** | [**WebhookCustomPropertyDeletedDefinition**](WebhookCustomPropertyDeletedDefinition.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCustomPropertyDeleted.new(
  action: null,
  definition: null,
  enterprise: null,
  installation: null,
  organization: null,
  sender: null
)
```

