# OpenapiClient::ReposAddCollaboratorRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **permission** | **String** | The permission to grant the collaborator. **Only valid on organization-owned repositories.** We accept the following permissions to be set: &#x60;pull&#x60;, &#x60;triage&#x60;, &#x60;push&#x60;, &#x60;maintain&#x60;, &#x60;admin&#x60; and you can also specify a custom repository role name, if the owning organization has defined any. | [optional][default to &#39;push&#39;] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposAddCollaboratorRequest.new(
  permission: null
)
```

