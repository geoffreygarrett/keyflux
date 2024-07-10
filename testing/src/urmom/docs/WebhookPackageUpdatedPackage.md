# OpenapiClient::WebhookPackageUpdatedPackage

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created_at** | **String** |  |  |
| **description** | **String** |  |  |
| **ecosystem** | **String** |  |  |
| **html_url** | **String** |  |  |
| **id** | **Integer** |  |  |
| **name** | **String** |  |  |
| **namespace** | **String** |  |  |
| **owner** | [**User**](User.md) |  |  |
| **package_type** | **String** |  |  |
| **package_version** | [**WebhookPackageUpdatedPackagePackageVersion**](WebhookPackageUpdatedPackagePackageVersion.md) |  |  |
| **registry** | [**WebhookPackagePublishedPackageRegistry**](WebhookPackagePublishedPackageRegistry.md) |  |  |
| **updated_at** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPackageUpdatedPackage.new(
  created_at: null,
  description: null,
  ecosystem: null,
  html_url: null,
  id: null,
  name: null,
  namespace: null,
  owner: null,
  package_type: null,
  package_version: null,
  registry: null,
  updated_at: null
)
```

