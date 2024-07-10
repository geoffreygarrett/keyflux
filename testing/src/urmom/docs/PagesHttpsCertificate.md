# OpenapiClient::PagesHttpsCertificate

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **state** | **String** |  |  |
| **description** | **String** |  |  |
| **domains** | **Array&lt;String&gt;** | Array of the domain set and its alternate name (if it is configured) |  |
| **expires_at** | **Date** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PagesHttpsCertificate.new(
  state: approved,
  description: Certificate is approved,
  domains: [&quot;example.com&quot;,&quot;www.example.com&quot;],
  expires_at: null
)
```

