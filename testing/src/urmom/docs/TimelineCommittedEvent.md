# OpenapiClient::TimelineCommittedEvent

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **event** | **String** |  | [optional] |
| **sha** | **String** | SHA for the commit |  |
| **node_id** | **String** |  |  |
| **url** | **String** |  |  |
| **author** | [**GitCommitAuthor**](GitCommitAuthor.md) |  |  |
| **committer** | [**GitCommitAuthor**](GitCommitAuthor.md) |  |  |
| **message** | **String** | Message describing the purpose of the commit |  |
| **tree** | [**GitCommitTree**](GitCommitTree.md) |  |  |
| **parents** | [**Array&lt;GitCommitParentsInner&gt;**](GitCommitParentsInner.md) |  |  |
| **verification** | [**GitCommitVerification**](GitCommitVerification.md) |  |  |
| **html_url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TimelineCommittedEvent.new(
  event: null,
  sha: 7638417db6d59f3c431d3e1f261cc637155684cd,
  node_id: null,
  url: null,
  author: null,
  committer: null,
  message: Fix #42,
  tree: null,
  parents: null,
  verification: null,
  html_url: null
)
```

