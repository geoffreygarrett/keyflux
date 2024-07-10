# OpenapiClient::ReposCreateReleaseRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **tag_name** | **String** | The name of the tag. |  |
| **target_commitish** | **String** | Specifies the commitish value that determines where the Git tag is created from. Can be any branch or commit SHA. Unused if the Git tag already exists. Default: the repository&#39;s default branch. | [optional] |
| **name** | **String** | The name of the release. | [optional] |
| **body** | **String** | Text describing the contents of the tag. | [optional] |
| **draft** | **Boolean** | &#x60;true&#x60; to create a draft (unpublished) release, &#x60;false&#x60; to create a published one. | [optional][default to false] |
| **prerelease** | **Boolean** | &#x60;true&#x60; to identify the release as a prerelease. &#x60;false&#x60; to identify the release as a full release. | [optional][default to false] |
| **discussion_category_name** | **String** | If specified, a discussion of the specified category is created and linked to the release. The value must be a category that already exists in the repository. For more information, see \&quot;[Managing categories for discussions in your repository](https://docs.github.com/discussions/managing-discussions-for-your-community/managing-categories-for-discussions-in-your-repository).\&quot; | [optional] |
| **generate_release_notes** | **Boolean** | Whether to automatically generate the name and body for this release. If &#x60;name&#x60; is specified, the specified name will be used; otherwise, a name will be automatically generated. If &#x60;body&#x60; is specified, the body will be pre-pended to the automatically generated notes. | [optional][default to false] |
| **make_latest** | **String** | Specifies whether this release should be set as the latest release for the repository. Drafts and prereleases cannot be set as latest. Defaults to &#x60;true&#x60; for newly published releases. &#x60;legacy&#x60; specifies that the latest release should be determined based on the release creation date and higher semantic version. | [optional][default to &#39;true&#39;] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposCreateReleaseRequest.new(
  tag_name: null,
  target_commitish: null,
  name: null,
  body: null,
  draft: null,
  prerelease: null,
  discussion_category_name: null,
  generate_release_notes: null,
  make_latest: null
)
```

