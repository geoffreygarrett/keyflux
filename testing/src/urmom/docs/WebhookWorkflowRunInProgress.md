# OpenapiClient::WebhookWorkflowRunInProgress

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **workflow** | [**WebhooksWorkflow**](WebhooksWorkflow.md) |  |  |
| **workflow_run** | [**WorkflowRun1**](WorkflowRun1.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookWorkflowRunInProgress.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  workflow: null,
  workflow_run: null
)
```

