# OpenapiClient::IssuesRemoveAssigneesRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **assignees** | **Array&lt;String&gt;** | Usernames of assignees to remove from an issue. _NOTE: Only users with push access can remove assignees from an issue. Assignees are silently ignored otherwise._ | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IssuesRemoveAssigneesRequest.new(
  assignees: null
)
```

