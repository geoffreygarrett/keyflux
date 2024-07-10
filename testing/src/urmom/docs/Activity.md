# OpenapiClient::Activity

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **before** | **String** | The SHA of the commit before the activity. |  |
| **after** | **String** | The SHA of the commit after the activity. |  |
| **ref** | **String** | The full Git reference, formatted as &#x60;refs/heads/&lt;branch name&gt;&#x60;. |  |
| **timestamp** | **Time** | The time when the activity occurred. |  |
| **activity_type** | **String** | The type of the activity that was performed. |  |
| **actor** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Activity.new(
  id: 1296269,
  node_id: MDEwOlJlcG9zaXRvcnkxMjk2MjY5,
  before: 6dcb09b5b57875f334f61aebed695e2e4193db5e,
  after: 827efc6d56897b048c772eb4087f854f46256132,
  ref: refs/heads/main,
  timestamp: 2011-01-26T19:06:43Z,
  activity_type: force_push,
  actor: null
)
```

