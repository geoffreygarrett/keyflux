# OpenapiClient::CommunityProfileFiles

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **code_of_conduct** | [**NullableCodeOfConductSimple**](NullableCodeOfConductSimple.md) |  |  |
| **code_of_conduct_file** | [**NullableCommunityHealthFile**](NullableCommunityHealthFile.md) |  |  |
| **license** | [**NullableLicenseSimple**](NullableLicenseSimple.md) |  |  |
| **contributing** | [**NullableCommunityHealthFile**](NullableCommunityHealthFile.md) |  |  |
| **readme** | [**NullableCommunityHealthFile**](NullableCommunityHealthFile.md) |  |  |
| **issue_template** | [**NullableCommunityHealthFile**](NullableCommunityHealthFile.md) |  |  |
| **pull_request_template** | [**NullableCommunityHealthFile**](NullableCommunityHealthFile.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CommunityProfileFiles.new(
  code_of_conduct: null,
  code_of_conduct_file: null,
  license: null,
  contributing: null,
  readme: null,
  issue_template: null,
  pull_request_template: null
)
```

