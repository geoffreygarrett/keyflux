# OpenapiClient::PendingDeploymentReviewersInnerReviewer

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** |  |  |
| **email** | **String** |  | [optional] |
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
| **starred_at** | **String** |  | [optional] |
| **slug** | **String** |  |  |
| **description** | **String** |  |  |
| **privacy** | **String** |  | [optional] |
| **notification_setting** | **String** |  | [optional] |
| **permission** | **String** |  |  |
| **permissions** | [**TeamPermissions**](TeamPermissions.md) |  | [optional] |
| **members_url** | **String** |  |  |
| **repositories_url** | **String** |  |  |
| **parent** | [**NullableTeamSimple**](NullableTeamSimple.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::PendingDeploymentReviewersInnerReviewer.new(
  name: null,
  email: null,
  login: octocat,
  id: null,
  node_id: null,
  avatar_url: https://github.com/images/error/octocat_happy.gif,
  gravatar_id: 41d064eb2195891e12d0413f63227ea7,
  url: null,
  html_url: https://github.com/orgs/rails/teams/core,
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
  starred_at: &quot;2020-07-09T00:17:55Z&quot;,
  slug: null,
  description: null,
  privacy: null,
  notification_setting: null,
  permission: null,
  permissions: null,
  members_url: null,
  repositories_url: null,
  parent: null
)
```

