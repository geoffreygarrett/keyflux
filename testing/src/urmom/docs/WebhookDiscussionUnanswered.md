# OpenapiClient::WebhookDiscussionUnanswered

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **discussion** | [**Discussion**](Discussion.md) |  |  |
| **old_answer** | [**WebhooksAnswer**](WebhooksAnswer.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDiscussionUnanswered.new(
  action: null,
  discussion: null,
  old_answer: null,
  organization: null,
  repository: null,
  sender: null
)
```

