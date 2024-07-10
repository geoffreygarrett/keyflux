# OpenapiClient::EnvironmentProtectionRulesInnerAnyOf

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **type** | **String** |  |  |
| **wait_timer** | **Integer** | The amount of time to delay a job after the job is initially triggered. The time (in minutes) must be an integer between 0 and 43,200 (30 days). | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::EnvironmentProtectionRulesInnerAnyOf.new(
  id: 3515,
  node_id: MDQ6R2F0ZTM1MTU&#x3D;,
  type: wait_timer,
  wait_timer: 30
)
```

