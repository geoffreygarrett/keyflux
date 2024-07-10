# OpenapiClient::CodespacesSetCodespacesAccessRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **visibility** | **String** | Which users can access codespaces in the organization. &#x60;disabled&#x60; means that no users can access codespaces in the organization. |  |
| **selected_usernames** | **Array&lt;String&gt;** | The usernames of the organization members who should have access to codespaces in the organization. Required when &#x60;visibility&#x60; is &#x60;selected_members&#x60;. The provided list of usernames will replace any existing value. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodespacesSetCodespacesAccessRequest.new(
  visibility: null,
  selected_usernames: null
)
```

