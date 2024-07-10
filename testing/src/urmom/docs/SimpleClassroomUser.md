# OpenapiClient::SimpleClassroomUser

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** |  |  |
| **login** | **String** |  |  |
| **avatar_url** | **String** |  |  |
| **html_url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::SimpleClassroomUser.new(
  id: 1,
  login: octocat,
  avatar_url: https://github.com/images/error/octocat_happy.gif,
  html_url: https://github.com/octocat
)
```

