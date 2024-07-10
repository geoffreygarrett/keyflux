# OpenapiClient::ReposCreatePagesSiteRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **build_type** | **String** | The process in which the Page will be built. Possible values are &#x60;\&quot;legacy\&quot;&#x60; and &#x60;\&quot;workflow\&quot;&#x60;. | [optional] |
| **source** | [**ReposCreatePagesSiteRequestSource**](ReposCreatePagesSiteRequestSource.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreatePagesSiteRequest.new(
  build_type: null,
  source: null
)
```

