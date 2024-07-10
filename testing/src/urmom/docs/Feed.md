# OpenapiClient::Feed

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **timeline_url** | **String** |  |  |
| **user_url** | **String** |  |  |
| **current_user_public_url** | **String** |  | [optional] |
| **current_user_url** | **String** |  | [optional] |
| **current_user_actor_url** | **String** |  | [optional] |
| **current_user_organization_url** | **String** |  | [optional] |
| **current_user_organization_urls** | **Array&lt;String&gt;** |  | [optional] |
| **security_advisories_url** | **String** |  | [optional] |
| **repository_discussions_url** | **String** | A feed of discussions for a given repository. | [optional] |
| **repository_discussions_category_url** | **String** | A feed of discussions for a given repository and category. | [optional] |
| **_links** | [**FeedLinks**](FeedLinks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::Feed.new(
  timeline_url: https://github.com/timeline,
  user_url: https://github.com/{user},
  current_user_public_url: https://github.com/octocat,
  current_user_url: https://github.com/octocat.private?token&#x3D;abc123,
  current_user_actor_url: https://github.com/octocat.private.actor?token&#x3D;abc123,
  current_user_organization_url: https://github.com/octocat-org,
  current_user_organization_urls: [&quot;https://github.com/organizations/github/octocat.private.atom?token&#x3D;abc123&quot;],
  security_advisories_url: https://github.com/security-advisories,
  repository_discussions_url: https://github.com/{user}/{repo}/discussions,
  repository_discussions_category_url: https://github.com/{user}/{repo}/discussions/categories/{category},
  _links: null
)
```

