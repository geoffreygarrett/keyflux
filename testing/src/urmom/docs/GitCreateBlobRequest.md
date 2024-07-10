# OpenapiClient::GitCreateBlobRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **content** | **String** | The new blob&#39;s content. |  |
| **encoding** | **String** | The encoding used for &#x60;content&#x60;. Currently, &#x60;\&quot;utf-8\&quot;&#x60; and &#x60;\&quot;base64\&quot;&#x60; are supported. | [optional][default to &#39;utf-8&#39;] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitCreateBlobRequest.new(
  content: null,
  encoding: null
)
```

