# OpenapiClient::DependencyGraphCreateRepositorySnapshot201Response

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | ID of the created snapshot. |  |
| **created_at** | **String** | The time at which the snapshot was created. |  |
| **result** | **String** | Either \&quot;SUCCESS\&quot;, \&quot;ACCEPTED\&quot;, or \&quot;INVALID\&quot;. \&quot;SUCCESS\&quot; indicates that the snapshot was successfully created and the repository&#39;s dependencies were updated. \&quot;ACCEPTED\&quot; indicates that the snapshot was successfully created, but the repository&#39;s dependencies were not updated. \&quot;INVALID\&quot; indicates that the snapshot was malformed. |  |
| **message** | **String** | A message providing further details about the result, such as why the dependencies were not updated. |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::DependencyGraphCreateRepositorySnapshot201Response.new(
  id: null,
  created_at: null,
  result: null,
  message: null
)
```

