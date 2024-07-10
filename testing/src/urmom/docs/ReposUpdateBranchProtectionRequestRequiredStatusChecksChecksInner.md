# OpenapiClient::ReposUpdateBranchProtectionRequestRequiredStatusChecksChecksInner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **context** | **String** | The name of the required check |  |
| **app_id** | **Integer** | The ID of the GitHub App that must provide this check. Omit this field to automatically select the GitHub App that has recently provided this check, or any app if it was not set by a GitHub App. Pass -1 to explicitly allow any app to set the status. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateBranchProtectionRequestRequiredStatusChecksChecksInner.new(
  context: null,
  app_id: null
)
```

