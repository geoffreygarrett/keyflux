# OpenapiClient::WebhookRegistryPackagePublishedRegistryPackagePackageVersion

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author** | [**WebhookRegistryPackagePublishedRegistryPackageOwner**](WebhookRegistryPackagePublishedRegistryPackageOwner.md) |  | [optional] |
| **body** | [**WebhookPackagePublishedPackagePackageVersionBody**](WebhookPackagePublishedPackagePackageVersionBody.md) |  | [optional] |
| **body_html** | **String** |  | [optional] |
| **container_metadata** | [**WebhookRegistryPackagePublishedRegistryPackagePackageVersionContainerMetadata**](WebhookRegistryPackagePublishedRegistryPackagePackageVersionContainerMetadata.md) |  | [optional] |
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
| **npm_metadata** | [**WebhookRegistryPackagePublishedRegistryPackagePackageVersionNpmMetadata**](WebhookRegistryPackagePublishedRegistryPackagePackageVersionNpmMetadata.md) |  | [optional] |
| **nuget_metadata** | [**Array&lt;WebhookRegistryPackagePublishedRegistryPackagePackageVersionNugetMetadataInner&gt;**](WebhookRegistryPackagePublishedRegistryPackagePackageVersionNugetMetadataInner.md) |  | [optional] |
| **package_files** | [**Array&lt;WebhookRegistryPackagePublishedRegistryPackagePackageVersionPackageFilesInner&gt;**](WebhookRegistryPackagePublishedRegistryPackagePackageVersionPackageFilesInner.md) |  |  |
| **package_url** | **String** |  |  |
| **prerelease** | **Boolean** |  | [optional] |
| **release** | [**WebhookRegistryPackagePublishedRegistryPackagePackageVersionRelease**](WebhookRegistryPackagePublishedRegistryPackagePackageVersionRelease.md) |  | [optional] |
| **rubygems_metadata** | [**Array&lt;WebhookRubygemsMetadata&gt;**](WebhookRubygemsMetadata.md) |  | [optional] |
| **summary** | **String** |  |  |
| **tag_name** | **String** |  | [optional] |
| **target_commitish** | **String** |  | [optional] |
| **target_oid** | **String** |  | [optional] |
| **updated_at** | **String** |  | [optional] |
| **version** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRegistryPackagePublishedRegistryPackagePackageVersion.new(
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
  summary: null,
  tag_name: null,
  target_commitish: null,
  target_oid: null,
  updated_at: null,
  version: null
)
```

