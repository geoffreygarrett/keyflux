# OpenapiClient::CodeSearchResultItem

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  |  |
| **path** | **String** |  |  |
| **sha** | **String** |  |  |
| **url** | **String** |  |  |
| **git_url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **repository** | [**MinimalRepository**](MinimalRepository.md) |  |  |
| **score** | **Float** |  |  |
| **file_size** | **Integer** |  | [optional] |
| **language** | **String** |  | [optional] |
| **last_modified_at** | **Time** |  | [optional] |
| **line_numbers** | **Array&lt;String&gt;** |  | [optional] |
| **text_matches** | [**Array&lt;SearchResultTextMatchesInner&gt;**](SearchResultTextMatchesInner.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeSearchResultItem.new(
  name: null,
  path: null,
  sha: null,
  url: null,
  git_url: null,
  html_url: null,
  repository: null,
  score: null,
  file_size: null,
  language: null,
  last_modified_at: null,
  line_numbers: [&quot;73..77&quot;,&quot;77..78&quot;],
  text_matches: null
)
```

