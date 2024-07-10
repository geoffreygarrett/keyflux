# OpenapiClient::Enterprise

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **description** | **String** | A short description of the enterprise. | [optional] |
| **html_url** | **String** |  |  |
| **website_url** | **String** | The enterprise&#39;s website URL. | [optional] |
| **id** | **Integer** | Unique identifier of the enterprise |  |
| **node_id** | **String** |  |  |
| **name** | **String** | The name of the enterprise. |  |
| **slug** | **String** | The slug url identifier for the enterprise. |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **avatar_url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Enterprise.new(
  description: null,
  html_url: https://github.com/enterprises/octo-business,
  website_url: null,
  id: 42,
  node_id: MDEwOlJlcG9zaXRvcnkxMjk2MjY5,
  name: Octo Business,
  slug: octo-business,
  created_at: 2019-01-26T19:01:12Z,
  updated_at: 2019-01-26T19:14:43Z,
  avatar_url: null
)
```

