# OpenapiClient::WebhookProjectCardDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **project_card** | [**ProjectCard**](ProjectCard.md) |  |  |
| **repository** | [**NullableRepositoryWebhooks**](NullableRepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookProjectCardDeleted.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  project_card: null,
  repository: null,
  sender: null
)
```

