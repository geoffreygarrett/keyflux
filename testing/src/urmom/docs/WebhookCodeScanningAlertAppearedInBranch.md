# OpenapiClient::WebhookCodeScanningAlertAppearedInBranch

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **alert** | [**WebhookCodeScanningAlertAppearedInBranchAlert**](WebhookCodeScanningAlertAppearedInBranchAlert.md) |  |  |
| **commit_oid** | **String** | The commit SHA of the code scanning alert. When the action is &#x60;reopened_by_user&#x60; or &#x60;closed_by_user&#x60;, the event was triggered by the &#x60;sender&#x60; and this value will be empty. |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  | [optional] |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **ref** | **String** | The Git reference of the code scanning alert. When the action is &#x60;reopened_by_user&#x60; or &#x60;closed_by_user&#x60;, the event was triggered by the &#x60;sender&#x60; and this value will be empty. |  |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookCodeScanningAlertAppearedInBranch.new(
  action: null,
  alert: null,
  commit_oid: null,
  enterprise: null,
  installation: null,
  organization: null,
  ref: null,
  repository: null,
  sender: null
)
```

