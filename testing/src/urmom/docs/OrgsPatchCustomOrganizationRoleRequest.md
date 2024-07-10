# OpenapiClient::OrgsPatchCustomOrganizationRoleRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the custom role. | [optional] |
| **description** | **String** | A short description about the intended usage of this role or what permissions it grants. | [optional] |
| **permissions** | **Array&lt;String&gt;** | A list of additional permissions included in this role. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsPatchCustomOrganizationRoleRequest.new(
  name: null,
  description: null,
  permissions: null
)
```

