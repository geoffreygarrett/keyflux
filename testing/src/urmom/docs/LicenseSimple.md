# OpenapiClient::LicenseSimple

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **key** | **String** |  |  |
| **name** | **String** |  |  |
| **url** | **String** |  |  |
| **spdx_id** | **String** |  |  |
| **node_id** | **String** |  |  |
| **html_url** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::LicenseSimple.new(
  key: mit,
  name: MIT License,
  url: https://api.github.com/licenses/mit,
  spdx_id: MIT,
  node_id: MDc6TGljZW5zZW1pdA&#x3D;&#x3D;,
  html_url: null
)
```

