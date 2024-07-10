# OpenapiClient::WebhookCreate

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **description** | **String** | The repository&#39;s current description. |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **master_branch** | **String** | The name of the repository&#39;s default branch (usually &#x60;main&#x60;). |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **pusher_type** | **String** | The pusher type for the event. Can be either &#x60;user&#x60; or a deploy key. |  |
| **ref** | **String** | The [&#x60;git ref&#x60;](https://docs.github.com/rest/git/refs#get-a-reference) resource. |  |
| **ref_type** | **String** | The type of Git ref object created in the repository. |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCreate.new(
  description: null,
  enterprise: null,
  installation: null,
  master_branch: null,
  organization: null,
  pusher_type: null,
  ref: null,
  ref_type: null,
  repository: null,
  sender: null
)
```

