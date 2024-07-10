# OpenapiClient::OrgsListOrgRoles200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **total_count** | **Integer** | The total number of organization roles available to the organization. | [optional] |
| **roles** | [**Array&lt;OrganizationRole&gt;**](OrganizationRole.md) | The list of organization roles available to the organization. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsListOrgRoles200Response.new(
  total_count: null,
  roles: null
)
```

