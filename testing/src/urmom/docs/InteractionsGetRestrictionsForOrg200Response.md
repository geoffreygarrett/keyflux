# OpenapiClient::InteractionsGetRestrictionsForOrg200Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **limit** | [**InteractionGroup**](InteractionGroup.md) |  |  |
| **origin** | **String** |  |  |
| **expires_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::InteractionsGetRestrictionsForOrg200Response.new(
  limit: null,
  origin: repository,
  expires_at: 2018-08-17T04:18:39Z
)
```

