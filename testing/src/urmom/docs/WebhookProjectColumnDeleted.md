# OpenapiClient::WebhookProjectColumnDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **project_column** | [**WebhooksProjectColumn**](WebhooksProjectColumn.md) |  |  |
| **repository** | [**NullableRepositoryWebhooks**](NullableRepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookProjectColumnDeleted.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  project_column: null,
  repository: null,
  sender: null
)
```

