# OpenapiClient::IntegrationInstallationRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the request installation. |  |
| **node_id** | **String** |  | [optional] |
| **account** | [**IntegrationInstallationRequestAccount**](IntegrationInstallationRequestAccount.md) |  |  |
| **requester** | [**SimpleUser**](SimpleUser.md) |  |  |
| **created_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::IntegrationInstallationRequest.new(
  id: 42,
  node_id: MDExOkludGVncmF0aW9uMQ&#x3D;&#x3D;,
  account: null,
  requester: null,
  created_at: 2022-07-08T16:18:44-04:00
)
```

