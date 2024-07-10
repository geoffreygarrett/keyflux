# OpenapiClient::WebhookWorkflowJobWaiting

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **workflow_job** | [**WebhookWorkflowJobWaitingWorkflowJob**](WebhookWorkflowJobWaitingWorkflowJob.md) |  |  |
| **deployment** | [**Deployment**](Deployment.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookWorkflowJobWaiting.new(
  action: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  workflow_job: null,
  deployment: null
)
```

