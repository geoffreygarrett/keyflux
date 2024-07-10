# OpenapiClient::OrgsCreateOrUpdateCustomPropertiesValuesForReposRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **repository_names** | **Array&lt;String&gt;** | The names of repositories that the custom property values will be applied to. |  |
| **properties** | [**Array&lt;CustomPropertyValue&gt;**](CustomPropertyValue.md) | List of custom property names and associated values to apply to the repositories. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsCreateOrUpdateCustomPropertiesValuesForReposRequest.new(
  repository_names: null,
  properties: null
)
```

