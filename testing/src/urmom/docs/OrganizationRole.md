# OpenapiClient::OrganizationRole

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | The unique identifier of the role. |  |
| **name** | **String** | The name of the role. |  |
| **description** | **String** | A short description about who this role is for or what permissions it grants. | [optional] |
| **permissions** | **Array&lt;String&gt;** | A list of permissions included in this role. |  |
| **organization** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **created_at** | **Time** | The date and time the role was created. |  |
| **updated_at** | **Time** | The date and time the role was last updated. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrganizationRole.new(
  id: null,
  name: null,
  description: null,
  permissions: null,
  organization: null,
  created_at: null,
  updated_at: null
)
```

