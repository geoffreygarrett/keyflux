# OpenapiClient::CodespacesUpdateForAuthenticatedUserRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **machine** | **String** | A valid machine to transition this codespace to. | [optional] |
| **display_name** | **String** | Display name for this codespace | [optional] |
| **recent_folders** | **Array&lt;String&gt;** | Recently opened folders inside the codespace. It is currently used by the clients to determine the folder path to load the codespace in. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodespacesUpdateForAuthenticatedUserRequest.new(
  machine: null,
  display_name: null,
  recent_folders: null
)
```

