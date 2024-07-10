# OpenapiClient::Collaborator

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **login** | **String** |  |  |
| **id** | **Integer** |  |  |
| **email** | **String** |  | [optional] |
| **name** | **String** |  | [optional] |
| **node_id** | **String** |  |  |
| **avatar_url** | **String** |  |  |
| **gravatar_id** | **String** |  |  |
| **url** | **String** |  |  |
| **html_url** | **String** |  |  |
| **followers_url** | **String** |  |  |
| **following_url** | **String** |  |  |
| **gists_url** | **String** |  |  |
| **starred_url** | **String** |  |  |
| **subscriptions_url** | **String** |  |  |
| **organizations_url** | **String** |  |  |
| **repos_url** | **String** |  |  |
| **events_url** | **String** |  |  |
| **received_events_url** | **String** |  |  |
| **type** | **String** |  |  |
| **site_admin** | **Boolean** |  |  |
| **permissions** | [**CollaboratorPermissions**](CollaboratorPermissions.md) |  | [optional] |
| **role_name** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Collaborator.new(
  login: octocat,
  id: 1,
  email: null,
  name: null,
  node_id: MDQ6VXNlcjE&#x3D;,
  avatar_url: https://github.com/images/error/octocat_happy.gif,
  gravatar_id: 41d064eb2195891e12d0413f63227ea7,
  url: https://api.github.com/users/octocat,
  html_url: https://github.com/octocat,
  followers_url: https://api.github.com/users/octocat/followers,
  following_url: https://api.github.com/users/octocat/following{/other_user},
  gists_url: https://api.github.com/users/octocat/gists{/gist_id},
  starred_url: https://api.github.com/users/octocat/starred{/owner}{/repo},
  subscriptions_url: https://api.github.com/users/octocat/subscriptions,
  organizations_url: https://api.github.com/users/octocat/orgs,
  repos_url: https://api.github.com/users/octocat/repos,
  events_url: https://api.github.com/users/octocat/events{/privacy},
  received_events_url: https://api.github.com/users/octocat/received_events,
  type: User,
  site_admin: null,
  permissions: null,
  role_name: admin
)
```

