# OpenapiClient::Event

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **String** |  |  |
| **type** | **String** |  |  |
| **actor** | [**Actor**](Actor.md) |  |  |
| **repo** | [**EventRepo**](EventRepo.md) |  |  |
| **org** | [**Actor**](Actor.md) |  | [optional] |
| **payload** | [**EventPayload**](EventPayload.md) |  |  |
| **public** | **Boolean** |  |  |
| **created_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Event.new(
  id: null,
  type: null,
  actor: null,
  repo: null,
  org: null,
  payload: null,
  public: null,
  created_at: null
)
```

