# OpenapiClient::WebhookFork

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **forkee** | [**WebhookForkForkee**](WebhookForkForkee.md) |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookFork.new(
  enterprise: null,
  forkee: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

