# OpenapiClient::ActionsCreateWorkflowDispatchRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **ref** | **String** | The git reference for the workflow. The reference can be a branch or tag name. |  |
| **inputs** | **Hash&lt;String, Object&gt;** | Input keys and values configured in the workflow file. The maximum number of properties is 10. Any default properties configured in the workflow file will be used when &#x60;inputs&#x60; are omitted. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsCreateWorkflowDispatchRequest.new(
  ref: null,
  inputs: null
)
```

