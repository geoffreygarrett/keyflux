# OpenapiClient::WebhookPackageUpdatedPackagePackageVersion

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author** | [**User**](User.md) |  |  |
| **body** | **String** |  |  |
| **body_html** | **String** |  |  |
| **created_at** | **String** |  |  |
| **description** | **String** |  |  |
| **docker_metadata** | [**Array&lt;WebhookPackagePublishedPackagePackageVersionDockerMetadataInner&gt;**](WebhookPackagePublishedPackagePackageVersionDockerMetadataInner.md) |  | [optional] |
| **draft** | **Boolean** |  | [optional] |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **installation_command** | **String** |  |  |
| **manifest** | **String** |  | [optional] |
| **metadata** | **Array&lt;Hash&lt;String, Object&gt;&gt;** |  |  |
| **name** | **String** |  |  |
| **package_files** | [**Array&lt;WebhookPackageUpdatedPackagePackageVersionPackageFilesInner&gt;**](WebhookPackageUpdatedPackagePackageVersionPackageFilesInner.md) |  |  |
| **package_url** | **String** |  | [optional] |
| **prerelease** | **Boolean** |  | [optional] |
| **release** | [**WebhookPackageUpdatedPackagePackageVersionRelease**](WebhookPackageUpdatedPackagePackageVersionRelease.md) |  | [optional] |
| **rubygems_metadata** | [**Array&lt;WebhookRubygemsMetadata&gt;**](WebhookRubygemsMetadata.md) |  | [optional] |
| **source_url** | **String** |  | [optional] |
| **summary** | **String** |  |  |
| **tag_name** | **String** |  | [optional] |
| **target_commitish** | **String** |  |  |
| **target_oid** | **String** |  |  |
| **updated_at** | **String** |  |  |
| **version** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPackageUpdatedPackagePackageVersion.new(
  author: null,
  body: null,
  body_html: null,
  created_at: null,
  description: null,
  docker_metadata: null,
  draft: null,
  html_url: null,
  id: null,
  installation_command: null,
  manifest: null,
  metadata: null,
  name: null,
  package_files: null,
  package_url: null,
  prerelease: null,
  release: null,
  rubygems_metadata: null,
  source_url: null,
  summary: null,
  tag_name: null,
  target_commitish: null,
  target_oid: null,
  updated_at: null,
  version: null
)
```

