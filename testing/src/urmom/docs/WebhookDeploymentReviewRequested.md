# OpenapiClient::WebhookDeploymentReviewRequested

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **environment** | **String** |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **requestor** | [**WebhooksUser**](WebhooksUser.md) |  |  |
| **reviewers** | [**Array&lt;WebhookDeploymentReviewRequestedReviewersInner&gt;**](WebhookDeploymentReviewRequestedReviewersInner.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **since** | **String** |  |  |
| **workflow_job_run** | [**WebhookDeploymentReviewRequestedWorkflowJobRun**](WebhookDeploymentReviewRequestedWorkflowJobRun.md) |  |  |
| **workflow_run** | [**DeploymentWorkflowRun3**](DeploymentWorkflowRun3.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDeploymentReviewRequested.new(
  action: null,
  enterprise: null,
  environment: null,
  installation: null,
  organization: null,
  repository: null,
  requestor: null,
  reviewers: null,
  sender: null,
  since: null,
  workflow_job_run: null,
  workflow_run: null
)
```

