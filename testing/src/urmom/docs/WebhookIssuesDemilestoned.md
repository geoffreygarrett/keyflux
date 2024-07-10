# OpenapiClient::WebhookIssuesDemilestoned

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **issue** | [**Issue5**](Issue5.md) |  |  |
| **milestone** | [**WebhooksMilestone**](WebhooksMilestone.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookIssuesDemilestoned.new(
  action: null,
  enterprise: null,
  installation: null,
  issue: null,
  milestone: null,
  organization: null,
  repository: null,
  sender: null
)
```

