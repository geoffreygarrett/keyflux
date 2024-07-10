# OpenapiClient::ReposSetAppAccessRestrictionsRequestOneOf

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **apps** | **Array&lt;String&gt;** | The GitHub Apps that have push access to this branch. Use the slugified version of the app name. **Note**: The list of users, apps, and teams in total is limited to 100 items. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposSetAppAccessRestrictionsRequestOneOf.new(
  apps: null
)
```

