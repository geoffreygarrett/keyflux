# OpenapiClient::ContributorActivity

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **author** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **total** | **Integer** |  |  |
| **weeks** | [**Array&lt;ContributorActivityWeeksInner&gt;**](ContributorActivityWeeksInner.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::ContributorActivity.new(
  author: null,
  total: 135,
  weeks: [{&quot;w&quot;:&quot;1367712000&quot;,&quot;a&quot;:6898,&quot;d&quot;:77,&quot;c&quot;:10}]
)
```

