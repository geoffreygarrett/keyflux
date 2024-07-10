# OpenapiClient::WebhookStatusCommit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author** | [**User9**](User9.md) |  |  |
| **comments_url** | **String** |  |  |
| **commit** | [**WebhookStatusCommitCommit**](WebhookStatusCommitCommit.md) |  |  |
| **committer** | [**User9**](User9.md) |  |  |
| **html_url** | **String** |  |  |
| **node_id** | **String** |  |  |
| **parents** | [**Array&lt;WebhookStatusCommitParentsInner&gt;**](WebhookStatusCommitParentsInner.md) |  |  |
| **sha** | **String** |  |  |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookStatusCommit.new(
  author: null,
  comments_url: null,
  commit: null,
  committer: null,
  html_url: null,
  node_id: null,
  parents: null,
  sha: null,
  url: null
)
```

