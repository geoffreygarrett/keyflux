# OpenapiClient::CodeScanningCodeqlDatabase

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The ID of the CodeQL database. |  |
| **name** | **String** | The name of the CodeQL database. |  |
| **language** | **String** | The language of the CodeQL database. |  |
| **uploader** | [**SimpleUser**](SimpleUser.md) |  |  |
| **content_type** | **String** | The MIME type of the CodeQL database file. |  |
| **size** | **Integer** | The size of the CodeQL database file in bytes. |  |
| **created_at** | **Time** | The date and time at which the CodeQL database was created, in ISO 8601 format&#39;:&#39; YYYY-MM-DDTHH:MM:SSZ. |  |
| **updated_at** | **Time** | The date and time at which the CodeQL database was last updated, in ISO 8601 format&#39;:&#39; YYYY-MM-DDTHH:MM:SSZ. |  |
| **url** | **String** | The URL at which to download the CodeQL database. The &#x60;Accept&#x60; header must be set to the value of the &#x60;content_type&#x60; property. |  |
| **commit_oid** | **String** | The commit SHA of the repository at the time the CodeQL database was created. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeScanningCodeqlDatabase.new(
  id: null,
  name: null,
  language: null,
  uploader: null,
  content_type: null,
  size: null,
  created_at: null,
  updated_at: null,
  url: null,
  commit_oid: null
)
```

