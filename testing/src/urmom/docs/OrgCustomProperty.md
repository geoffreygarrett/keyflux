# OpenapiClient::OrgCustomProperty

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **property_name** | **String** | The name of the property |  |
| **value_type** | **String** | The type of the value for the property |  |
| **required** | **Boolean** | Whether the property is required. | [optional] |
| **default_value** | [**OrgsCreateOrUpdateCustomPropertyRequestDefaultValue**](OrgsCreateOrUpdateCustomPropertyRequestDefaultValue.md) |  | [optional] |
| **description** | **String** | Short description of the property | [optional] |
| **allowed_values** | **Array&lt;String&gt;** | An ordered list of the allowed values of the property. The property can have up to 200 allowed values. | [optional] |
| **values_editable_by** | **String** | Who can edit the values of the property | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgCustomProperty.new(
  property_name: null,
  value_type: single_select,
  required: null,
  default_value: null,
  description: null,
  allowed_values: null,
  values_editable_by: org_actors
)
```

