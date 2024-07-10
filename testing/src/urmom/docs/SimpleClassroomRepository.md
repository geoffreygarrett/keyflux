# OpenapiClient::SimpleClassroomRepository

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | A unique identifier of the repository. |  |
| **full_name** | **String** | The full, globally unique name of the repository. |  |
| **html_url** | **String** | The URL to view the repository on GitHub.com. |  |
| **node_id** | **String** | The GraphQL identifier of the repository. |  |
| **private** | **Boolean** | Whether the repository is private. |  |
| **default_branch** | **String** | The default branch for the repository. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SimpleClassroomRepository.new(
  id: 1296269,
  full_name: octocat/Hello-World,
  html_url: https://github.com/octocat/Hello-World,
  node_id: MDEwOlJlcG9zaXRvcnkxMjk2MjY5,
  private: null,
  default_branch: main
)
```

