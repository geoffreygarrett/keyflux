# OpenapiClient::RepositoryInvitation

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **id** | **Integer** | Unique identifier of the repository invitation. |  |
| **repository** | [**MinimalRepository**](MinimalRepository.md) |  |  |
| **invitee** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **inviter** | [**NullableSimpleUser**](NullableSimpleUser.md) |  |  |
| **permissions** | **String** | The permission associated with the invitation. |  |
| **created_at** | **Time** |  |  |
| **expired** | **Boolean** | Whether or not the invitation has expired | [optional] |
| **url** | **String** | URL for the repository invitation |  |
| **html_url** | **String** |  |  |
| **node_id** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::RepositoryInvitation.new(
  id: 42,
  repository: null,
  invitee: null,
  inviter: null,
  permissions: read,
  created_at: 2016-06-13T14:52:50-05:00,
  expired: null,
  url: https://api.github.com/user/repository-invitations/1,
  html_url: https://github.com/octocat/Hello-World/invitations,
  node_id: null
)
```

