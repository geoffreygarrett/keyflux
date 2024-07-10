# OpenapiClient::OrgsSetMembershipForUserRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **role** | **String** | The role to give the user in the organization. Can be one of:    * &#x60;admin&#x60; - The user will become an owner of the organization.    * &#x60;member&#x60; - The user will become a non-owner member of the organization. | [optional][default to &#39;member&#39;] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsSetMembershipForUserRequest.new(
  role: null
)
```

