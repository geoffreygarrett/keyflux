# OpenapiClient::MigrationsSetLfsPreferenceRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **use_lfs** | **String** | Whether to store large files during the import. &#x60;opt_in&#x60; means large files will be stored using Git LFS. &#x60;opt_out&#x60; means large files will be removed during the import. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::MigrationsSetLfsPreferenceRequest.new(
  use_lfs: null
)
```

