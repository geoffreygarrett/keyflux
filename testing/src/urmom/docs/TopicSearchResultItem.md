# OpenapiClient::TopicSearchResultItem

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  |  |
| **display_name** | **String** |  |  |
| **short_description** | **String** |  |  |
| **description** | **String** |  |  |
| **created_by** | **String** |  |  |
| **released** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **featured** | **Boolean** |  |  |
| **curated** | **Boolean** |  |  |
| **score** | **Float** |  |  |
| **repository_count** | **Integer** |  | [optional] |
| **logo_url** | **String** |  | [optional] |
| **text_matches** | [**Array&lt;SearchResultTextMatchesInner&gt;**](SearchResultTextMatchesInner.md) |  | [optional] |
| **related** | [**Array&lt;TopicSearchResultItemRelatedInner&gt;**](TopicSearchResultItemRelatedInner.md) |  | [optional] |
| **aliases** | [**Array&lt;TopicSearchResultItemRelatedInner&gt;**](TopicSearchResultItemRelatedInner.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TopicSearchResultItem.new(
  name: null,
  display_name: null,
  short_description: null,
  description: null,
  created_by: null,
  released: null,
  created_at: null,
  updated_at: null,
  featured: null,
  curated: null,
  score: null,
  repository_count: null,
  logo_url: null,
  text_matches: null,
  related: null,
  aliases: null
)
```

