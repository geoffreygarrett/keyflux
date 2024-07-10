# OpenapiClient::Commit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **added** | **Array&lt;String&gt;** | An array of files added in the commit. A maximum of 3000 changed files will be reported per commit. | [optional] |
| **author** | [**Committer**](Committer.md) |  |  |
| **committer** | [**Committer**](Committer.md) |  |  |
| **distinct** | **Boolean** | Whether this commit is distinct from any that have been pushed before. |  |
| **id** | **String** |  |  |
| **message** | **String** | The commit message. |  |
| **modified** | **Array&lt;String&gt;** | An array of files modified by the commit. A maximum of 3000 changed files will be reported per commit. | [optional] |
| **removed** | **Array&lt;String&gt;** | An array of files removed in the commit. A maximum of 3000 changed files will be reported per commit. | [optional] |
| **timestamp** | **Time** | The ISO 8601 timestamp of the commit. |  |
| **tree_id** | **String** |  |  |
| **url** | **String** | URL that points to the commit API resource. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Commit.new(
  added: null,
  author: null,
  committer: null,
  distinct: null,
  id: null,
  message: null,
  modified: null,
  removed: null,
  timestamp: null,
  tree_id: null,
  url: null
)
```

