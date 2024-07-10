# OpenapiClient::GitCommitAuthor

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **date** | **Time** | Timestamp of the commit |  |
| **email** | **String** | Git email address of the user |  |
| **name** | **String** | Name of the git user |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::GitCommitAuthor.new(
  date: 2014-08-09T08:02:04+12:00,
  email: monalisa.octocat@example.com,
  name: Monalisa Octocat
)
```

