# OpenapiClient::WebhookInstallationRepositoriesRemoved

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**Installation**](Installation.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repositories_added** | [**Array&lt;WebhooksRepositoriesInner&gt;**](WebhooksRepositoriesInner.md) | An array of repository objects, which were added to the installation. |  |
| **repositories_removed** | [**Array&lt;WebhooksRepositoriesInner&gt;**](WebhooksRepositoriesInner.md) | An array of repository objects, which were removed from the installation. |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **repository_selection** | [**WebhooksRepositorySelection**](WebhooksRepositorySelection.md) |  |  |
| **requester** | [**WebhooksUser**](WebhooksUser.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookInstallationRepositoriesRemoved.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  repositories_added: null,
  repositories_removed: null,
  repository: null,
  repository_selection: null,
  requester: null,
  sender: null
)
```

