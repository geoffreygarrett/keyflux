# OpenapiClient::DiffEntry

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **sha** | **String** |  |  |
| **filename** | **String** |  |  |
| **status** | **String** |  |  |
| **additions** | **Integer** |  |  |
| **deletions** | **Integer** |  |  |
| **changes** | **Integer** |  |  |
| **blob_url** | **String** |  |  |
| **raw_url** | **String** |  |  |
| **contents_url** | **String** |  |  |
| **patch** | **String** |  | [optional] |
| **previous_filename** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DiffEntry.new(
  sha: bbcd538c8e72b8c175046e27cc8f907076331401,
  filename: file1.txt,
  status: added,
  additions: 103,
  deletions: 21,
  changes: 124,
  blob_url: https://github.com/octocat/Hello-World/blob/6dcb09b5b57875f334f61aebed695e2e4193db5e/file1.txt,
  raw_url: https://github.com/octocat/Hello-World/raw/6dcb09b5b57875f334f61aebed695e2e4193db5e/file1.txt,
  contents_url: https://api.github.com/repos/octocat/Hello-World/contents/file1.txt?ref&#x3D;6dcb09b5b57875f334f61aebed695e2e4193db5e,
  patch: @@ -132,7 +132,7 @@ module Test @@ -1000,7 +1000,7 @@ module Test,
  previous_filename: file.txt
)
```

