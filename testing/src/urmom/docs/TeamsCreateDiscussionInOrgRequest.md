# OpenapiClient::TeamsCreateDiscussionInOrgRequest

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **title** | **String** | The discussion post&#39;s title. |  |
| **body** | **String** | The discussion post&#39;s body text. |  |
| **private** | **Boolean** | Private posts are only visible to team members, organization owners, and team maintainers. Public posts are visible to all members of the organization. Set to &#x60;true&#x60; to create a private post. | [optional][default to false] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::TeamsCreateDiscussionInOrgRequest.new(
  title: null,
  body: null,
  private: null
)
```

