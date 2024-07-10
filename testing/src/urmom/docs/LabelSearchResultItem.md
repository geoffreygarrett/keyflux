# OpenapiClient::LabelSearchResultItem

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **url** | **String** |  |  |
| **name** | **String** |  |  |
| **color** | **String** |  |  |
| **default** | **Boolean** |  |  |
| **description** | **String** |  |  |
| **score** | **Float** |  |  |
| **text_matches** | [**Array&lt;SearchResultTextMatchesInner&gt;**](SearchResultTextMatchesInner.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::LabelSearchResultItem.new(
  id: null,
  node_id: null,
  url: null,
  name: null,
  color: null,
  default: null,
  description: null,
  score: null,
  text_matches: null
)
```

