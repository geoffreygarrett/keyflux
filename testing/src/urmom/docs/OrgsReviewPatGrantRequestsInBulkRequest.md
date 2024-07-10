# OpenapiClient::OrgsReviewPatGrantRequestsInBulkRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **pat_request_ids** | **Array&lt;Integer&gt;** | Unique identifiers of the requests for access via fine-grained personal access token. Must be formed of between 1 and 100 &#x60;pat_request_id&#x60; values. | [optional] |
| **action** | **String** | Action to apply to the requests. |  |
| **reason** | **String** | Reason for approving or denying the requests. Max 1024 characters. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrgsReviewPatGrantRequestsInBulkRequest.new(
  pat_request_ids: null,
  action: null,
  reason: null
)
```

