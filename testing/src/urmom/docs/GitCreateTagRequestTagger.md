# OpenapiClient::GitCreateTagRequestTagger

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the author of the tag |  |
| **email** | **String** | The email of the author of the tag |  |
| **date** | **Time** | When this object was tagged. This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitCreateTagRequestTagger.new(
  name: null,
  email: null,
  date: null
)
```

