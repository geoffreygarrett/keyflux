# OpenapiClient::ContentFile

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **type** | **String** |  |  |
| **encoding** | **String** |  |  |
| **size** | **Integer** |  |  |
| **name** | **String** |  |  |
| **path** | **String** |  |  |
| **content** | **String** |  |  |
| **sha** | **String** |  |  |
| **url** | **String** |  |  |
| **git_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **download_url** | **String** |  |  |
| **_links** | [**ContentTreeEntriesInnerLinks**](ContentTreeEntriesInnerLinks.md) |  |  |
| **target** | **String** |  | [optional] |
| **submodule_git_url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ContentFile.new(
  type: null,
  encoding: null,
  size: null,
  name: null,
  path: null,
  content: null,
  sha: null,
  url: null,
  git_url: null,
  html_url: null,
  download_url: null,
  _links: null,
  target: &quot;actual/actual.md&quot;,
  submodule_git_url: &quot;git://example.com/defunkt/dotjs.git&quot;
)
```

