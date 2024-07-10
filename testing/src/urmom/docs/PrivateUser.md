# OpenapiClient::PrivateUser

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **login** | **String** |  |  |
| **id** | **Integer** |  |  |
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
| **name** | **String** |  |  |
| **company** | **String** |  |  |
| **blog** | **String** |  |  |
| **location** | **String** |  |  |
| **email** | **String** |  |  |
| **notification_email** | **String** |  | [optional] |
| **hireable** | **Boolean** |  |  |
| **bio** | **String** |  |  |
| **twitter_username** | **String** |  | [optional] |
| **public_repos** | **Integer** |  |  |
| **public_gists** | **Integer** |  |  |
| **followers** | **Integer** |  |  |
| **following** | **Integer** |  |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |
| **private_gists** | **Integer** |  |  |
| **total_private_repos** | **Integer** |  |  |
| **owned_private_repos** | **Integer** |  |  |
| **disk_usage** | **Integer** |  |  |
| **collaborators** | **Integer** |  |  |
| **two_factor_authentication** | **Boolean** |  |  |
| **plan** | [**PublicUserPlan**](PublicUserPlan.md) |  | [optional] |
| **suspended_at** | **Time** |  | [optional] |
| **business_plus** | **Boolean** |  | [optional] |
| **ldap_dn** | **String** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PrivateUser.new(
  login: octocat,
  id: 1,
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
  name: monalisa octocat,
  company: GitHub,
  blog: https://github.com/blog,
  location: San Francisco,
  email: octocat@github.com,
  notification_email: octocat@github.com,
  hireable: null,
  bio: There once was...,
  twitter_username: monalisa,
  public_repos: 2,
  public_gists: 1,
  followers: 20,
  following: 0,
  created_at: 2008-01-14T04:33:35Z,
  updated_at: 2008-01-14T04:33:35Z,
  private_gists: 81,
  total_private_repos: 100,
  owned_private_repos: 100,
  disk_usage: 10000,
  collaborators: 8,
  two_factor_authentication: true,
  plan: null,
  suspended_at: null,
  business_plus: null,
  ldap_dn: null
)
```

