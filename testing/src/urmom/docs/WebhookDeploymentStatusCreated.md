# OpenapiClient::WebhookDeploymentStatusCreated

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **check_run** | [**WebhookDeploymentStatusCreatedCheckRun**](WebhookDeploymentStatusCreatedCheckRun.md) |  | [optional] |
| **deployment** | [**Deployment1**](Deployment1.md) |  |  |
| **deployment_status** | [**WebhookDeploymentStatusCreatedDeploymentStatus**](WebhookDeploymentStatusCreatedDeploymentStatus.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **workflow** | [**WebhooksWorkflow**](WebhooksWorkflow.md) |  | [optional] |
| **workflow_run** | [**DeploymentWorkflowRun4**](DeploymentWorkflowRun4.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDeploymentStatusCreated.new(
  action: null,
  check_run: null,
  deployment: null,
  deployment_status: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null,
  workflow: null,
  workflow_run: null
)
```

