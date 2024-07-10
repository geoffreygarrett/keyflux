# OpenapiClient::TeamsAddOrUpdateProjectPermissionsInOrgRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **permission** | **String** | The permission to grant to the team for this project. Default: the team&#39;s &#x60;permission&#x60; attribute will be used to determine what permission to grant the team on this project. Note that, if you choose not to pass any parameters, you&#39;ll need to set &#x60;Content-Length&#x60; to zero when calling this endpoint. For more information, see \&quot;[HTTP method](https://docs.github.com/rest/guides/getting-started-with-the-rest-api#http-method).\&quot; | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamsAddOrUpdateProjectPermissionsInOrgRequest.new(
  permission: null
)
```

