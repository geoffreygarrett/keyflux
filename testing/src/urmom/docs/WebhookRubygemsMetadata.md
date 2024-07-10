# OpenapiClient::WebhookRubygemsMetadata

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  | [optional] |
| **description** | **String** |  | [optional] |
| **readme** | **String** |  | [optional] |
| **homepage** | **String** |  | [optional] |
| **version_info** | [**WebhookRubygemsMetadataVersionInfo**](WebhookRubygemsMetadataVersionInfo.md) |  | [optional] |
| **platform** | **String** |  | [optional] |
| **metadata** | **Hash&lt;String, String&gt;** |  | [optional] |
| **repo** | **String** |  | [optional] |
| **dependencies** | **Array&lt;Hash&lt;String, String&gt;&gt;** |  | [optional] |
| **commit_oid** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRubygemsMetadata.new(
  name: null,
  description: null,
  readme: null,
  homepage: null,
  version_info: null,
  platform: null,
  metadata: null,
  repo: null,
  dependencies: null,
  commit_oid: null
)
```

