# OpenapiClient::TeamsAddOrUpdateRepoPermissionsLegacyRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **permission** | **String** | The permission to grant the team on this repository. If no permission is specified, the team&#39;s &#x60;permission&#x60; attribute will be used to determine what permission to grant the team on this repository. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamsAddOrUpdateRepoPermissionsLegacyRequest.new(
  permission: null
)
```

