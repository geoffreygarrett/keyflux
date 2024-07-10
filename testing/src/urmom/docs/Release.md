# OpenapiClient::Release

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **assets** | [**Array&lt;ReleaseAsset1&gt;**](ReleaseAsset1.md) |  |  |
| **assets_url** | **String** |  |  |
| **author** | [**User**](User.md) |  |  |
| **body** | **String** |  |  |
| **created_at** | **Time** |  |  |
| **discussion_url** | **String** |  | [optional] |
| **draft** | **Boolean** | Whether the release is a draft or published |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **name** | **String** |  |  |
| **node_id** | **String** |  |  |
| **prerelease** | **Boolean** | Whether the release is identified as a prerelease or a full release. |  |
| **published_at** | **Time** |  |  |
| **reactions** | [**Reactions**](Reactions.md) |  | [optional] |
| **tag_name** | **String** | The name of the tag. |  |
| **tarball_url** | **String** |  |  |
| **target_commitish** | **String** | Specifies the commitish value that determines where the Git tag is created from. |  |
| **upload_url** | **String** |  |  |
| **url** | **String** |  |  |
| **zipball_url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Release.new(
  assets: null,
  assets_url: null,
  author: null,
  body: null,
  created_at: null,
  discussion_url: null,
  draft: null,
  html_url: null,
  id: null,
  name: null,
  node_id: null,
  prerelease: null,
  published_at: null,
  reactions: null,
  tag_name: null,
  tarball_url: null,
  target_commitish: null,
  upload_url: null,
  url: null,
  zipball_url: null
)
```

