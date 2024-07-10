# OpenapiClient::WebhookPersonalAccessTokenRequestDenied

## Properties

| Name | Type | Description | Notes |
| ---- | ---- | ----------- | ----- |
| **action** | **String** |  |  |
| **personal_access_token_request** | [**PersonalAccessTokenRequest**](PersonalAccessTokenRequest.md) |  |  |
| **organization** | [**OrganizationSimpleWebhooks**](OrganizationSimpleWebhooks.md) |  |  |
| **enterprise** | [**EnterpriseWebhooks**](EnterpriseWebhooks.md) |  | [optional] |
| **sender** | [**SimpleUserWebhooks**](SimpleUserWebhooks.md) |  |  |
| **installation** | [**SimpleInstallation**](SimpleInstallation.md) |  |  |

## Example

```ruby
require 'openapi_client'

instance = OpenapiClient::WebhookPersonalAccessTokenRequestDenied.new(
  action: null,
  personal_access_token_request: null,
  organization: null,
  enterprise: null,
  sender: null,
  installation: null
)
```

