# OpenapiClient::OrgRepoCustomPropertyValues

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **repository_id** | **Integer** |  |  |
| **repository_name** | **String** |  |  |
| **repository_full_name** | **String** |  |  |
| **properties** | [**Array&lt;CustomPropertyValue&gt;**](CustomPropertyValue.md) | List of custom property names and associated values |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgRepoCustomPropertyValues.new(
  repository_id: 1296269,
  repository_name: Hello-World,
  repository_full_name: octocat/Hello-World,
  properties: null
)
```

