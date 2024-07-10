# OpenapiClient::IssuesAddAssigneesRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **assignees** | **Array&lt;String&gt;** | Usernames of people to assign this issue to. _NOTE: Only users with push access can add assignees to an issue. Assignees are silently ignored otherwise._ | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IssuesAddAssigneesRequest.new(
  assignees: null
)
```

