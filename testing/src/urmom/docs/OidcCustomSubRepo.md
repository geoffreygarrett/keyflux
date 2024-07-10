# OpenapiClient::OidcCustomSubRepo

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **use_default** | **Boolean** | Whether to use the default template or not. If &#x60;true&#x60;, the &#x60;include_claim_keys&#x60; field is ignored. |  |
| **include_claim_keys** | **Array&lt;String&gt;** | Array of unique strings. Each claim key can only contain alphanumeric characters and underscores. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OidcCustomSubRepo.new(
  use_default: null,
  include_claim_keys: null
)
```

