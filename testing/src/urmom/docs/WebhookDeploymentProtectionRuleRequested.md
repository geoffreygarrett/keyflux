# OpenapiClient::WebhookDeploymentProtectionRuleRequested

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  | [optional] |
| **environment** | **String** | The name of the environment that has the deployment protection rule. | [optional] |
| **event** | **String** | The event that triggered the deployment protection rule. | [optional] |
| **deployment_callback_url** | **String** | The URL to review the deployment protection rule. | [optional] |
| **deployment** | [**Deployment**](Deployment.md) |  | [optional] |
| **pull_requests** | [**Array&lt;PullRequest&gt;**](PullRequest.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  | [optional] |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookDeploymentProtectionRuleRequested.new(
  action: null,
  environment: null,
  event: null,
  deployment_callback_url: null,
  deployment: null,
  pull_requests: null,
  repository: null,
  organization: null,
  installation: null,
  sender: null
)
```

