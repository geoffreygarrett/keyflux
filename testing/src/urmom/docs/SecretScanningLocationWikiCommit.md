# OpenapiClient::SecretScanningLocationWikiCommit

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **path** | **String** | The file path of the wiki page |  |
| **start_line** | **Float** | Line number at which the secret starts in the file |  |
| **end_line** | **Float** | Line number at which the secret ends in the file |  |
| **start_column** | **Float** | The column at which the secret starts within the start line when the file is interpreted as 8-bit ASCII. |  |
| **end_column** | **Float** | The column at which the secret ends within the end line when the file is interpreted as 8-bit ASCII. |  |
| **blob_sha** | **String** | SHA-1 hash ID of the associated blob |  |
| **page_url** | **String** | The GitHub URL to get the associated wiki page |  |
| **commit_sha** | **String** | SHA-1 hash ID of the associated commit |  |
| **commit_url** | **String** | The GitHub URL to get the associated wiki commit |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SecretScanningLocationWikiCommit.new(
  path: /example/Home.md,
  start_line: null,
  end_line: null,
  start_column: null,
  end_column: null,
  blob_sha: af5626b4a114abcb82d63db7c8082c3c4756e51b,
  page_url: https://github.com/octocat/Hello-World/wiki/Home/302c0b7e200761c9dd9b57e57db540ee0b4293a5,
  commit_sha: 302c0b7e200761c9dd9b57e57db540ee0b4293a5,
  commit_url: https://github.com/octocat/Hello-World/wiki/_compare/302c0b7e200761c9dd9b57e57db540ee0b4293a5
)
```

