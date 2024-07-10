# OpenapiClient::WebhookProjectsV2StatusUpdateDeleted

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **projects_v2_status_update** | [**ProjectsV2StatusUpdate**](ProjectsV2StatusUpdate.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookProjectsV2StatusUpdateDeleted.new(
  action: null,
  installation: null,
  organization: null,
  projects_v2_status_update: null,
  sender: null
)
```

