# OpenapiClient::OrganizationSimple

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **login** | **String** |  |  |
| **id** | **Integer** |  |  |
| **node_id** | **String** |  |  |
| **url** | **String** |  |  |
| **repos_url** | **String** |  |  |
| **events_url** | **String** |  |  |
| **hooks_url** | **String** |  |  |
| **issues_url** | **String** |  |  |
| **members_url** | **String** |  |  |
| **public_members_url** | **String** |  |  |
| **avatar_url** | **String** |  |  |
| **description** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::OrganizationSimple.new(
  login: github,
  id: 1,
  node_id: MDEyOk9yZ2FuaXphdGlvbjE&#x3D;,
  url: https://api.github.com/orgs/github,
  repos_url: https://api.github.com/orgs/github/repos,
  events_url: https://api.github.com/orgs/github/events,
  hooks_url: https://api.github.com/orgs/github/hooks,
  issues_url: https://api.github.com/orgs/github/issues,
  members_url: https://api.github.com/orgs/github/members{/member},
  public_members_url: https://api.github.com/orgs/github/public_members{/member},
  avatar_url: https://github.com/images/error/octocat_happy.gif,
  description: A great organization
)
```

