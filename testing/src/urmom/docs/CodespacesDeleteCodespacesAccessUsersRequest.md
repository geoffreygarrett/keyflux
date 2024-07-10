# OpenapiClient::CodespacesDeleteCodespacesAccessUsersRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **selected_usernames** | **Array&lt;String&gt;** | The usernames of the organization members whose codespaces should not be billed to the organization. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodespacesDeleteCodespacesAccessUsersRequest.new(
  selected_usernames: null
)
```

