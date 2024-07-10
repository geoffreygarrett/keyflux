# OpenapiClient::WebhookWorkflowDispatch

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **inputs** | **Hash&lt;String, Object&gt;** |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **ref** | **String** |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **workflow** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookWorkflowDispatch.new(
  enterprise: null,
  inputs: null,
  installation: null,
  organization: null,
  ref: null,
  repository: null,
  sender: null,
  workflow: null
)
```

