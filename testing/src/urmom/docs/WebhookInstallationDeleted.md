# OpenapiClient::WebhookInstallationDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**Installation**](Installation.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repositories** | [**Array&lt;WebhooksRepositoriesInner&gt;**](WebhooksRepositoriesInner.md) | An array of repository objects that the installation can access. | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **requester** | **Object** |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookInstallationDeleted.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  repositories: null,
  repository: null,
  requester: null,
  sender: null
)
```

