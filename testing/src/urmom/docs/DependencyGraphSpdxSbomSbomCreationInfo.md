# OpenapiClient::DependencyGraphSpdxSbomSbomCreationInfo

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **created** | **String** | The date and time the SPDX document was created. |  |
| **creators** | **Array&lt;String&gt;** | The tools that were used to generate the SPDX document. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependencyGraphSpdxSbomSbomCreationInfo.new(
  created: 2021-11-03T00:00:00Z,
  creators: null
)
```

