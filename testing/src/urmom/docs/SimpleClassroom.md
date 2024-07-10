# OpenapiClient::SimpleClassroom

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the classroom. |  |
| **name** | **String** | The name of the classroom. |  |
| **archived** | **Boolean** | Returns whether classroom is archived or not. |  |
| **url** | **String** | The url of the classroom on GitHub Classroom. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SimpleClassroom.new(
  id: 42,
  name: Programming Elixir,
  archived: false,
  url: https://classroom.github.com/classrooms/1-programming-elixir
)
```

