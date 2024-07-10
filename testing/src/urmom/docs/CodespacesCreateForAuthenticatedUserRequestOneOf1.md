# OpenapiClient::CodespacesCreateForAuthenticatedUserRequestOneOf1

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **pull_request** | [**CodespacesCreateForAuthenticatedUserRequestOneOf1PullRequest**](CodespacesCreateForAuthenticatedUserRequestOneOf1PullRequest.md) |  |  |
| **location** | **String** | The requested location for a new codespace. Best efforts are made to respect this upon creation. Assigned by IP if not provided. | [optional] |
| **geo** | **String** | The geographic area for this codespace. If not specified, the value is assigned by IP. This property replaces &#x60;location&#x60;, which is being deprecated. | [optional] |
| **machine** | **String** | Machine type to use for this codespace | [optional] |
| **devcontainer_path** | **String** | Path to devcontainer.json config to use for this codespace | [optional] |
| **working_directory** | **String** | Working directory for this codespace | [optional] |
| **idle_timeout_minutes** | **Integer** | Time in minutes before codespace stops from inactivity | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodespacesCreateForAuthenticatedUserRequestOneOf1.new(
  pull_request: null,
  location: null,
  geo: null,
  machine: null,
  devcontainer_path: null,
  working_directory: null,
  idle_timeout_minutes: null
)
```

