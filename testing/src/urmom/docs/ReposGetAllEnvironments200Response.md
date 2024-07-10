# OpenapiClient::ReposGetAllEnvironments200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_count** | **Integer** | The number of environments in this repository | [optional] |
| **environments** | [**Array&lt;Environment&gt;**](Environment.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposGetAllEnvironments200Response.new(
  total_count: 5,
  environments: null
)
```

