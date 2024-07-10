# OpenapiClient::OrgHookConfig

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  | [optional] |
| **insecure_ssl** | **String** |  | [optional] |
| **content_type** | **String** |  | [optional] |
| **secret** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgHookConfig.new(
  url: &quot;http://example.com/2&quot;,
  insecure_ssl: &quot;0&quot;,
  content_type: &quot;form&quot;,
  secret: &quot;********&quot;
)
```

