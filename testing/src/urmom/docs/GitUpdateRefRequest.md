# OpenapiClient::GitUpdateRefRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **sha** | **String** | The SHA1 value to set this reference to |  |
| **force** | **Boolean** | Indicates whether to force the update or to make sure the update is a fast-forward update. Leaving this out or setting it to &#x60;false&#x60; will make sure you&#39;re not overwriting work. | [optional][default to false] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitUpdateRefRequest.new(
  sha: null,
  force: null
)
```

