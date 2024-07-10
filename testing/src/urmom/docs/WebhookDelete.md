# OpenapiClient::WebhookDelete

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pusher_type** | **String** | The pusher type for the event. Can be either &#x60;user&#x60; or a deploy key. |  |
| **ref** | **String** | The [&#x60;git ref&#x60;](https://docs.github.com/rest/git/refs#get-a-reference) resource. |  |
| **ref_type** | **String** | The type of Git ref object deleted in the repository. |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDelete.new(
  enterprise: null,
  installation: null,
  organization: null,
  pusher_type: null,
  ref: null,
  ref_type: null,
  repository: null,
  sender: null
)
```

