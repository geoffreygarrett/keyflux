# OpenapiClient::BranchRestrictionPolicyAppsInnerOwner

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **login** | **String** |  | [optional] |
| **id** | **Integer** |  | [optional] |
| **node_id** | **String** |  | [optional] |
| **url** | **String** |  | [optional] |
| **repos_url** | **String** |  | [optional] |
| **events_url** | **String** |  | [optional] |
| **hooks_url** | **String** |  | [optional] |
| **issues_url** | **String** |  | [optional] |
| **members_url** | **String** |  | [optional] |
| **public_members_url** | **String** |  | [optional] |
| **avatar_url** | **String** |  | [optional] |
| **description** | **String** |  | [optional] |
| **gravatar_id** | **String** |  | [optional] |
| **html_url** | **String** |  | [optional] |
| **followers_url** | **String** |  | [optional] |
| **following_url** | **String** |  | [optional] |
| **gists_url** | **String** |  | [optional] |
| **starred_url** | **String** |  | [optional] |
| **subscriptions_url** | **String** |  | [optional] |
| **organizations_url** | **String** |  | [optional] |
| **received_events_url** | **String** |  | [optional] |
| **type** | **String** |  | [optional] |
| **site_admin** | **Boolean** |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::BranchRestrictionPolicyAppsInnerOwner.new(
  login: null,
  id: null,
  node_id: null,
  url: null,
  repos_url: null,
  events_url: null,
  hooks_url: null,
  issues_url: null,
  members_url: null,
  public_members_url: null,
  avatar_url: null,
  description: null,
  gravatar_id: &quot;&quot;,
  html_url: &quot;https://github.com/testorg-ea8ec76d71c3af4b&quot;,
  followers_url: &quot;https://api.github.com/users/testorg-ea8ec76d71c3af4b/followers&quot;,
  following_url: &quot;https://api.github.com/users/testorg-ea8ec76d71c3af4b/following{/other_user}&quot;,
  gists_url: &quot;https://api.github.com/users/testorg-ea8ec76d71c3af4b/gists{/gist_id}&quot;,
  starred_url: &quot;https://api.github.com/users/testorg-ea8ec76d71c3af4b/starred{/owner}{/repo}&quot;,
  subscriptions_url: &quot;https://api.github.com/users/testorg-ea8ec76d71c3af4b/subscriptions&quot;,
  organizations_url: &quot;https://api.github.com/users/testorg-ea8ec76d71c3af4b/orgs&quot;,
  received_events_url: &quot;https://api.github.com/users/testorg-ea8ec76d71c3af4b/received_events&quot;,
  type: &quot;Organization&quot;,
  site_admin: false
)
```

