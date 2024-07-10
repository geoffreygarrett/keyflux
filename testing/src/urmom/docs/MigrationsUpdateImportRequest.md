# OpenapiClient::MigrationsUpdateImportRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **vcs_username** | **String** | The username to provide to the originating repository. | [optional] |
| **vcs_password** | **String** | The password to provide to the originating repository. | [optional] |
| **vcs** | **String** | The type of version control system you are migrating from. | [optional] |
| **tfvc_project** | **String** | For a tfvc import, the name of the project that is being imported. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MigrationsUpdateImportRequest.new(
  vcs_username: null,
  vcs_password: null,
  vcs: &quot;git&quot;,
  tfvc_project: &quot;project1&quot;
)
```

