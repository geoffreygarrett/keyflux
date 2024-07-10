# OpenapiClient::WebhookDeploymentReviewRejected

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **approver** | [**WebhooksApprover**](WebhooksApprover.md) |  | [optional] |
| **comment** | **String** |  | [optional] |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **reviewers** | [**Array&lt;WebhooksReviewersInner&gt;**](WebhooksReviewersInner.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **since** | **String** |  |  |
| **workflow_job_run** | [**WebhooksWorkflowJobRun**](WebhooksWorkflowJobRun.md) |  | [optional] |
| **workflow_job_runs** | [**Array&lt;WebhookDeploymentReviewRejectedWorkflowJobRunsInner&gt;**](WebhookDeploymentReviewRejectedWorkflowJobRunsInner.md) |  | [optional] |
| **workflow_run** | [**DeploymentWorkflowRun2**](DeploymentWorkflowRun2.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDeploymentReviewRejected.new(
  action: null,
  approver: null,
  comment: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  reviewers: null,
  sender: null,
  since: null,
  workflow_job_run: null,
  workflow_job_runs: null,
  workflow_run: null
)
```

