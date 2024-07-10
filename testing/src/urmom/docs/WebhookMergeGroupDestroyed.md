# OpenapiClient::WebhookMergeGroupDestroyed

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **reason** | **String** | Explains why the merge group is being destroyed. The group could have been merged, removed from the queue (dequeued), or invalidated by an earlier queue entry being dequeued (invalidated). | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **merge_group** | [**MergeGroup**](MergeGroup.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookMergeGroupDestroyed.new(
  action: null,
  reason: null,
  installation: null,
  merge_group: null,
  organization: null,
  repository: null,
  sender: null
)
```

