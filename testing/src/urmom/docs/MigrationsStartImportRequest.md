# OpenapiClient::MigrationsStartImportRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **vcs_url** | **String** | The URL of the originating repository. |  |
| **vcs** | **String** | The originating VCS type. Without this parameter, the import job will take additional time to detect the VCS type before beginning the import. This detection step will be reflected in the response. | [optional] |
| **vcs_username** | **String** | If authentication is required, the username to provide to &#x60;vcs_url&#x60;. | [optional] |
| **vcs_password** | **String** | If authentication is required, the password to provide to &#x60;vcs_url&#x60;. | [optional] |
| **tfvc_project** | **String** | For a tfvc import, the name of the project that is being imported. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MigrationsStartImportRequest.new(
  vcs_url: null,
  vcs: null,
  vcs_username: null,
  vcs_password: null,
  tfvc_project: null
)
```

