# OpenapiClient::WebhookPageBuild

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **build** | [**WebhookPageBuildBuild**](WebhookPageBuildBuild.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **id** | **Integer** |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPageBuild.new(
  build: null,
  enterprise: null,
  id: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

