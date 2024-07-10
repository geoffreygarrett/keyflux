# OpenapiClient::FeedLinks

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **timeline** | [**LinkWithType**](LinkWithType.md) |  |  |
| **user** | [**LinkWithType**](LinkWithType.md) |  |  |
| **security_advisories** | [**LinkWithType**](LinkWithType.md) |  | [optional] |
| **current_user** | [**LinkWithType**](LinkWithType.md) |  | [optional] |
| **current_user_public** | [**LinkWithType**](LinkWithType.md) |  | [optional] |
| **current_user_actor** | [**LinkWithType**](LinkWithType.md) |  | [optional] |
| **current_user_organization** | [**LinkWithType**](LinkWithType.md) |  | [optional] |
| **current_user_organizations** | [**Array&lt;LinkWithType&gt;**](LinkWithType.md) |  | [optional] |
| **repository_discussions** | [**LinkWithType**](LinkWithType.md) |  | [optional] |
| **repository_discussions_category** | [**LinkWithType**](LinkWithType.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::FeedLinks.new(
  timeline: null,
  user: null,
  security_advisories: null,
  current_user: null,
  current_user_public: null,
  current_user_actor: null,
  current_user_organization: null,
  current_user_organizations: null,
  repository_discussions: null,
  repository_discussions_category: null
)
```

