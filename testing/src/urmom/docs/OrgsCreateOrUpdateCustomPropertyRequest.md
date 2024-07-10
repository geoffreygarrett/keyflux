# OpenapiClient::OrgsCreateOrUpdateCustomPropertyRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **value_type** | **String** | The type of the value for the property |  |
| **required** | **Boolean** | Whether the property is required. | [optional] |
| **default_value** | [**OrgsCreateOrUpdateCustomPropertyRequestDefaultValue**](OrgsCreateOrUpdateCustomPropertyRequestDefaultValue.md) |  | [optional] |
| **description** | **String** | Short description of the property | [optional] |
| **allowed_values** | **Array&lt;String&gt;** | An ordered list of the allowed values of the property. The property can have up to 200 allowed values. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsCreateOrUpdateCustomPropertyRequest.new(
  value_type: single_select,
  required: null,
  default_value: null,
  description: null,
  allowed_values: null
)
```

