# OpenapiClient::TeamMembership

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **role** | **String** | The role of the user in the team. | [default to &#39;member&#39;] |
| **state** | **String** | The state of the user&#39;s membership in the team. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamMembership.new(
  url: null,
  role: member,
  state: null
)
```

