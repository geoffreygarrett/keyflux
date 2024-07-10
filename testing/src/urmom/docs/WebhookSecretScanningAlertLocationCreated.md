# OpenapiClient::WebhookSecretScanningAlertLocationCreated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  | [optional] |
| **alert** | [**SecretScanningAlertWebhook**](SecretScanningAlertWebhook.md) |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **location** | [**SecretScanningLocation**](SecretScanningLocation.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookSecretScanningAlertLocationCreated.new(
  action: null,
  alert: null,
  installation: null,
  location: null,
  organization: null,
  repository: null,
  sender: null
)
```

