# OpenapiClient::SearchResultTextMatchesInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **object_url** | **String** |  | [optional] |
| **object_type** | **String** |  | [optional] |
| **property** | **String** |  | [optional] |
| **fragment** | **String** |  | [optional] |
| **matches** | [**Array&lt;SearchResultTextMatchesInnerMatchesInner&gt;**](SearchResultTextMatchesInnerMatchesInner.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SearchResultTextMatchesInner.new(
  object_url: null,
  object_type: null,
  property: null,
  fragment: null,
  matches: null
)
```

