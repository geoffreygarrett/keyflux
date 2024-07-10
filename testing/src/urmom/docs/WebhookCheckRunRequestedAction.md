# OpenapiClient::WebhookCheckRunRequestedAction

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **check_run** | [**CheckRunWithSimpleCheckSuite**](CheckRunWithSimpleCheckSuite.md) |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **requested_action** | [**WebhookCheckRunRequestedActionRequestedAction**](WebhookCheckRunRequestedActionRequestedAction.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCheckRunRequestedAction.new(
  action: null,
  check_run: null,
  installation: null,
  organization: null,
  repository: null,
  requested_action: null,
  sender: null
)
```

