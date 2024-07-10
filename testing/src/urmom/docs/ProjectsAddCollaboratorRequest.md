# OpenapiClient::ProjectsAddCollaboratorRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **permission** | **String** | The permission to grant the collaborator. | [optional][default to &#39;write&#39;] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectsAddCollaboratorRequest.new(
  permission: write
)
```

