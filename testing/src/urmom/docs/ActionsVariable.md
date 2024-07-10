# OpenapiClient::ActionsVariable

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the variable. |  |
| **value** | **String** | The value of the variable. |  |
| **created_at** | **Time** | The date and time at which the variable was created, in ISO 8601 format&#39;:&#39; YYYY-MM-DDTHH:MM:SSZ. |  |
| **updated_at** | **Time** | The date and time at which the variable was last updated, in ISO 8601 format&#39;:&#39; YYYY-MM-DDTHH:MM:SSZ. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ActionsVariable.new(
  name: USERNAME,
  value: octocat,
  created_at: 2019-01-24T22:45:36Z,
  updated_at: 2019-01-24T22:45:36Z
)
```

