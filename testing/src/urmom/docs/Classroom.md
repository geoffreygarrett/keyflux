# OpenapiClient::Classroom

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the classroom. |  |
| **name** | **String** | The name of the classroom. |  |
| **archived** | **Boolean** | Whether classroom is archived. |  |
| **organization** | [**SimpleClassroomOrganization**](SimpleClassroomOrganization.md) |  |  |
| **url** | **String** | The URL of the classroom on GitHub Classroom. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Classroom.new(
  id: 42,
  name: Programming Elixir,
  archived: false,
  organization: null,
  url: https://classroom.github.com/classrooms/1-programming-elixir
)
```

