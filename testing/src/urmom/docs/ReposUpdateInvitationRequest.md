# OpenapiClient::ReposUpdateInvitationRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **permissions** | **String** | The permissions that the associated user will have on the repository. Valid values are &#x60;read&#x60;, &#x60;write&#x60;, &#x60;maintain&#x60;, &#x60;triage&#x60;, and &#x60;admin&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateInvitationRequest.new(
  permissions: null
)
```

