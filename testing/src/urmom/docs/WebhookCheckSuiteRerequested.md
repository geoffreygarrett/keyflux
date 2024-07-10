# OpenapiClient::WebhookCheckSuiteRerequested

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **check_suite** | [**WebhookCheckSuiteRerequestedCheckSuite**](WebhookCheckSuiteRerequestedCheckSuite.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCheckSuiteRerequested.new(
  action: null,
  check_suite: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

