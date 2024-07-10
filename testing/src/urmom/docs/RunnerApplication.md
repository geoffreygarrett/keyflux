# OpenapiClient::RunnerApplication

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **os** | **String** |  |  |
| **architecture** | **String** |  |  |
| **download_url** | **String** |  |  |
| **filename** | **String** |  |  |
| **temp_download_token** | **String** | A short lived bearer token used to download the runner, if needed. | [optional] |
| **sha256_checksum** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RunnerApplication.new(
  os: null,
  architecture: null,
  download_url: null,
  filename: null,
  temp_download_token: null,
  sha256_checksum: null
)
```

