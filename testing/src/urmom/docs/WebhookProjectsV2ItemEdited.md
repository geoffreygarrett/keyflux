# OpenapiClient::WebhookProjectsV2ItemEdited

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **changes** | [**WebhookProjectsV2ItemEditedChanges**](WebhookProjectsV2ItemEditedChanges.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **projects_v2_item** | [**ProjectsV2Item**](ProjectsV2Item.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookProjectsV2ItemEdited.new(
  action: null,
  changes: null,
  installation: null,
  organization: null,
  projects_v2_item: null,
  sender: null
)
```

