# OpenapiClient::ProjectsUpdateCardRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **note** | **String** | The project card&#39;s note | [optional] |
| **archived** | **Boolean** | Whether or not the card is archived | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ProjectsUpdateCardRequest.new(
  note: Update all gems,
  archived: false
)
```

