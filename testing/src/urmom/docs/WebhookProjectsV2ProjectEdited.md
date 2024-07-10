# OpenapiClient::WebhookProjectsV2ProjectEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookProjectsV2ProjectEditedChanges**](WebhookProjectsV2ProjectEditedChanges.md) |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **projects_v2** | [**ProjectsV2**](ProjectsV2.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookProjectsV2ProjectEdited.new(
  action: null,
  changes: null,
  installation: null,
  organization: null,
  projects_v2: null,
  sender: null
)
```

