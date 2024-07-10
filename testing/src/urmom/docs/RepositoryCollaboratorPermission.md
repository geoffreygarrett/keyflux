# OpenapiClient::RepositoryCollaboratorPermission

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **permission** | **String** |  |  |
| **role_name** | **String** |  |  |
| **user** | [**NullableCollaborator**](NullableCollaborator.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryCollaboratorPermission.new(
  permission: null,
  role_name: admin,
  user: null
)
```

