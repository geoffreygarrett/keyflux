# OpenapiClient::HookDelivery

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the delivery. |  |
| **guid** | **String** | Unique identifier for the event (shared with all deliveries for all webhooks that subscribe to this event). |  |
| **delivered_at** | **Time** | Time when the delivery was delivered. |  |
| **redelivery** | **Boolean** | Whether the delivery is a redelivery. |  |
| **duration** | **Float** | Time spent delivering. |  |
| **status** | **String** | Description of the status of the attempted delivery |  |
| **status_code** | **Integer** | Status code received when delivery was made. |  |
| **event** | **String** | The event that triggered the delivery. |  |
| **action** | **String** | The type of activity for the event that triggered the delivery. |  |
| **installation_id** | **Integer** | The id of the GitHub App installation associated with this event. |  |
| **repository_id** | **Integer** | The id of the repository associated with this event. |  |
| **throttled_at** | **Time** | Time when the webhook delivery was throttled. | [optional] |
| **url** | **String** | The URL target of the delivery. | [optional] |
| **request** | [**HookDeliveryRequest**](HookDeliveryRequest.md) |  |  |
| **response** | [**HookDeliveryResponse**](HookDeliveryResponse.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::HookDelivery.new(
  id: 42,
  guid: 58474f00-b361-11eb-836d-0e4f3503ccbe,
  delivered_at: 2021-05-12T20:33:44Z,
  redelivery: false,
  duration: 0.03,
  status: failed to connect,
  status_code: 502,
  event: issues,
  action: opened,
  installation_id: 123,
  repository_id: 123,
  throttled_at: 2021-05-12T20:33:44Z,
  url: https://www.example.com,
  request: null,
  response: null
)
```

