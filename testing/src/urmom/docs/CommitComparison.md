# OpenapiClient::CommitComparison

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **permalink_url** | **String** |  |  |
| **diff_url** | **String** |  |  |
| **patch_url** | **String** |  |  |
| **base_commit** | [**Commit**](Commit.md) |  |  |
| **merge_base_commit** | [**Commit**](Commit.md) |  |  |
| **status** | **String** |  |  |
| **ahead_by** | **Integer** |  |  |
| **behind_by** | **Integer** |  |  |
| **total_commits** | **Integer** |  |  |
| **commits** | [**Array&lt;Commit&gt;**](Commit.md) |  |  |
| **files** | [**Array&lt;DiffEntry&gt;**](DiffEntry.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CommitComparison.new(
  url: https://api.github.com/repos/octocat/Hello-World/compare/master...topic,
  html_url: https://github.com/octocat/Hello-World/compare/master...topic,
  permalink_url: https://github.com/octocat/Hello-World/compare/octocat:bbcd538c8e72b8c175046e27cc8f907076331401...octocat:0328041d1152db8ae77652d1618a02e57f745f17,
  diff_url: https://github.com/octocat/Hello-World/compare/master...topic.diff,
  patch_url: https://github.com/octocat/Hello-World/compare/master...topic.patch,
  base_commit: null,
  merge_base_commit: null,
  status: ahead,
  ahead_by: 4,
  behind_by: 5,
  total_commits: 6,
  commits: null,
  files: null
)
```

