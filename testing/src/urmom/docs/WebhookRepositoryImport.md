# OpenapiClient::WebhookRepositoryImport

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **status** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRepositoryImport.new(
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  status: null
)
```

