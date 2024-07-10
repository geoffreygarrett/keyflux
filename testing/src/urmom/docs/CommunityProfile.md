# OpenapiClient::CommunityProfile

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **health_percentage** | **Integer** |  |  |
| **description** | **String** |  |  |
| **documentation** | **String** |  |  |
| **files** | [**CommunityProfileFiles**](CommunityProfileFiles.md) |  |  |
| **updated_at** | **Time** |  |  |
| **content_reports_enabled** | **Boolean** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CommunityProfile.new(
  health_percentage: 100,
  description: My first repository on GitHub!,
  documentation: example.com,
  files: null,
  updated_at: 2017-02-28T19:09:29Z,
  content_reports_enabled: true
)
```

