# OpenapiClient::WebhookStatusCommitCommit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author** | [**WebhookStatusCommitCommitAuthor**](WebhookStatusCommitCommitAuthor.md) |  |  |
| **comment_count** | **Integer** |  |  |
| **committer** | [**WebhookStatusCommitCommitAuthor**](WebhookStatusCommitCommitAuthor.md) |  |  |
| **message** | **String** |  |  |
| **tree** | [**ShortBranchCommit**](ShortBranchCommit.md) |  |  |
| **url** | **String** |  |  |
| **verification** | [**WebhookStatusCommitCommitVerification**](WebhookStatusCommitCommitVerification.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookStatusCommitCommit.new(
  author: null,
  comment_count: null,
  committer: null,
  message: null,
  tree: null,
  url: null,
  verification: null
)
```

