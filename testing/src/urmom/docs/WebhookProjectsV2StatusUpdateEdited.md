# OpenapiClient::WebhookProjectsV2StatusUpdateEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookProjectsV2StatusUpdateEditedChanges**](WebhookProjectsV2StatusUpdateEditedChanges.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **projects_v2_status_update** | [**ProjectsV2StatusUpdate**](ProjectsV2StatusUpdate.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookProjectsV2StatusUpdateEdited.new(
  action: null,
  changes: null,
  installation: null,
  organization: null,
  projects_v2_status_update: null,
  sender: null
)
```

