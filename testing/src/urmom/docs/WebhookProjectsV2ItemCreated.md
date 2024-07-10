# OpenapiClient::WebhookProjectsV2ItemCreated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **projects_v2_item** | [**ProjectsV2Item**](ProjectsV2Item.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookProjectsV2ItemCreated.new(
  action: null,
  installation: null,
  organization: null,
  projects_v2_item: null,
  sender: null
)
```

