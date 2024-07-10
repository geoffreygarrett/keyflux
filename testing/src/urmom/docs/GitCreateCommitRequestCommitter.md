# OpenapiClient::GitCreateCommitRequestCommitter

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the author (or committer) of the commit | [optional] |
| **email** | **String** | The email of the author (or committer) of the commit | [optional] |
| **date** | **Time** | Indicates when this commit was authored (or committed). This is a timestamp in [ISO 8601](https://en.wikipedia.org/wiki/ISO_8601) format: &#x60;YYYY-MM-DDTHH:MM:SSZ&#x60;. | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitCreateCommitRequestCommitter.new(
  name: null,
  email: null,
  date: null
)
```

