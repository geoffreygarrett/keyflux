# OpenapiClient::CodespacesPublishForAuthenticatedUserRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | A name for the new repository. | [optional] |
| **private** | **Boolean** | Whether the new repository should be private. | [optional][default to false] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodespacesPublishForAuthenticatedUserRequest.new(
  name: null,
  private: null
)
```

