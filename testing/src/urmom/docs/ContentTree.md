# OpenapiClient::ContentTree

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **type** | **String** |  |  |
| **size** | **Integer** |  |  |
| **name** | **String** |  |  |
| **path** | **String** |  |  |
| **sha** | **String** |  |  |
| **url** | **String** |  |  |
| **git_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **download_url** | **String** |  |  |
| **entries** | [**Array&lt;ContentTreeEntriesInner&gt;**](ContentTreeEntriesInner.md) |  | [optional] |
| **_links** | [**ContentTreeEntriesInnerLinks**](ContentTreeEntriesInnerLinks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ContentTree.new(
  type: null,
  size: null,
  name: null,
  path: null,
  sha: null,
  url: null,
  git_url: null,
  html_url: null,
  download_url: null,
  entries: null,
  _links: null
)
```

