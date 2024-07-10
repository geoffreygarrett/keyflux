# OpenapiClient::WebhookRepositoryEditedChanges

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **default_branch** | [**WebhookDiscussionCommentEditedChangesBody**](WebhookDiscussionCommentEditedChangesBody.md) |  | [optional] |
| **description** | [**WebhookProjectCardEditedChangesNote**](WebhookProjectCardEditedChangesNote.md) |  | [optional] |
| **homepage** | [**WebhookProjectCardEditedChangesNote**](WebhookProjectCardEditedChangesNote.md) |  | [optional] |
| **topics** | [**WebhookRepositoryEditedChangesTopics**](WebhookRepositoryEditedChangesTopics.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRepositoryEditedChanges.new(
  default_branch: null,
  description: null,
  homepage: null,
  topics: null
)
```

