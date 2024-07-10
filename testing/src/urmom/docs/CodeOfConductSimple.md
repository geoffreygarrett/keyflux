# OpenapiClient::CodeOfConductSimple

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **url** | **String** |  |  |
| **key** | **String** |  |  |
| **name** | **String** |  |  |
| **html_url** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::CodeOfConductSimple.new(
  url: https://api.github.com/repos/github/docs/community/code_of_conduct,
  key: citizen_code_of_conduct,
  name: Citizen Code of Conduct,
  html_url: https://github.com/github/docs/blob/main/CODE_OF_CONDUCT.md
)
```

