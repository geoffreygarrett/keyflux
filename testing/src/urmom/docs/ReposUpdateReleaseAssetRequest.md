# OpenapiClient::ReposUpdateReleaseAssetRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The file name of the asset. | [optional] |
| **label** | **String** | An alternate short description of the asset. Used in place of the filename. | [optional] |
| **state** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ReposUpdateReleaseAssetRequest.new(
  name: null,
  label: null,
  state: &quot;uploaded&quot;
)
```

