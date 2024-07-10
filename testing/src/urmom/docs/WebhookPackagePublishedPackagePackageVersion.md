# OpenapiClient::WebhookPackagePublishedPackagePackageVersion

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author** | [**User**](User.md) |  | [optional] |
| **body** | [**WebhookPackagePublishedPackagePackageVersionBody**](WebhookPackagePublishedPackagePackageVersionBody.md) |  | [optional] |
| **body_html** | **String** |  | [optional] |
| **container_metadata** | [**WebhookPackagePublishedPackagePackageVersionContainerMetadata**](WebhookPackagePublishedPackagePackageVersionContainerMetadata.md) |  | [optional] |
| **created_at** | **String** |  | [optional] |
| **description** | **String** |  |  |
| **docker_metadata** | [**Array&lt;WebhookPackagePublishedPackagePackageVersionDockerMetadataInner&gt;**](WebhookPackagePublishedPackagePackageVersionDockerMetadataInner.md) |  | [optional] |
| **draft** | **Boolean** |  | [optional] |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **installation_command** | **String** |  |  |
| **manifest** | **String** |  | [optional] |
| **metadata** | **Array&lt;Hash&lt;String, Object&gt;&gt;** |  |  |
| **name** | **String** |  |  |
| **npm_metadata** | [**WebhookPackagePublishedPackagePackageVersionNpmMetadata**](WebhookPackagePublishedPackagePackageVersionNpmMetadata.md) |  | [optional] |
| **nuget_metadata** | [**Array&lt;WebhookPackagePublishedPackagePackageVersionNugetMetadataInner&gt;**](WebhookPackagePublishedPackagePackageVersionNugetMetadataInner.md) |  | [optional] |
| **package_files** | [**Array&lt;WebhookPackagePublishedPackagePackageVersionPackageFilesInner&gt;**](WebhookPackagePublishedPackagePackageVersionPackageFilesInner.md) |  |  |
| **package_url** | **String** |  | [optional] |
| **prerelease** | **Boolean** |  | [optional] |
| **release** | [**WebhookPackagePublishedPackagePackageVersionRelease**](WebhookPackagePublishedPackagePackageVersionRelease.md) |  | [optional] |
| **rubygems_metadata** | [**Array&lt;WebhookRubygemsMetadata&gt;**](WebhookRubygemsMetadata.md) |  | [optional] |
| **source_url** | **String** |  | [optional] |
| **summary** | **String** |  |  |
| **tag_name** | **String** |  | [optional] |
| **target_commitish** | **String** |  | [optional] |
| **target_oid** | **String** |  | [optional] |
| **updated_at** | **String** |  | [optional] |
| **version** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPackagePublishedPackagePackageVersion.new(
  author: null,
  body: null,
  body_html: null,
  container_metadata: null,
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
  npm_metadata: null,
  nuget_metadata: null,
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

