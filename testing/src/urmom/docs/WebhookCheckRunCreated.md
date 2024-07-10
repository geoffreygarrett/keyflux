# OpenapiClient::WebhookCheckRunCreated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  | [optional] |
| **check_run** | [**CheckRunWithSimpleCheckSuite**](CheckRunWithSimpleCheckSuite.md) |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCheckRunCreated.new(
  action: null,
  check_run: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

