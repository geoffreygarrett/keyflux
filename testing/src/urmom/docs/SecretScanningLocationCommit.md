# OpenapiClient::SecretScanningLocationCommit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **path** | **String** | The file path in the repository |  |
| **start_line** | **Float** | Line number at which the secret starts in the file |  |
| **end_line** | **Float** | Line number at which the secret ends in the file |  |
| **start_column** | **Float** | The column at which the secret starts within the start line when the file is interpreted as 8BIT ASCII |  |
| **end_column** | **Float** | The column at which the secret ends within the end line when the file is interpreted as 8BIT ASCII |  |
| **blob_sha** | **String** | SHA-1 hash ID of the associated blob |  |
| **blob_url** | **String** | The API URL to get the associated blob resource |  |
| **commit_sha** | **String** | SHA-1 hash ID of the associated commit |  |
| **commit_url** | **String** | The API URL to get the associated commit resource |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocationCommit.new(
  path: /example/secrets.txt,
  start_line: null,
  end_line: null,
  start_column: null,
  end_column: null,
  blob_sha: af5626b4a114abcb82d63db7c8082c3c4756e51b,
  blob_url: null,
  commit_sha: af5626b4a114abcb82d63db7c8082c3c4756e51b,
  commit_url: null
)
```

