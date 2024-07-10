# OpenapiClient::Email

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **email** | **String** |  |  |
| **primary** | **Boolean** |  |  |
| **verified** | **Boolean** |  |  |
| **visibility** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Email.new(
  email: octocat@github.com,
  primary: true,
  verified: true,
  visibility: public
)
```

