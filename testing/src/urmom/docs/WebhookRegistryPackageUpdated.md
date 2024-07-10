# OpenapiClient::WebhookRegistryPackageUpdated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **registry_package** | [**WebhookRegistryPackageUpdatedRegistryPackage**](WebhookRegistryPackageUpdatedRegistryPackage.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRegistryPackageUpdated.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  registry_package: null,
  repository: null,
  sender: null
)
```

