# OpenapiClient::PublicUser

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
| **plan** | [**PublicUserPlan**](PublicUserPlan.md) |  | [optional] |
| **suspended_at** | **Time** |  | [optional] |
| **private_gists** | **Integer** |  | [optional] |
| **total_private_repos** | **Integer** |  | [optional] |
| **owned_private_repos** | **Integer** |  | [optional] |
| **disk_usage** | **Integer** |  | [optional] |
| **collaborators** | **Integer** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PublicUser.new(
  login: null,
  id: null,
  node_id: null,
  avatar_url: null,
  gravatar_id: null,
  url: null,
  html_url: null,
  followers_url: null,
  following_url: null,
  gists_url: null,
  starred_url: null,
  subscriptions_url: null,
  organizations_url: null,
  repos_url: null,
  events_url: null,
  received_events_url: null,
  type: null,
  site_admin: null,
  name: null,
  company: null,
  blog: null,
  location: null,
  email: null,
  notification_email: null,
  hireable: null,
  bio: null,
  twitter_username: null,
  public_repos: null,
  public_gists: null,
  followers: null,
  following: null,
  created_at: null,
  updated_at: null,
  plan: null,
  suspended_at: null,
  private_gists: 1,
  total_private_repos: 2,
  owned_private_repos: 2,
  disk_usage: 1,
  collaborators: 3
)
```

