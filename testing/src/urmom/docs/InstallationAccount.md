# OpenapiClient::InstallationAccount

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **name** | **String** | The name of the enterprise. |  |
| **email** | **String** |  | [optional] |
| **login** | **String** |  |  |
| **id** | **Integer** | Unique identifier of the enterprise |  |
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
| **description** | **String** | A short description of the enterprise. | [optional] |
| **website_url** | **String** | The enterprise&#39;s website URL. | [optional] |
| **slug** | **String** | The slug url identifier for the enterprise. |  |
| **created_at** | **Time** |  |  |
| **updated_at** | **Time** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::InstallationAccount.new(
  name: Octo Business,
  email: null,
  login: octocat,
  id: 42,
  node_id: MDEwOlJlcG9zaXRvcnkxMjk2MjY5,
  avatar_url: null,
  gravatar_id: 41d064eb2195891e12d0413f63227ea7,
  url: https://api.github.com/users/octocat,
  html_url: https://github.com/enterprises/octo-business,
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
  description: null,
  website_url: null,
  slug: octo-business,
  created_at: 2019-01-26T19:01:12Z,
  updated_at: 2019-01-26T19:14:43Z
)
```

