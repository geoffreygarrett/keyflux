# OpenapiClient::WebhookStatus

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **avatar_url** | **String** |  | [optional] |
| **branches** | [**Array&lt;WebhookStatusBranchesInner&gt;**](WebhookStatusBranchesInner.md) | An array of branch objects containing the status&#39; SHA. Each branch contains the given SHA, but the SHA may or may not be the head of the branch. The array includes a maximum of 10 branches. |  |
| **commit** | [**WebhookStatusCommit**](WebhookStatusCommit.md) |  |  |
| **context** | **String** |  |  |
| **created_at** | **String** |  |  |
| **description** | **String** | The optional human-readable description added to the status. |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **id** | **Integer** | The unique identifier of the status. |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **name** | **String** |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **sha** | **String** | The Commit SHA. |  |
| **state** | **String** | The new state. Can be &#x60;pending&#x60;, &#x60;success&#x60;, &#x60;failure&#x60;, or &#x60;error&#x60;. |  |
| **target_url** | **String** | The optional link added to the status. |  |
| **updated_at** | **String** |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookStatus.new(
  avatar_url: null,
  branches: null,
  commit: null,
  context: null,
  created_at: null,
  description: null,
  enterprise: null,
  id: null,
  installation: null,
  name: null,
  organization: null,
  repository: null,
  sender: null,
  sha: null,
  state: null,
  target_url: null,
  updated_at: null
)
```

