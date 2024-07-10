# OpenapiClient::WebhookProjectsV2ProjectDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **projects_v2** | [**ProjectsV2**](ProjectsV2.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookProjectsV2ProjectDeleted.new(
  action: null,
  installation: null,
  organization: null,
  projects_v2: null,
  sender: null
)
```

