# OpenapiClient::IssuesLockRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **lock_reason** | **String** | The reason for locking the issue or pull request conversation. Lock will fail if you don&#39;t use one of these reasons:    * &#x60;off-topic&#x60;    * &#x60;too heated&#x60;    * &#x60;resolved&#x60;    * &#x60;spam&#x60; | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IssuesLockRequest.new(
  lock_reason: null
)
```

