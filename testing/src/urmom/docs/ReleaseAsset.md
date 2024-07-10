# OpenapiClient::ReleaseAsset

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **browser_download_url** | **String** |  |  |
| **content_type** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **download_count** | **Integer** |  |  |
| **id** | **Integer** |  |  |
| **label** | **String** |  |  |
| **name** | **String** | The file name of the asset. |  |
| **node_id** | **String** |  |  |
| **size** | **Integer** |  |  |
| **state** | **String** | State of the release asset. |  |
| **updated_at** | **Time** |  |  |
| **uploader** | [**User**](User.md) |  | [optional] |
| **url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReleaseAsset.new(
  browser_download_url: null,
  content_type: null,
  created_at: null,
  download_count: null,
  id: null,
  label: null,
  name: null,
  node_id: null,
  size: null,
  state: null,
  updated_at: null,
  uploader: null,
  url: null
)
```

