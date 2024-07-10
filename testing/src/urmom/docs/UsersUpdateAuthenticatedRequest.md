# OpenapiClient::UsersUpdateAuthenticatedRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The new name of the user. | [optional] |
| **email** | **String** | The publicly visible email address of the user. | [optional] |
| **blog** | **String** | The new blog URL of the user. | [optional] |
| **twitter_username** | **String** | The new Twitter username of the user. | [optional] |
| **company** | **String** | The new company of the user. | [optional] |
| **location** | **String** | The new location of the user. | [optional] |
| **hireable** | **Boolean** | The new hiring availability of the user. | [optional] |
| **bio** | **String** | The new short biography of the user. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::UsersUpdateAuthenticatedRequest.new(
  name: Omar Jahandar,
  email: omar@example.com,
  blog: blog.example.com,
  twitter_username: therealomarj,
  company: Acme corporation,
  location: Berlin, Germany,
  hireable: null,
  bio: null
)
```

