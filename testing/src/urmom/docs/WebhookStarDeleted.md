# OpenapiClient::WebhookStarDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **starred_at** | **Object** | The time the star was created. This is a timestamp in ISO 8601 format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. Will be &#x60;null&#x60; for the &#x60;deleted&#x60; action. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookStarDeleted.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  starred_at: null
)
```

