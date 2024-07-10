# OpenapiClient::WebhookRepositoryDispatchSample

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** | The &#x60;event_type&#x60; that was specified in the &#x60;POST /repos/{owner}/{repo}/dispatches&#x60; request body. |  |
| **branch** | **String** |  |  |
| **client_payload** | **Hash&lt;String, Object&gt;** | The &#x60;client_payload&#x60; that was specified in the &#x60;POST /repos/{owner}/{repo}/dispatches&#x60; request body. |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  | [optional] |
| **repository** | [**RepositoryWebhooks**](RepositoryWebhooks.md) |  |  |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookRepositoryDispatchSample.new(
  action: null,
  branch: null,
  client_payload: null,
  enterprise: null,
  installation: null,
  organization: null,
  repository: null,
  sender: null
)
```

